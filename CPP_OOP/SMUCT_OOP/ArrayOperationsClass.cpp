#include <iostream>
using namespace std;

class ArrayProcessor {
 public:
  void printArray(int* arr, int size) {
    cout << "The elements are: ";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout<<endl;
  }

  void printOddIndices(int* arr, int size) {
    cout << "The elements at odd indices are: ";
    for (int i = 1; i < size; i += 2) {
      cout << arr[i] << " ";
    }
    cout<<endl;
  }

  void printOddElements(int* arr, int size) {
    cout << "The odd elements are: ";
    for (int i = 0; i < size; i++) {
      if (arr[i] & 1) {
        cout << arr[i] << " ";
      }
    }
    cout<<endl;
  }

  int sumElements(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
      sum += arr[i];
    }
    return sum;
  }

  void shiftLeft(int* arr, int size) {
    int temp = arr[0];
    for (int i = 1; i <= size - 1; i++) {
      arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;
    cout << "The left shifted array elements are: ";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout<<endl;
  }

  void shiftRight(int* arr, int size) {
    int temp = arr[size - 1];
    for (int i = size - 2; i >= 0; i--) {
      arr[i + 1] = arr[i];
    }
    arr[0] = temp;
    cout << "The right shifted array elements are: ";
    for (int i = 0; i < size; i++) {
      cout << arr[i] << " ";
    }
    cout<<endl;
  }

  void shiftLeftFromIndex(int* arr, int size, int shift_index) {
    int last_element = arr[size - 1];
    for (int i = size - 1; i > shift_index; i--) {
      arr[i] = arr[i - 1];
    }
    arr[shift_index] = last_element;
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

  ArrayProcessor processor;
  processor.printArray(a, n);
  processor.printOddIndices(a, n);
  processor.printOddElements(a, n);
  cout << "Sum of the elements: " << processor.sumElements(a, n) << endl;
  processor.shiftLeft(a, n);
  processor.shiftRight(a, n);

  cout << "Enter the shift index: ";
  int shift_index;
  cin >> shift_index;
  processor.shiftLeftFromIndex(a, n, shift_index);
  cout << "The shifted array is: ";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  system("Color E0");
  return 0;
}