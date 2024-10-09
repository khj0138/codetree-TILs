#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n1, n2;
    cin >> n1 >> n2;

    int* arr1 = new int[n1];
    int* arr2 = new int[n2];

    for (int i = 0; i < n1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    bool check = false;
    for (int i = 0; i <= (n1 - n2); i++)
    {
        if(arr1[i] == arr2[0])
        {
            for (int j = 1; j < n2; j++)
            {
                if (arr1[i + j] != arr2[j])
                {
                    break;
                }
                else if(j == (n2 - 1))
                {
                    check = true;
                }
            }
            if(check)
            {
                break;
            }
        }
    }
    if(check)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}