#include "catch.hpp"
#include "sequence.hpp"

SCENARIO("A sequence generator"){
    sequence::fibonacci<unsigned int> fibo_seq;
    GIVEN("It's called 8 times for a new value"){
        REQUIRE(fibo_seq.next()==1);
        REQUIRE(fibo_seq.next()==1);
        REQUIRE(fibo_seq.next()==2);
        REQUIRE(fibo_seq.next()==3);
        REQUIRE(fibo_seq.next()==5);
        REQUIRE(fibo_seq.next()==8);
        REQUIRE(fibo_seq.next()==13);
        REQUIRE(fibo_seq.next()==21);
    }
}
