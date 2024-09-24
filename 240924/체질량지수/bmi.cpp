#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int b;
    double weight, height;
    cin >> height >> weight;
    b = weight * 10000.f / (height * height);
    cout << b << endl;
    if(b > 25)
    {
        cout << "Obesity";
    }
    return 0;
}