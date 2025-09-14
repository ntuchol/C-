#include <cstddef> 
#include <algorithm> 

class SingleBuffer {
public:
    explicit SingleBuffer(size_t size) : m_size(size), m_buffer(nullptr) {
        if (m_size > 0) {
            m_buffer = new char[m_size];
        }
    }

    ~SingleBuffer() {
        delete[] m_buffer;
    }

    SingleBuffer(const SingleBuffer& other) : m_size(other.m_size), m_buffer(nullptr) {
        if (m_size > 0) {
            m_buffer = new char[m_size];
            std::copy(other.m_buffer, other.m_buffer + m_size, m_buffer);
        }
    }

    SingleBuffer& operator=(const SingleBuffer& other) {
        if (this != &other) { 
            delete[] m_buffer; 
            m_size = other.m_size;
            m_buffer = nullptr;
            if (m_size > 0) {
                m_buffer = new char[m_size];
                std::copy(other.m_buffer, other.m_buffer + m_size, m_buffer);
            }
        }
        return *this;
    }

    SingleBuffer(SingleBuffer&& other) noexcept
        : m_size(other.m_size), m_buffer(other.m_buffer) {
        other.m_size = 0;
        other.m_buffer = nullptr;
    }

    SingleBuffer& operator=(SingleBuffer&& other) noexcept {
        if (this != &other) {
            delete[] m_buffer;
            m_size = other.m_size;
            m_buffer = other.m_buffer;
            other.m_size = 0;
            other.m_buffer = nullptr;
        }
        return *this;
    }

    char* data() {
        return m_buffer;
    }

    const char* data() const {
        return m_buffer;
    }

    size_t size() const {
        return m_size;
    }

private:
    char* m_buffer;
    size_t m_size;
};
