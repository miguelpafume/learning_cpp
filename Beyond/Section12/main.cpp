#include <iostream>

void Print(const int *arr, int size) {
  for(int i {}; i < size; i++) {
    std::cout << *(arr+i) << " "; 
  }
}

int *ApplyAll(const int *arr1, const size_t &arr1_sz, const int *arr2, const size_t &arr2_sz) {
  int *allarr = new int[arr1_sz*arr2_sz];

  size_t pos {0};

  for(int i {}; i < arr2_sz; i++) {
    for(int j {}; j < arr1_sz; j++) {
      *(allarr+pos) = (*(arr2+i)) * (*(arr1+j));
      pos++;
    }
  }

  return allarr;
}


int main() {
  const size_t arr1_size {5};
  const size_t arr2_size {3};

  int array1[arr1_size] {1, 2, 3, 4, 5};
  int array2[arr2_size] {10, 20, 30};

  std::cout << "Array 1: ";
  Print(array1, arr1_size);

  std::cout << std::endl;

  std::cout << "Array 2: ";
  Print(array2, arr2_size);
  
  std::cout << std::endl;

  const size_t all_array_size {arr1_size * arr2_size};
  int *all_array {ApplyAll(array1, arr1_size, array2, arr2_size)};

  std::cout << "All Array: ";
  Print(all_array, all_array_size);

  delete[] all_array;

  return 0;
}