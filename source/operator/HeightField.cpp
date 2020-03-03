#include "citygraph/operator/HeightField.h"
#include "citygraph/ParamImpl.h"

#include <heightfield/Loader.h>

namespace citygraph
{
namespace op
{

void HeightField::Execute(const std::shared_ptr<dag::Context>& ctx)
{
    if (m_filepath.empty()) {
        return;
    }

    auto hf = hf::Loader::Load(m_filepath);
    auto hf_param = std::make_shared<HeightFieldParam>(hf);
    m_vals.resize(1);
    m_vals[0] = hf_param;

    m_hf = hf;
}

}
}