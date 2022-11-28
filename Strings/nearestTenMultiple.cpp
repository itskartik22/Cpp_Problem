#include<iostream>
#include<cmath>
//basic implentation...
int main(){
int n;
std::cin>>n;
int a=(n/10)*10;
int b=a+10;
std::cout<<((n-a>n-b)?b:a)<<std::endl;
return 0;
}
//using Round funcion()...
// int main(){
//     int n;
//     std::cin>>n;
//     n=round(n/10.0);
//     std::cout<<n*10<<std::endl;
//     return 0;
// }