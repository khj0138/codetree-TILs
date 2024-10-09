#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char* texts = new char[6];
    
    char c;
    cin >> c;
    texts[0] = 'L';
    texts[1] = 'E';
    texts[2] = 'B';
    texts[3] = 'R';
    texts[4] = 'O';
    texts[5] = 'S';

    for (int i = 0; i < 6; i++)
    {
        if(texts[i] == c)
        {
            cout << i;
            break;
        }
        if(i == 5)
        {
            cout << "None";
        }
    }

    delete texts;

    return 0;
}