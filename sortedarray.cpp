#include <iostream>
using namespace std;

bool sortedarray(int arr[], int n)
{

    if (n == 1)
    {
        return true;
    }

    bool restarray = sortedarray(arr + 1, n - 1);
    return (arr[0] < arr[1] && restarray);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    cout << sortedarray(arr, 6) << endl;
    return 0;
}