#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char* c = new char[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> c[i];
    }
    for (int i = 1; i <= 7; i += 3)
    {
        cout << c[i] << ' ';
    }
    delete c;
    return 0;
}