#include <iostream>
#include <vector>
using namespace std;

int main() {
    int classSize;
    cout << "Enter class size: ";
    cin >> classSize;

    vector<int> studentNo(classSize);
    vector<int> notes(classSize);

    // Öğrenci numarası ve notlarını al
    for (int i = 0; i < classSize; i++) {
        cout << "Enter Student No and Grade for student " << (i + 1) << ": ";
        cin >> studentNo[i] >> notes[i];
    }

    // En yüksek ve en düşük notu bul
    int largest = notes[0], smallest = notes[0];
    int largeIndex = 0, smallIndex = 0;

    for (int i = 1; i < classSize; i++) {
        if (notes[i] > largest) {
            largest = notes[i];
            largeIndex = i;
        }
        if (notes[i] < smallest) {
            smallest = notes[i];
            smallIndex = i;
        }
    }

    // Sonuçları göster
    cout << "\nStudent with highest grade: " << studentNo[largeIndex]
         << " (" << largest << ")" << endl;

    cout << "Student with lowest grade: " << studentNo[smallIndex]
         << " (" << smallest << ")" << endl;

    return 0;
}
