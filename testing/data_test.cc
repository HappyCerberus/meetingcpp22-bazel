#include <iostream>
#include <fstream>
#include "tools/cpp/runfiles/runfiles.h"
using bazel::tools::cpp::runfiles::Runfiles;

int main() {
    std::string error;
    std::unique_ptr<Runfiles> runfiles(Runfiles::CreateForTest(&error));
    if (runfiles == nullptr) {
        std::cerr << error << "\n";
    }

    std::string file_path = runfiles->Rlocation("hello_world/testing/file.txt");
    std::fstream data(file_path);
    if (!data.is_open()) {
        std::cerr << "Failed to open file {" << file_path << "\n";
        return 1;
    }
    
    std::string line;
    getline(data, line);
    std::cout << line << "\n";
    return 0;
}