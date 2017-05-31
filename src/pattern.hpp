namespace pattern {
    enum class FBTypes {
        Fizz,
        Buzz,
        FizzBuzz,
        BuzzFizz,
        Same
    };

    auto fbclassifier(unsigned int N) -> FBTypes;
}
