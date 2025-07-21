#include <boost/static_assert.hpp>

    // Assert that the size of an int is 4 bytes
    BOOST_STATIC_ASSERT(sizeof(int) == 4); 
#include <boost/static_assert.hpp>

    // Assert that a template parameter is an integral type
    template <typename T>
    void process_integral_type(T value) {
        BOOST_STATIC_ASSERT_MSG(boost::is_integral<T>::value, "T must be an integral type.");
        // ...
    }