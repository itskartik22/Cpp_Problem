#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;
    bool lowercasevowel, uppercasevolwel;
    lowercasevowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    uppercasevolwel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (!isalpha(c))
    {
        cout << "Entered is not an Alphabert";
    }
    else if (lowercasevowel || uppercasevolwel){
        cout<<"Entered character is vowel";
    }
    else{
        cout<<"Entered Character is Consonant";
    }
}