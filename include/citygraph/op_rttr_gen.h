#define XSTR(s) STR(s)
#define STR(s) #s

#ifndef PARM_OP_TYPE
#error "You must define PARM_OP_TYPE macro before include this file"
#endif

#ifndef PARM_OP_NAME
#error "You must define PARM_OP_NAME macro before include this file"
#endif

#ifndef PARM_FILEPATH_PARM
#define PARM_FILEPATH_PARM citygraph/operator/##PARM_OP_TYPE##.parm.h
#endif

#define RTTR_NAME citygraph::##PARM_OP_NAME

rttr::registration::class_<citygraph::op::PARM_OP_TYPE>(XSTR(RTTR_NAME))
.constructor<>()
#define PARM_FILEPATH XSTR(PARM_FILEPATH_PARM)
#define PARM_NODE_CLASS citygraph::op::##PARM_OP_TYPE
#include <dag/rttr_prop_gen.h>
#undef PARM_FILEPATH
#undef PARM_NODE_CLASS
;

#undef PARM_OP_NAME
#undef PARM_OP_TYPE
#undef PARM_FILEPATH_PARM
