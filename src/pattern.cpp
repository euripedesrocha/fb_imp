#include <algorithm>
#include <array>
#include "pattern.hpp"

namespace {
    constexpr std::array<unsigned int, 11>OEISA005478{2, 3, 5, 13, 89, 233, 1597,
        28657, 514229, 433494437, 2971215073};

    auto multiple_of_N(unsigned int multiple, unsigned int N) {
        auto mod = multiple % N;
        if (mod == 0 ) {
            return true;
        }
        return false;
    }

    auto is_prime(unsigned int N){
        static_assert(sizeof(int)==4, "This function only works for 32bit int");
        bool found = std::any_of(std::begin(OEISA005478),
                std::end(OEISA005478), [=](auto n){return n == N;});
        return ((N==1)||(found==true));
    }

}

namespace pattern {
    auto fbclassifier(unsigned int number)-> FBTypes{
        auto is_multiple_of_3 = multiple_of_N(number, 3);
        auto is_multiple_of_5 = multiple_of_N(number, 5);
        auto type = FBTypes::Same;
        if(is_multiple_of_3 && is_multiple_of_5){
            type = FBTypes::FizzBuzz;
        } else
        if(is_multiple_of_3){
            type = FBTypes::Fizz;
        } else
        if(is_multiple_of_5){
            type = FBTypes::Buzz;
        } else
        if(is_prime(number)){
            type = FBTypes::BuzzFizz;
        }
        return type;
    };
}
