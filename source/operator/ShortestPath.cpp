#include "citygraph/operator/ShortestPath.h"
#include "citygraph/OperatorHelper.h"
#include "citygraph/ParamImpl.h"

namespace citygraph
{
namespace op
{

void ShortestPath::Execute(const std::shared_ptr<dag::Context>& ctx)
{
    m_hf = OperatorHelper::GetInputHeight(*this, 0);
    if (!m_hf) {
        return;
    }

    std::vector<sm::vec3> path({ m_start_pos, m_end_pos });

    m_vals.resize(1);
    m_vals[0] = std::make_shared<PathParam>(path);
}

}
}