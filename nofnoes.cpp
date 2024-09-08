#include <iostream>
using namespace std;

int numbersofones(int n)
{

    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << numbersofones(19) << endl;

    return 0;
}