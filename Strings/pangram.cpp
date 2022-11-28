#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::string;
using std::vector;
bool checkPangram(string &str)
{
    vector<bool> mark(26, false);
    int index;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            index = str[i] - 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            index = str[i] - 'A';
        }
        else
        {
            continue;
        }
        mark[index] = true;

    }
        // check all index is it true or not
        for (int i=0;i<26;i++){
            if(mark[i]==false){
                return false;
            }
        }
        return true;
}
int main()
{
    string str="The quick brown fox jumps over the lazy dog";
    if(checkPangram(str)){
        cout<<"Given /string is Pangram"<<std::endl;
    }
    else{
        std::cout<<"Given String is not a Program"<<std::endl;
    }
}