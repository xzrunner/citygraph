#pragma once

#include <memory>

namespace citygraph
{

class Operator;
using OperatorPtr = std::shared_ptr<Operator>;

class Param;
using ParamPtr = std::shared_ptr<Param>;

}