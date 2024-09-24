#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int month;
    cin >> month;
    if(month >= 3 && month <= 5)
    {
        cout << "Spring";
    }
    else if (month >= 6 && month <= 8)
    {
        cout << "Summer";
    }
    else if (month >= 9 && month <= 11)
    {
        cout << "Fall";
    }
    else if (month == 12 || month <= 2)
    {
        cout << "Winter";
    }
    return 0;
}