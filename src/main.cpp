#include <iostream>
#include "cli.h"
#include <windows.h> 

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    
    std::cout << "🔐 FileVault CLI Started. Type 'help' or 'exit'.\n";

    std::string input;
    while (true) {
        std::cout << "vault> ";
        std::getline(std::cin, input);
        if (input == "exit") break;

        handleCommand(input);
    }

    std::cout << "👋 Exiting FileVault.\n";
    return 0;
}
