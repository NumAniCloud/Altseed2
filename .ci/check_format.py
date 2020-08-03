import glob
import subprocess
import chardet
import difflib

hs = glob.glob('../core/**/*.h', recursive=True)
cpps = glob.glob('../core/**/*.cpp', recursive=True)
# mm = glob.glob('../core/**/*.mm', recursive=True)

# targets = hs + cpps + mm

targets = hs + cpps

errors = []

for p in targets:
    # special case
    if 'AutoGeneratedCoreWrapper.cpp' in p:
        continue

    try:
        formatted = subprocess.check_output(
            ['clang-format', '-style=file', p]).decode().replace('\ufeff', '')
    except Exception as e:
        errors.append([p, e])
        continue

    with open(p, 'rb') as f:
        enc = chardet.detect(f.read())['encoding']

    f = open(p, 'r', encoding=enc)
    original = f.read()
    f.close()

    original = original.replace('\r', '')
    formatted = formatted.replace('\r', '')

    if(formatted != original):
        d = difflib.Differ()
        diff = d.compare(original.split('\n'), formatted.split('\n'))
        errors.append([p, 'difference(s) detected:'+('\n'.join(diff))])

for m in errors:
    print('################################################')
    print('Error on {}'.format(m[0]))
    print('################################################')
    print(m[1])
    print('\n\n')

if len(m) != 0:
    raise Exception
