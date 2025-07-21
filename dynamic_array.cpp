data_type* pointer_variableName = new data_type[array_size];
int* dynamicArray = new int[10];
dynamicArray[0] = 10;
*(dynamicArray + 1) = 20;

delete[] dynamicArray;
dynamicArray = nullptr; // Good practice to set the pointer to nullptr after deletion
