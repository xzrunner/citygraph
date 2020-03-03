#pragma once

#include "citygraph/Operator.h"

#include <SM_Vector.h>

namespace citygraph
{
namespace op
{

class ShortestPath : public Operator
{
public:
    ShortestPath()
    {
        m_imports = {
            {{ ParamType::HeightField, "in" }},
        };
        m_exports = {
            {{ ParamType::Path, "out" }},
        };
    }

    virtual void Execute(const std::shared_ptr<dag::Context>& ctx = nullptr) override;

    RTTR_ENABLE(Operator)

#define PARM_FILEPATH "citygraph/operator/ShortestPath.parm.h"
#include <dag/node_parms_gen.h>
#undef PARM_FILEPATH

}; // ShortestPath

}
}