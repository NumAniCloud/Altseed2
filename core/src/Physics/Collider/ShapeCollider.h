#pragma once

#include "../../Common/Array.h"
#include "CircleCollider.h"
#include "Collider.h"
#include "EdgeCollider.h"
#include "PolygonCollider.h"

namespace Altseed2 {

class ShapeCollider : public Collider {
private:
    b2PolygonShape shape_;
    std::shared_ptr<Vector2FArray> vertexes_;

protected:
    std::pair<b2Shape*, int32_t> GetB2Shapes() override { return {&shape_, 1}; }

public:
    ShapeCollider();

    static std::shared_ptr<ShapeCollider> Create();

    std::shared_ptr<Vector2FArray> GetVertexes() const;
    void SetVertexes(const std::shared_ptr<Vector2FArray>& vertexes);
};

}  // namespace Altseed2