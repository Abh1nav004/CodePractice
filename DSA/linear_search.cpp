#include <bits/stdc++.h>
using namespace std;
bool binarysearch(int arr[], int size, int f)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == f)
        {
            return 1;
        }
    }

    return 0;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int f;
    cin >> f;

    if (binarysearch(arr, 5, f) == true)
    {
        cout << "Number is present!!";
    }

    else
        cout << "Invalid number!!";

    return 0;
}