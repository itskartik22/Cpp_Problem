#include<iostream>
using namespace std;

int main(){
    int n =1804289383;
int count = 0;
int subt = 1;
    while(subt <= n){
        count++;
        n = n - subt;
        subt++;
    }
    cout<<count;
    return 0;
}
// int main(){
//     int n = 5;
//     int ans=0;
//     while(ans*(ans+1)/2 <= n){
//         ans++;
//     }
//     cout<<ans-1;
//     return 0;
// }