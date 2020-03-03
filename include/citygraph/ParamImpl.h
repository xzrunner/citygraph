#pragma once

#include "citygraph/Param.h"

#include <memory>

namespace hf { class HeightField; }

namespace citygraph
{

class HeightFieldParam : public Param
{
public:
    explicit HeightFieldParam(const std::shared_ptr<hf::HeightField>& hf)
        : m_hf(hf) {}

    virtual ParamType Type() const override {
        return ParamType::HeightField;
    }

    auto& GetHeightField() const { return m_hf; }

private:
    std::shared_ptr<hf::HeightField> m_hf = nullptr;

}; // HeightFieldParam

class PathParam : public Param
{
public:
    explicit PathParam(const std::vector<sm::vec3>& path)
        : m_path(path) {}

    virtual ParamType Type() const override {
        return ParamType::Path;
    }

    auto& GetPath() const { return m_path; }

private:
    std::vector<sm::vec3> m_path;

}; // PathParam

}