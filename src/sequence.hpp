namespace sequence {
    class fibonacci {
        int nxt;
        int current;

        public:
        fibonacci() : nxt(1), current(0){};
        auto next() {
            if(this->current < 1) {
               this->current += 1;
               return 1;
            }
            auto out = this->nxt;
            this->nxt += this->current;
            this->current = out;
            return out;
        }
    };
}
