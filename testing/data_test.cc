#include <iostream>
#include <fstream>
#include "tools/cpp/runfiles/runfiles.h"

int main() {
    std::string error;
    using bazel::tools::cpp::runfiles::Runfiles;
    std::unique_ptr<Runfiles> runfiles(Runfiles::CreateForTest(&error));
    if (runfiles == nullptr) {
        std::cerr << error << "\n";
        return 1;
    }

    std::string file_path = runfiles->Rlocation("bazel_demo/testing/file.txt");
    std::fstream data(file_path);
    if (!data.is_open()) {
        std::cerr << "Failed to open file {" << file_path << "}\n";
        return 1;
    }
    
    std::string line;
    getline(data, line);
    std::cout << line << "\n";
    return 0;
}