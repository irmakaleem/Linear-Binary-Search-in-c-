#include <iostream>
using namespace std;

int main()
{
    double weight[] = {21.5, 15.0, 12.5, 25.0, 17.5, 24.0, 35.0, 40.0, 27.5, 22.0, 33.0, 12.5, 23.5, 10.25, 5.5, 45.5, 19.25, 12.25, 32.0, 20.0}; // Sample weight array
    int n = sizeof(weight) / sizeof(weight[0]);
    double heaviest = weight[0];
    for (int i = 1; i < n; i++)
    {
        if (weight[i] > heaviest)
        {
            heaviest = weight[i];
        }
    }
    cout << "The heaviest weight is: " << heaviest << " kg" << endl; // Output heaviest weight
    return 0;
}
