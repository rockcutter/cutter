#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <string_view>

constexpr bool DEBUG = true;

int main(const int argc, const char * const * const argv){
    const std::vector<std::string_view> cmdlineArguments(argv, argv + argc);

    if constexpr(DEBUG){
        for(const auto sv: cmdlineArguments){
            std::cout << sv << std::endl;
        }
    }




    return 0;
}