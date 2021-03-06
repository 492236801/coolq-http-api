#pragma once

#include "cqhttp/core/plugin.h"

namespace cqhttp::plugins {
    struct IniConfigLoader : Plugin {
        std::string name() const override { return "ini_config_loader"; }
        void hook_enable(Context &ctx) override;
    };

    static std::shared_ptr<IniConfigLoader> ini_config_loader = std::make_shared<IniConfigLoader>();
} // namespace cqhttp::plugins
