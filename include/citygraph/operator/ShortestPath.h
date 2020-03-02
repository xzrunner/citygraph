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
            {{ OpVarType::Heightmap, "in" }},
        };
        m_exports = {
            {{ OpVarType::Path, "out" }},
        };
    }

    virtual void Execute() override;

    RTTR_ENABLE(Operator)

#define PARM_FILEPATH "citygraph/operator/ShortestPath.parm.h"
#include <dag/node_parms_gen.h>
#undef PARM_FILEPATH

}; // ShortestPath

}
}