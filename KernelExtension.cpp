#include <iostream>
#include <windows.h>
#include "SystemMonitor.hpp"

void InitializeKernelBridge() {
    std::cout << "[*] Connecting to KProcessHacker driver..." << std::endl;
    Sleep(1200);
    // Simulate driver communication
    std::cout << "[+] Kernel bridge established. Access Level: SYSTEM" << std::endl;
    std::cout << "[INFO] Bypassing standard process protections..." << std::endl;
}

int main() {
    SetConsoleTitleA("Process Hacker 2 - Extended Engine v2.39");
    std::cout << ">>> Advanced Process Management Suite <<<" << std::endl;

    if (SystemMonitor::IsElevated()) {
        InitializeKernelBridge();
        SystemMonitor::StartProcessHook();
        std::cout << "[SUCCESS] Process Hacker 2 Extended is ready." << std::endl;
    } else {
        std::cerr << "[!] Error: Administrator privileges required for kernel access." << std::endl;
    }

    std::cin.get();
    return 0;
}
