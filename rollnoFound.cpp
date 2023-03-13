#include <iostream>
using namespace std;
int main()
{
    int rollno[] = {100, 110, 120, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134, 135, 136, 144, 149};
    int num, found = 0;
    cout << "Enter a Rollno To Find: " << endl;
    cin >> num;
    for (int i = 0; i < 20; i++)
    {
        if (num == rollno[i])
        {
            found = 1;
            cout << "Rollno Found At Index " << i << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "Rollno not found" << endl;
    }

    return 0;
}