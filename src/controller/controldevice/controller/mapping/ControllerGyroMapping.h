#pragma once

#include <cstdint>
#include <string>
#include "ControllerInputMapping.h"

namespace Ship {

#define GYRO_SENSITIVITY_DEFAULT 100

class ControllerGyroMapping : virtual public ControllerInputMapping {
  public:
    ControllerGyroMapping(PhysicalDeviceType physicalDeviceType, uint8_t portIndex, float sensitivity);
    virtual ~ControllerGyroMapping();
    virtual void UpdatePad(float& x, float& y) = 0;
    virtual void SaveToConfig() = 0;
    virtual void EraseFromConfig() = 0;
    virtual void Recalibrate() = 0;
    virtual std::string GetGyroMappingId() = 0;
    float GetSensitivity();
    uint8_t GetSensitivityPercent();
    void SetSensitivity(uint8_t sensitivityPercent);
    void ResetSensitivityToDefault();
    bool SensitivityIsDefault();
    void SetPortIndex(uint8_t portIndex);

  protected:
    uint8_t mPortIndex;
    uint8_t mSensitivityPercent;
    float mSensitivity;
};
} // namespace Ship
