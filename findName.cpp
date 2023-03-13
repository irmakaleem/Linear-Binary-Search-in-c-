#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 14;

int main()
{
    // Define the alphabetized array "NAME"
    string NAME[MAX_SIZE] = {"Allen", "Clark", "Dickens", "Edwards", "Goodman", "Hobbs", "Irwin",
                             "Klein", "Lewis", "Morgan", "Richards", "Scott", "Tucker", "Walton"};

    // Define the names to search for
    string search_names[3] = {"Hobbs", "Morgan", "Fisher"};

    // Perform linear search for each name and print the number of comparisons required
    for (int j = 0; j < 3; j++)
    {
        string name = search_names[j];
        int comparisons = 0;
        bool found = false;
        for (int i = 0; i < MAX_SIZE; i++)
        {
            comparisons++;
            if (NAME[i] == name)
            {
                cout << name << " found at position " << i << " with " << comparisons << " comparisons\n";
                found = true;
                break;
            }
        }
        if (!found)
        {
            cout << name << " not found with " << comparisons << " comparisons\n";
        }
    }

    return 0;
}
