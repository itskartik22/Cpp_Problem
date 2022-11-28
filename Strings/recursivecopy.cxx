#include <iostream>
#include <string>


using namespace std;

string recur(string str1, string str2, int i)
{

    if (i==0)
    {
        str2.push_back(str1[i]);
        return str2;
    }
    str2.push_back(str1[i]);
    return recur(str1, str2, i-1);
}
int main()
{
    string str1 = "Hello";
    string str2;
    int i = 0;
    cout << recur(str1, str2, i);
    return 0;
}