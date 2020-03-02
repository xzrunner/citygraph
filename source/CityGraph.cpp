#include "citygraph/CityGraph.h"

namespace citygraph
{

CU_SINGLETON_DEFINITION(CityGraph);

extern void regist_rttr();

CityGraph::CityGraph()
{
	regist_rttr();
}

}