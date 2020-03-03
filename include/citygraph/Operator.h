#pragma once

#include "citygraph/typedef.h"
#include "citygraph/ParamType.h"

#include <dag/Node.h>

namespace hf { class HeightField; }

namespace citygraph
{

class Operator : public dag::Node<ParamType>
{
public:
    Operator() {}

    auto& GetAllValues() const { return m_vals; }

    auto GetHeightField() const { return m_hf; }

protected:
    std::vector<ParamPtr> m_vals;

    std::shared_ptr<hf::HeightField> m_hf = nullptr;

    RTTR_ENABLE(dag::Node<ParamType>)

}; // Operator

}