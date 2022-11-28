#include <iostream>
#include <iterator>
#include <map>
using namespace std;
// int getBit(int n,int pos){
//     return (n & (1<<pos)) != 0;
// }
// int main(){
//     cout<<getBit(5,2);
//     return 0;
// }

int main(){
    map<int,int> mp;
    mp[3]=1;
    mp[8]=2;
    mp[3]=3;
    mp[9]=4;
    mp[64]=5;
    mp[3]=6;
    mp[8]=7;
    mp[3]=8;
    for(auto itr=mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<" "<<itr->second<<endl;;
    }
    return 0;
}