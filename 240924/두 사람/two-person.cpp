#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int age;
    char s;
    int check = 0;
    for(int i = 0; i < 2; i++)
    {
        cin >> age >> s;
        if(age >= 19 && s == 'M')
        {
            check = 1;
        }
    }
    cout << check;
    return 0;
}