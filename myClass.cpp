//
//  myClass.cpp
//  xcode_Ex1
//
//  Created by Timo Predoehl on 07.05.16.
//  Copyright © 2016 Timo Predoehl. All rights reserved.
//
#ifndef MYCLASS_CPP
#define MYCLASS_CPP

#include <iostream>
#include "myClass.hpp"

/* default constructor ABSENT
template <typename T>
C<T>::C()
{
    m_size = 5;
    for (int i = 0; i < m_size; i++) m_vec.push_back(i);   // fill'er up
    
    // generate some output
    std::string callerID = "DEFAULT CONSTRUCTOR";
    print(callerID, *this);
}
*/

// custom constructor
template <typename T>
constexpr C<T>::C(int newSize)
{
    m_size = newSize;
    for (int i = 0; i < m_size; i++) m_vec.push_back(i);   // fill'er up
    // generate some output
    const char* callerID = "CUSTOM CONSTRUCTOR";
    print(callerID, *this);
}

// copy constructor
// explicit only to generate notifications. implicit would otherwise be ok.
template <typename T>
constexpr C<T>::C(const C<T>& source) : m_size(source.m_size), m_vec(source.m_vec)
{
    // generate some output
    const char* callerID = "COPY CONSTRUCTOR";
    print(callerID, *this);

}

// assignment operator
// explicit only to generate notifications and becasuse copy constructor is declared / implemented explicitly.
// implicit would otherwise be ok.
template <typename T>
C<T>& C<T>::operator = (const C<T>& source)
{
    const char* callerID = "ASSIGNMENT OPERATOR";
    // Avoid doing assign to myself
    if (this == &source)												// if the CALLER (LHS) is the same as the REFERRED (RHS),
    {
        return *this;													// then just return the reference to the calling array
    }
    else
    {
        m_size = source.Size();
        m_vec = source.Vec();
        print(callerID, *this);
        return *this;													// then return the reference of the updated caller
    }
}


// destructor
template <typename T>
C<T>::~C()
{
    std::cout << "DESTRUCTOR called: " << std::endl;
    std::cout << std::endl;
}

// Getter
template <typename T>
int C<T>::Size() const
{
    // return m_vec->size();
    return m_size;
}
template <typename T>
std::vector<T> C<T>::Vec() const
{
    return m_vec;
}

// Setter
template <typename T>
constexpr void C<T>::ScaleBy(int scale)
{
    const char* callerID = "SCALER";
    for_each(m_vec.begin(), m_vec.end(), [&scale](int& i){ i *= scale;});
    print(callerID, *this);
}

// Output
template <typename T>
void C<T>::print(const char* callerID, const C<T>& source) const
{
    std::cout << callerID << " called: " << std::endl;
    std::cout << "The vector elements are: ";
    for_each(source.m_vec.begin(), source.m_vec.end(), [](int i){ std::cout << i << ", "; } ); std::cout << std::endl;
    std::cout << std::endl;
}

template <typename T>
constexpr void C<T>::test(int a)
{
    a = a + 1;
}

#endif // MYCLASS_CPP
