#include "catch.hpp"
#include "pattern.hpp"

using namespace pattern;

SCENARIO("A pattern classifier is used"){
    GIVEN("A multiple of 3 and not 5"){
        auto t = 9;
        WHEN("It's passed to the classifier"){
            auto fizzbuzztype = fbclassifier(t);
            THEN("It returns Fizz"){
                REQUIRE(fizzbuzztype == FBTypes::Buzz);
            }
        }
    }
    GIVEN("A multiple of 5 and not 3"){
        auto t = 10;
        WHEN("It's passed to the classifier"){
            auto fizzbuzztype = fbclassifier(t);
            THEN("It returns Fizz"){
                REQUIRE(fizzbuzztype == FBTypes::Fizz);
            }
        }
    }
    GIVEN("A multiple of 3 and 5"){
        auto t = 30;
        WHEN("It's passed to the classifier"){
            auto fizzbuzztype = fbclassifier(t);
            THEN("It returns Fizz"){
                REQUIRE(fizzbuzztype == FBTypes::FizzBuzz);
            }
        }
    }
    GIVEN("A prime number from the Fibonacci sequence"){
        auto t = 233;
        WHEN("It's passed to the classifier"){
            auto fizzbuzztype = fbclassifier(t);
            THEN("It returns Fizz"){
                REQUIRE(fizzbuzztype == FBTypes::BuzzFizz);
            }
        }
    }
    GIVEN("A number that doesn't fit any category"){
        auto t = 4;
        WHEN("It's passed to the classifier"){
            auto fizzbuzztype = fbclassifier(t);
            THEN("It returns Fizz"){
                REQUIRE(fizzbuzztype == FBTypes::Same);
            }
        }
    }
}
