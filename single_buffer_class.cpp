#include <cstddef> // For size_t
#include <algorithm> // For std::copy

class SingleBuffer {
public:
    // Constructor: Allocates memory for the buffer
    explicit SingleBuffer(size_t size) : m_size(size), m_buffer(nullptr) {
        if (m_size > 0) {
            m_buffer = new char[m_size];
        }
    }

    // Destructor: Deallocates memory
    ~SingleBuffer() {
        delete[] m_buffer;
    }

    // Copy Constructor
    SingleBuffer(const SingleBuffer& other) : m_size(other.m_size), m_buffer(nullptr) {
        if (m_size > 0) {
            m_buffer = new char[m_size];
            std::copy(other.m_buffer, other.m_buffer + m_size, m_buffer);
        }
    }

    // Copy Assignment Operator
    SingleBuffer& operator=(const SingleBuffer& other) {
        if (this != &other) { // Handle self-assignment
            delete[] m_buffer; // Deallocate old memory
            m_size = other.m_size;
            m_buffer = nullptr;
            if (m_size > 0) {
                m_buffer = new char[m_size];
                std::copy(other.m_buffer, other.m_buffer + m_size, m_buffer);
            }
        }
        return *this;
    }

    // Move Constructor (C++11 and later)
    SingleBuffer(SingleBuffer&& other) noexcept
        : m_size(other.m_size), m_buffer(other.m_buffer) {
        other.m_size = 0;
        other.m_buffer = nullptr;
    }

    // Move Assignment Operator (C++11 and later)
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

    // Accessors
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