// reversing 1D array by swapping start and end element
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[5] = { 2,
                   4,
                   3,
                   9,
                   5 };
    int st = 0;
    int en = 4;
    while (!(st >= en))
    {
        swap(arr[st],arr[en]);
        // int temp=arr[st];
        // arr[st]=arr[en];
        // arr[en]=temp;
        st++;
        en--;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
