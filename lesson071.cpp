#include <iostream>
using namespace std;

int sum_ptr(int* arr, int size) { // sadece adres yollanır
    int total = 0;
    for(int i = 0; i < size; i++)
        total += arr[i];  // burası arr[i] ile değere erişiyor arr[i] → *(arr + i)
    return total;
}

int main() {
    int data[1000];
    for(int i = 0; i < 1000; i++) data[i] = i + 1;

    int result = sum_ptr(data, 1000);
    cout << "Pointerlı büyük veri: " << result << endl;
}
