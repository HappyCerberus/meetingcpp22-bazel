#include "library.h"
#include <vector>
#include <algorithm>
#include "catch2/catch_test_macros.hpp"

TEST_CASE("Testing library", "[sort]") {
    std::vector<int> data = {5, 4, 3, 2, 1};
    library::sort(data);
    REQUIRE(std::is_sorted(data.begin(), data.end()));
}