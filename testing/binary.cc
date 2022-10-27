#include <ranges>
#include <span>
#include <string_view>

int main(int argc, char* argv[]) {
    auto args = std::ranges::subrange(argv, argv+argc) 
        | std::views::transform([](const char* s) { return std::string_view(s); });
    for (auto arg : args) {
        if (arg == "--should_fail")
            return 1;
        if (arg == "--should_succeed")
            return 0;
    }
    return 127;
}