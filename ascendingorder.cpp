#include <iostream>

using namespace std;

int main()
{
    float weight[] = {21.5, 15.0, 12.5, 25.0, 17.5, 24.0, 35.0, 40.0, 27.5, 22.0, 33.0, 12.5, 23.5, 10.25, 5.5, 45.5, 19.25, 12.25, 32.0, 20.0};
    float temp;
    int i, j, found = 0;

    // Sort the weights in ascending order using bubble sort algorithm
    for (i = 0; i < 20 - 1; i++)
    {
        for (j = 0; j < 20 - i - 1; j++)
        {
            if (weight[j] > weight[j + 1])
            {
                temp = weight[j];
                weight[j] = weight[j + 1];
                weight[j + 1] = temp;
            }
        }
    }

    // Display the sorted weights
    cout << "Sorted weights in ascending order: ";
    for (i = 0; i < 20; i++)
    {
        cout << weight[i] << " ";
    }
    cout << endl;

    // Input the weight to search for
    float w;
    cout << "Enter weight in kilograms to search for: ";
    cin >> w;

    // Perform binary search for the weight
    int low = 0, high = 19, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (weight[mid] == w)
        {
            found = 1;
            cout << "Location of weight " << w << " is at index " << mid << endl;
            break;
        }
        else if (weight[mid] < w)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (!found)
    {
        cout << "Weight not found in the array" << endl;
    }

    return 0;
}
