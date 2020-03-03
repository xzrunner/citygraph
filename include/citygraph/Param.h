#pragma once

#include "citygraph/ParamType.h"

namespace citygraph
{

class Param
{
public:
    virtual ParamType Type() const = 0;

}; // Param

}