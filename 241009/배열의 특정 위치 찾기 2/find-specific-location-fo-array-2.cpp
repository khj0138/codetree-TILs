#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int large = 0, small = 0;
    int n;
    for (int i = 0; i < 10; i++)
    {
        cin >> n;
        if(i % 2 != 0)
        {
            large += n;
        }
        else
        {
            small += n;
        }
    }
    if(large < small)
    {
        int temp = large;
        large = small;
        small = temp;
    }
    cout << large - small;
    return 0;
}