// Ascii Value in C++
//  Ascii for A = 65
//  Z = 90
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