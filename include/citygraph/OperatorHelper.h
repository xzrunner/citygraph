#pragma once

#include "citygraph/typedef.h"

namespace hf { class HeightField; }

namespace citygraph
{

class OperatorHelper
{
public:
    static OperatorPtr GetInputOperator(const Operator& op, size_t idx);
    static std::shared_ptr<hf::HeightField>
        GetInputHeight(const Operator& op, size_t idx);

}; // OperatorHelper

}