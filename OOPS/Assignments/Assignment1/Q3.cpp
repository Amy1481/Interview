#include <iostream>
using namespace std;

int* createVector(int M) {
    int* arr = new int[M];
    cout << "Enter " << M << " elements:\n";
    for (int i = 0; i < M; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main() {
    int M;
    cout << "Enter size of vector: ";
    cin >> M;

    int* vec = createVector(M);

    cout << "Vector elements:\n";
    for (int i = 0; i < M; i++) {
        cout << vec[i] << " ";
    }

    delete[] vec;
    return 0;
}
