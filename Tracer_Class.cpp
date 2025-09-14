#include <iostream>
#include <string>

class Tracer {
public:
    Tracer(const std::string& functionName) : m_functionName(functionName) {
        std::cout << "Entering " << m_functionName << std::endl;
    }

    ~Tracer() {
        std::cout << "Exiting " << m_functionName << std::endl;
    }

private:
    std::string m_functionName;
};

void myFunction() {
    Tracer tracer("myFunction"); 
}

int main() {
    myFunction();
    return 0;
}
