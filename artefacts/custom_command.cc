#include <iostream>
#include <fstream>

int main() {
    std::cout << "Hello from an installed binary.\n";
    std::fstream file("/usr/share/custom_command/file.txt");
    if (!file.is_open()) {
        std::cerr << "Failed to open file.\n";
        return 1;
    }
    std::string line;
    std::getline(file, line);
    std::cout << line << "\n";
    return 0;
}