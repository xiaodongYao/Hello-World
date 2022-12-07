#include <iostream>
#include <ctime>

using namespace std;

template<typename T>
T RandT(T _min, T _max) {
    T temp;
    if (_min > _max) {
        temp = _max;
        _max = _min;
        _min = temp;
    }
    return rand() / (double) RAND_MAX * (_max - _min + 1) + _min;
}

int main() {
    srand((unsigned) time(NULL));
    for (int i = 0; i < 20; ++i) {
        cout << RandT<int>(1, 4) << " " << ends;
    }
}
