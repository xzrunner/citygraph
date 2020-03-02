#define XSTR(s) STR(s)
#define STR(s) #s

#ifndef PARM_OP_TYPE
#error "You must define PARM_OP_TYPE macro before include this file"
#endif

#ifndef PARM_FILEPATH_H
#define PARM_FILEPATH_H citygraph/operator/##PARM_OP_TYPE##.h
#endif

#include XSTR(PARM_FILEPATH_H)

#undef PARM_OP_NAME
#undef PARM_OP_TYPE
#undef PARM_FILEPATH_H
