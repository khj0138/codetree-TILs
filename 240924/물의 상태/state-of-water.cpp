#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int temperature;
    cin >> temperature;
    cout << (temperature < 0 ? "ice" : (temperature < 100 ? "water" : "vapor"));
    return 0;
}