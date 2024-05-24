#include <iostream>
#include <string>
using namespace std;

void incrementByReference(int &x) {
    x++;
}

int main() {
    int num = 5;
    incrementByReference(num);
    cout << num; // 출력: 6
    return 0;
}
