#ifndef HARDWARE_UTILS_H
#define HARDWARE_UTILS_H
#include <windows.h>

class HardwareUtils
{
private:
    /* data */
public:
    HardwareUtils(/* args */);
    ~HardwareUtils();
    int GetBatteryLevel();
};


#endif //HARDWARE_UTILS_H