#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char text;
    cin >> text;
    if (text == 'S')
    {
        cout << "Superior";
    }
    else if (text == 'A')
    {
        cout << "Excellent";
    }
    else if (text == 'B')
    {
        cout << "Good";
    }
    else if (text == 'C')
    {
        cout << "Usually";
    }
    else if (text == 'D')
    {
        cout << "Effort";
    }
    else
    {
        cout << "Failure";
    }
    return 0;
}