#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{

    // for printing the array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void countZeroOne(int arr[], int n)

{
    // assign value to a variable 
    // to count Zeroes in an array assign the value to the ZeroCount variable 
    // to count the ones in an array assign the value to the Onecount variable
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            // if the element in the arrays matches, then increment zeroCount
            zeroCount++;
        }
        else
        {
            // if the element in the array matches, then increment oneCount
            oneCount++;
        }
    }

    cout << "Zero Count: " << zeroCount << endl;
    cout << "One Count: " << oneCount << endl;
}
int main()
{
    // Array consisting of zeroes and ones
    int arr[] = {1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
// Call function
    printArray(arr, n);
    countZeroOne(arr, n);
}