#pragma once

#include "citygraph/Operator.h"

#include <SM_Vector.h>

namespace citygraph
{
namespace op
{

class HeightField : public Operator
{
public:
    HeightField()
    {
        m_exports = {
            {{ ParamType::HeightField, "out" }},
        };
    }

    virtual void Execute(const std::shared_ptr<dag::Context>& ctx = nullptr) override;

    RTTR_ENABLE(Operator)

#define PARM_FILEPATH "citygraph/operator/HeightField.parm.h"
#include <dag/node_parms_gen.h>
#undef PARM_FILEPATH

}; // HeightField

}
}