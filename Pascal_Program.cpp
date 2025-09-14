extern "C" {
  void PascalProcedure(int *data, int size); 
}

int main() {
  int data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  PascalProcedure(data, 10); 
  return 0;
}

