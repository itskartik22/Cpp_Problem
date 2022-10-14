#include <bits/stdc++.h>
using namespace std;
// int binarySearch(vector<int> &vec, int target)
// {
//     int s = 0, e = vec.size() - 1;
//     if (target < vec[s])
//     {
//         return -1;
//     }
//     while (s < e)
//     {
//         int m = s + (e - s) / 2;
//         if (vec[m] <= target)
//         {
//             s = m + 1;
//         }
//         else
//         {
//             e = m - 1;
//         }
//     }
//     return e;
// }
// int findContentChildren(vector<int> &g, vector<int> &s)
// {
//     sort(g.begin(), g.end());
//     sort(s.begin(), s.end(), greater<int>());
//     int counter = 0;
//     while (s.size() > 0 && g.size() > 0)
//     {
//         int temp = binarySearch(g, s[0]);
//         if (temp != -1)
//         {
//             counter++;
//             s.erase(s.begin());
//             g.erase(g.begin() + temp);
//         }
//         else{
//             break;
//         }
//     }
//     return counter;
// }


//Sort and Two Pointer Method
int findContentChildren(vector<int> &g,vector<int> &s){
    int i=0,j=0;
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());

    while(i<g.size() && j<s.size()){
        if(s[j]>=g[i]){  //required condition for being content
            i++;  //if child get cookie forward chile by 1
        }
        j++;
    }
    return i;
}
int main()
{
    vector<int> s = {1,2,3};
    vector<int> g = {1,2};
    cout << findContentChildren(g, s);
    return 0;
}