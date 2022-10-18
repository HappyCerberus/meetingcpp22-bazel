#include "greet.h"
#include "greet_defs.h"
#include "format.h"

#include <iostream>

namespace greeter {
    void greet() {
        std::cout << format(message);
    }
}