// Ascii Value in C++
//  Ascii for A = 65
//  Z = 90
// a=97
// z=122
// 0=48
// 9=57
#include <iostream>
using namespace std;

int main()
{
    // printing Ascii values
    for (int i = -150; i <= 122; i++)
    {
        char ch = i;
        // printf("%c = %d\n",ch,i);
        cout << i << " = " << ch << endl;
    }
    return 0;
}