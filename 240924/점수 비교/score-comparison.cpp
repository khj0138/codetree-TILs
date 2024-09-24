#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a1, a2;
    int b1, b2;
    cin >> a1 >> a2;
    cin >> b1 >> b2;
    cout << ((a1 > b1 && a2 > b2) ? 1 : 0);
    
    return 0;
}