// C++ code
extern "C" {
  void PascalProcedure(int *data, int size); // Declaration of Pascal procedure
}

int main() {
  int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  PascalProcedure(data, 10); // Calling the Pascal procedure
  return 0;
}

