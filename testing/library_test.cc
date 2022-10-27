#include "library.h"
#include <vector>
#include <algorithm>
#include "gtest/gtest.h"

TEST(LibraryTest, BasicTestCase) {
    std::vector<int> data = {5, 4, 3, 2, 1};
    library::sort(data);
    EXPECT_TRUE(std::is_sorted(data.begin(), data.end()));
}