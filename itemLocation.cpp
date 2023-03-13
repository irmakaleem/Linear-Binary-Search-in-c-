#include <iostream>

using namespace std;

int main()
{
    int arr[15];
    int ITEM, i, found = 0;

    // Input array elements
    cout << "Enter 15 integers:" << endl;
    for (i = 0; i < 15; i++)
    {
        cin >> arr[i];
    }

    // Input ITEM to search for
    cout << "Enter ITEM to search for:" << endl;
    cin >> ITEM;

    // Perform linear search
    for (i = 0; i < 15; i++)
    {
        if (arr[i] == ITEM)
        {
            found = 1;
            cout << "ITEM found at index " << i << endl;
            break;
        }
    }

    if (!found)
    {
        cout << "ITEM not found" << endl;
    }

    return 0;
}
