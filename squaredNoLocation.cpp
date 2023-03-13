#include <iostream>

using namespace std;

int main()
{
    int squares[] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100, 121, 144, 169, 196, 225, 256, 289, 324, 361, 400, 441, 484, 529, 576, 625};
    int num, i, found = 0;

    // Input the number to search for
    cout << "Enter a number to search for its square: ";
    cin >> num;

    // Perform linear search for the squared number
    for (i = 0; i < 25; i++)
    {
        if (squares[i] == num)
        {
            found = 1;
            cout << "Location of " << num << " is " << i << "th index" << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "Square not found in the array" << endl;
    }

    return 0;
}
