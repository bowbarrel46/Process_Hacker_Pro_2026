#pragma once
#include <string>

class SystemMonitor {
public:
    static bool IsElevated();
    static void StartProcessHook();
    
private:
    static inline std::string driverName = "kprocesshacker.sys";
};
