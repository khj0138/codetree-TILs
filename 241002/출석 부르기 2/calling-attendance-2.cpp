#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n = -1;
    bool check = false;
    while(!check)
    {
        cin >> n;
        switch(n)
        {
            case 1:
            {
                cout << "John" << endl;
                break;
            }
            case 2:
            {
                cout << "Tom" << endl;
                break;
            }
            case 3:
            {
                cout << "Paul" << endl;
                break;
            }
            case 4:
            {
                cout << "Sam" << endl;
                break;
            }
            default:
            {
                cout << "Vacancy";
                check = true;
                break;
            }
        }
    }
    return 0;
}