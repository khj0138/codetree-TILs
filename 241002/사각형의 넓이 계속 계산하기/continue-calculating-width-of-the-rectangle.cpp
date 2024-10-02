#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int width;
    int height;
    char c;
    bool check = false;
    while(!check)
    {
        cin >> width >> height >> c;
        cout << width * height << endl;
        if(c == 'C')
        {
            check = true;
        }
    }
    return 0;
}