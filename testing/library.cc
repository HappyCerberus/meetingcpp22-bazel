#include "library.h"
#include <algorithm>

namespace library {
    void sort(std::span<int> range) {
        std::sort(range.begin(), range.end());
    }
}