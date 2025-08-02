class FileFilter {
public:
    virtual char transform(char ch) = 0; // Pure virtual function for transformation

    void doFilter(std::ifstream &in, std::ofstream &out) {
        char ch;
        while (in.get(ch)) {
            out.put(transform(ch));
        }
    }
};

class EncryptionFilter : public FileFilter {
private:
    int encryptionKey;

public:
    EncryptionFilter(int key) : encryptionKey(key) {}

    char transform(char ch) override {
        // Simple Caesar cipher for demonstration
        return ch + encryptionKey;
    }
};