#include <iostream>
using namespace std;

class ArrayProcessor {
 public:
  virtual void processArray(int* arr, int size) = 0;
};

class PrintArrayProcessor : public ArrayProcessor {
 public:
  void processArray(int* arr, int size) {
    cout << "The elements are: ";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

class PrintOddIndicesProcessor : public ArrayProcessor {
 public:
  void processArray(int* arr, int size) {
    cout << "The elements at odd indices are: ";
    for (int i = 1; i < size; i += 2) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

class PrintOddElementsProcessor : public ArrayProcessor {
 public:
  void processArray(int* arr, int size) {
    cout << "The odd elements are: ";
    for (int i = 0; i < size; i++) {
      if (arr[i] & 1) {
        cout << arr[i] << " ";
      }
    }
    cout << endl;
  }
};

class SumElementsProcessor : public ArrayProcessor {
 public:
  void processArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
      sum += arr[i];
    }
    cout << "Sum of the elements: " << sum << endl;
  }
};

class ShiftLeftProcessor : public ArrayProcessor {
 public:
  void processArray(int* arr, int size) {
    int temp = arr[0];
    for (int i = 1; i <= size - 1; i++) {
      arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;
    cout << "The left shifted array elements are: ";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

class ShiftRightProcessor : public ArrayProcessor {
 public:
    void processArray(int* arr, int size) {
    int temp = arr[size - 1];
    for (int i = size - 2; i >= 0; i--) {
      arr[i + 1] = arr[i];
    }
    arr[0] = temp;
    cout << "The right shifted array elements are: ";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

class ShiftLeftFromIndexProcessor : public ArrayProcessor {
 public:
  void processArray(int* arr, int size) {
    cout << "Enter the shift index: ";
    int shift_index;
    cin >> shift_index;
    int last_element = arr[size - 1];
    for (int i = size - 1; i > shift_index; i--) {
      arr[i] = arr[i - 1];
    }
    arr[shift_index] = last_element;
    cout << "The shifted array is: ";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout << endl;
  }
};

int main() {
  int n, a[101];
  cout << "Enter size of the array: ";
  cin >> n;
  cout << "Enter array elements: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  ArrayProcessor* processors[] = {new PrintArrayProcessor(),
                                  new PrintOddIndicesProcessor(),
                                  new PrintOddElementsProcessor(),
                                  new SumElementsProcessor(),
                                  new ShiftLeftProcessor(),
                                  new ShiftRightProcessor(),
                                  new ShiftLeftFromIndexProcessor()};

  for (auto& processor : processors) {
    processor->processArray(a, n);
  }

  system("Color E0");
  return 0;
}
