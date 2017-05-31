#include <iostream>
#include "sequence.hpp"
#include "pattern.hpp"

namespace ptn = pattern;

int main(int argc, char* argv[]){
    if(argc != 2) {
        std::cerr << "Usage: " << argv[0] << " N" << std::endl;
        return 1;
    }
    auto N = std::stoi(argv[1]);
    unsigned int number;
    sequence::fibonacci<decltype(number)> fibo;
    ptn::FBTypes type;
    for (auto i =0; i<N; ++i){
        number = fibo.next();
        type = ptn::fbclassifier(number);
        switch(type){
            case ptn::FBTypes::Buzz:
                std::cout << "Buzz" << std::endl;
                break;
            case ptn::FBTypes::Fizz:
                std::cout << "Fizz" << std::endl;
                break;
            case ptn::FBTypes::BuzzFizz:
                std::cout << "BuzzFizz" << std::endl;
                break;
            case ptn::FBTypes::FizzBuzz:
                std::cout << "FizzBuzz" << std::endl;
                break;
            case ptn::FBTypes::Same:
                std::cout << number << std::endl;
                break;
            default:
                std::cout << "Something wrong" << std::endl;
                break;
        }
    }
}
