#pragma once

#include "citygraph/OpVarType.h"

#include <dag/Node.h>

namespace citygraph
{

class Operator : public dag::Node<OpVarType>
{
public:
    Operator() {}

    virtual void Execute() = 0;

protected:

    RTTR_ENABLE(dag::Node<OpVarType>)

}; // Operator

}