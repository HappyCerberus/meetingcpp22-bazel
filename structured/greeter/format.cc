#include "format.h"

namespace greeter {
    std::string format(std::string_view str) {
        std::string result;
        result += ">>> ";
        result += str;
        result += " <<<\n";
        return result;
    }
}