#pragma once

template<class generator, class classifier>
class FizzBuzz {
    generator & gen_;
    classifier & clas_;
    public:
        FizzBuzz(generator & g, classifier & c):gen_(g),clas_(c){}
        void print(int N){
        }
};
