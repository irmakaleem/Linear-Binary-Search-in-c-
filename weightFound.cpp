#include <iostream>
using namespace std;
int main()
{
    float weight[] = {21.5, 15.0, 12.5, 25.0, 17.5, 24.0, 35.0, 40.0, 27.5, 22.0, 33.0, 12.5, 23.5, 10.25, 5.5, 45.5, 19.25, 12.25, 32.0, 20.0};
    int found = 0;
    float w;
    cout << "Enter weight in kilograms to find: " << endl;
    cin >> w;
    for (int i = 0; i < 20; i++)
    {
        if (w == weight[i])
        {
            found = 1;
            cout << "Location of weight " << w << " is at index " << i << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "Weight not found" << endl;
    }

    return 0;
}