    struct FullAdderOutput {
        int sum;
        int carry_out;
    };

    FullAdderOutput fullAdder(int bitA, int bitB, int carry_in) {
        FullAdderOutput result;
        result.sum = (bitA ^ bitB) ^ carry_in;
        result.carry_out = (bitA & bitB) | (carry_in & (bitA ^ bitB));
        return result;
    }
