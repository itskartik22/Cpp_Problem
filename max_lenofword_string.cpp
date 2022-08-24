#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    int currlength = 0;
    int maxlength = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != ' ')
        {
            currlength++;
        }
        else
        {
            maxlength = max(maxlength, currlength);
            currlength = 0;
        }
    }
    cout<<maxlength;
    return 0;
}