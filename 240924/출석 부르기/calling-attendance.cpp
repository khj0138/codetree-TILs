#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int num;
    cin >> num;
    switch(num)
    {
        case 1 :
        {
            cout << "John";
            break;
        }
        case 2 :
        {
            cout << "Tom";
            break;
        }
        case 3 :
        {
            cout << "Paul";
            break;
        }
        default:
        {
            cout << "Vacancy";
        }
    }
    return 0;
}