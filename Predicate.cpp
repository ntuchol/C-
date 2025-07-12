  bool isEven(int n) {
        return n % 2 == 0;
    }
    // Used with algorithms: std::find_if(vec.begin(), vec.end(), isEven);
    struct GreaterThan {
        int value;
        GreaterThan(int v) : value(v) {}
        bool operator()(int n) const {
            return n > value;
        }
    };
    // Used with algorithms: std::find_if(vec.begin(), vec.end(), GreaterThan(10));