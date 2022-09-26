#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> num1 = {1, 2, 2, 1};
    vector<int> num2 = {2, 2};
    vector<int> ans;
    set<int> s1;
    set<int> s2;
    for (auto val : num1)
    {
        s1.insert(val);
    }
    for (auto val : num2)
    {
        s2.insert(val);
    }
    for(auto val : s2){
        if(s1.find(val) != s1.end()){
            ans.push_back(val);
        }
    }
    for(auto &val : ans){
        cout<<val<<" ";
    }
}