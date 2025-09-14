class FileFilter {
public:
    virtual char transform(char ch) = 0; 

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
        return ch + encryptionKey;
    }
};
