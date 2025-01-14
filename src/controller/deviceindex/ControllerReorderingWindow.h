#pragma once

#include "stdint.h"
#include "window/gui/GuiWindow.h"
#include <imgui.h>
#include <unordered_map>
#include <string>
#include <vector>
#include "controller/controldevice/controller/Controller.h"

namespace Ship {

class ControllerReorderingWindow : public GuiWindow {
  public:
    using GuiWindow::GuiWindow;
    ~ControllerReorderingWindow();

  protected:
    void InitElement() override;
    void DrawElement() override;
    void UpdateElement() override;

  private:
    int32_t GetSDLIndexFromSDLInput();
    std::vector<int32_t> mDeviceIndices;
    uint8_t mCurrentPortNumber;
};
} // namespace Ship
