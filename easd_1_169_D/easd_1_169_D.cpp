//1. karena algoritma merupakan serangkaian intruksi yang dirancang untuk menyelesaikan suatu masalah tertentu
//2. linear data structure dan non-linear data structure
//3. ukuran input, struktur data, kompleksitas algoritma, bahasa pemograman, algoritma yang dipilih
//4. insertion sort, karena lebih efisien jika datanya hampir semua urut
//5. Quadratic = bubble sort, selection sort, insertion sort. Loglinear = quick sort, heap sort, merge sort
//6.implementasi dari selection sort:

#include <iostream>
using namespace std;

int rifqi[45];
int n;

void selectionSort(int rifqi[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (rifqi[j] < rifqi[min_idx]) {
                min_idx = j;
            }
        }
        swap(rifqi[i], rifqi[min_idx]);
    }
}
void input() {
    while (true) {
        cout << "Masukan jumlah elemen pada array : ";
        cin >> n;
        if (n <= 45)
            break;
        else {
            cout << "\nArray dapat mempunyai maksimal 45 element.\n";
        }
    }
    cout << endl;
    cout << "===================" << endl;
    cout << "Masukan Elemen Array" << endl;

    for (int i = 0; i < n; i++) {
        cout << "<" << (i + 1) << ">";
        cin >> rifqi[i];
    }
}

void display() {
    cout << endl;
    cout << "================================" << endl;
    cout << "Elemen Array yang sudah tersusun" << endl;
    cout << "================================" << endl;
    for (int i = 0; i < n; i++) {
        cout << rifqi[i] << endl;
    }
    cout << endl;
}

int main()
{
    input();
    selectionSort(rifqi, n);
    display();

    return 0;
    
}