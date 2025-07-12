   #include <vector>

    template <typename T>
    class Generic3DArray {
    private:
        std::vector<T> data;
        int depth, rows, cols;

        int getIndex(int d, int r, int c) const {
            return d * (rows * cols) + r * cols + c;
        }

    public:
        Generic3DArray(int d, int r, int c) : depth(d), rows(r), cols(c), data(d * r * c) {}

        T& operator()(int d, int r, int c) {
            return data[getIndex(d, r, c)];
        }

        const T& operator()(int d, int r, int c) const {
            return data[getIndex(d, r, c)];
        }
    };

    // Example usage:
    // Generic3DArray<float> float3DArray(2, 3, 4);
    float3DArray(0, 0, 0) = 1.23f;
    
    template <typename T>
    T*** createDynamic3DArray(int depth, int rows, int cols) {
        T*** arr = new T**[depth];
        for (int d = 0; d < depth; ++d) {
            arr[d] = new T*[rows];
            for (int r = 0; r < rows; ++r) {
                arr[d][r] = new T[cols];
            }
        }
        return arr;
    }

    template <typename T>
    void deleteDynamic3DArray(T*** arr, int depth, int rows) {
        for (int d = 0; d < depth; ++d) {
            for (int r = 0; r < rows; ++r) {
                delete[] arr[d][r];
            }
            delete[] arr[d];
        }
        delete[] arr;
    }
    
    