#define EXE_FILEPATH "citygraph/op_include_gen.h"
#include "citygraph/op_regist_cfg.h"
#undef EXE_FILEPATH

#include <rttr/registration>

RTTR_REGISTRATION
{

// base

rttr::registration::class_<dag::Node<citygraph::ParamType>::Port>("citygraph::Operator::Port")
	.property("var", &dag::Node<citygraph::ParamType>::Port::var)
;

rttr::registration::class_<citygraph::Operator>("citygraph::Operator")
	.method("GetImports", &citygraph::Operator::GetImports)
	.method("GetExports", &citygraph::Operator::GetExports)
;

#define EXE_FILEPATH "citygraph/op_rttr_gen.h"
#include "citygraph/op_regist_cfg.h"
#undef EXE_FILEPATH

}

namespace citygraph
{

void regist_rttr()
{
}

}