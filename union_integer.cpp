union Data {
        int i;
        float f;
        char c;
    };

Data myData;
    myData.i = 10; // 'i' now holds 10
    // At this point, accessing 'f' or 'c' would yield undefined behavior
    // because the memory is currently interpreted as an integer.

    myData.f = 3.14f; // 'f' now holds 3.14f, overwriting the integer value
    // Now, accessing 'i' or 'c' would be undefined behavior.