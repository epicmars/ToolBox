#include "hardware_utils.h"
#include <windows.h>

HardwareUtils::HardwareUtils(/* args */)
{
}

HardwareUtils::~HardwareUtils()
{
}

int HardwareUtils::GetBatteryLevel() {
    SYSTEM_POWER_STATUS status;
    if (GetSystemPowerStatus(&status) == 0 || status.BatteryLifePercent == 255) {
        return -1;
    }
    return status.BatteryLifePercent;
}