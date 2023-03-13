#include <iostream>
#include <string>

using namespace std;

const int MAX_SIZE = 14;

int binarySearch(string arr[], int n, string x, int &comparisons)
{
    int beg = 0, end = n - 1;
    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        comparisons++;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] < x)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    // Define the alphabetized array "NAME"
    string NAME[MAX_SIZE] = {"Allen", "Clark", "Dickens", "Edwards", "Goodman", "Hobbs", "Irwin",
                             "Klein", "Lewis", "Morgan", "Richards", "Scott", "Tucker", "Walton"};

    // Define the names to search for
    string search_names[4] = {"Hobbs", "Morgan", "Fisher", "Goodman"};

    // Perform binary search for each name and print the number of comparisons required
    for (int j = 0; j < 4; j++)
    {
        string name = search_names[j];
        int comparisons = 0;
        int pos = binarySearch(NAME, MAX_SIZE, name, comparisons);
        if (pos == -1)
        {
            cout << name << " not found\n";
        }
        else
        {
            cout << name << " found at position " << pos << " with " << comparisons << " comparisons\n";
        }
    }

    // Find the position of Goodman and print the number of comparisons required
    string goodman = "Goodman";
    int comparisons = 0;
    int pos = binarySearch(NAME, MAX_SIZE, goodman, comparisons);
    if (pos == -1)
    {
        cout << goodman << " not found\n";
    }
    else
    {
        cout << goodman << " found at position " << pos << " with " << comparisons << " comparisons\n";
    }

    // Print the values of BEG, END, and MID for each step of the algorithm
    string test_name = "Goodman";
    comparisons = 0;
    int beg = 0, end = MAX_SIZE - 1, mid;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        comparisons++;
        if (NAME[mid] == test_name)
        {
            break;
        }
        if (NAME[mid] < test_name)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    cout << "BEG = " << beg << ", END = " << end << ", MID = " << mid << " with " << comparisons << " comparisons\n";

    return 0;
}
