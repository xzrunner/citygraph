#ifndef EXE_FILEPATH
#error "You must define EXE_FILEPATH macro before include this file"
#endif

#define PARM_OP_TYPE ShortestPath
#define PARM_OP_NAME shortest_path
#include EXE_FILEPATH

#define PARM_OP_TYPE HeightField
#define PARM_OP_NAME height_field
#include EXE_FILEPATH
