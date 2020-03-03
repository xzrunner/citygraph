#include "citygraph/OperatorHelper.h"
#include "citygraph/Operator.h"

#include <dag/Utility.h>

namespace citygraph
{

OperatorPtr OperatorHelper::GetInputOperator(const Operator& op, size_t idx)
{
    auto prev = dag::Utility::GetInputNode(op, idx);
    return prev ? std::static_pointer_cast<Operator>(prev) : nullptr;
}

std::shared_ptr<hf::HeightField>
OperatorHelper::GetInputHeight(const Operator& op, size_t idx)
{
    auto prev_op = GetInputOperator(op, idx);
    if (prev_op) {
        return prev_op->GetHeightField();
    } else {
        return nullptr;
    }
}

}