namespace sequence {
    template<typename T>
    class fibonacci {
        T nxt;
        T current;

        public:
        fibonacci() : nxt(1), current(0){};
        T next() {
            if(this->current < 1) {
               this->current += 1;
               return 1;
            }
            T out = this->nxt;
            this->nxt += this->current;
            this->current = out;
            return out;
        }
    };
}
