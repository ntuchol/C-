//
//  main.cpp
//  xcode_Ex1
//
//  Created by Timo Predoehl on 07.05.16.
//  Copyright © 2016 Timo Predoehl. All rights reserved.
//

#include <iostream>
#include <limits>
#include "myClass.hpp"

int main(int argc, const char * argv[]) {
    
    /*
     
     a) Modify class C so that 1) its default constructor is absent and 2) copy constructor and assignment are private. To this end, use keyword default to explicitly tell the compiler to generate a default constructor. Furthermore, use the keyword delete to mark the copy constructor and assignment operator as deleted functions. Deleted functions may not be used in any way, even by friends. Test your code again, including calling the defaulted and deleted functions. What is the resulting behavior?
     
     a.1) default constructor is absent: C is instantiated with size and vector members. However, m_size is set to 1606416208 which is approximately 75% of max_int. why?
     
     a.2) copy constructor and assignment are private: implementations are now unavailable during compile resulting in "redefinition" error.
     
     b.) un-delete-ing the copy constructor and assignment operator to restore compile-ability. Use the explicit keyword in the constructors to disallow implicit type conversion.
     
     c.) Use constexpr keyword for those functions in which input arguments are known at compile-time (for
     example, constructors and setters). Then the data members will also be known at compile-time.
     
     Comments:
     std::string, std::vector are not literal types (size is not fixed at compile time) and cannot be used. Need to wrap or use 'const char*' for strings.
     
     References: 
     http://en.cppreference.com/w/cpp/keyword
     http://www.codeproject.com/Articles/417719/Constants-and-Constant-Expressions-in-Cplusplus
     
    */
    
    // Test the C class
    // C<int> c1 = 3;       // FAIL: copy-initialization; no viable conversion from 'int' to 'C<int>'
    C<int> c2(6);           // OK: direct-initialization; calls CUSTOM CTOR
    C<int> c3(c2);          // OK: copy-initialization; calls COPY CTOR
    // C<int> c4 = (C<int>) 7; // FAIL: explicit cast performs static_cast: no matching constructor for initialization of 'C<int>'
    c3 = c2;                // OK: calls deleted ASS OPTOR
    
    // testing getters
    std::cout << "Testing the getter for size: " << c2.Size() << std::endl;
    std::cout << "Testing the getter for size: " << c2.Vec().size() << std::endl;
    
    // testing scale modifier
    c2.ScaleBy(3);
    
    c2.test(7);
    
    return 0;
}
