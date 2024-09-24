#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    int num;
    for (int i = 0; i < N; i++)
    {
        cin >> num;
        if(num % 2 == 1 && num % 3 == 0)
        {
            cout << num << endl;
        }
    }
    return 0;
}