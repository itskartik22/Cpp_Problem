#include <iostream>
using namespace std;

// int main()
// {
//     std::cout << "Hello Kartik";
//     return 0;
// }

// Even odd Number
// int main()
// {
//     int n;
//     cin>>n;
//     if(n%2==0){
//         cout<< n << " is a Even Number";
//     }
//     else{
//         cout<< n << " is a Odd  Number";
//     }
//     return 0;

// }

// Prime Number

// int main()
// {
//     int n,a;
//     a=0;
//     cout << "Enter the Number : ";
//     cin >> n;
//     for(int i=2;i<n;i++){
//         if(n%i==0){
//             a++;
//         }
//     }

//     if(a==0){
//         cout<<"Given Number is a Prime Number";
//     }
//     else{
//         cout<<"given Number is a Non-Prime";
//     }
//     return 0;
// }

// Prime check

// int main()
// {
//     int n;
//     cout << "Enter NUmber : ";
//     cin >> n;
//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "Given Number is not a Prime Number\n";
//             return 0;;
//         }
//     }
//         cout << "Given Number is a Prime Number\n";

//     return 0;
// }

// Removal Divisible of 3

// int main()
// {
//     int n;
//     cout << "Enter Number\n";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if(i%3==0){
//             continue;
//         }
//         cout<<i<<endl;
//     }
//     return 0;
// }

// Print Prime
// int main()
// {
//     int n, temp;
//     temp = 0;
//     cout << "Enter Number : ";
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 2; j < i; j++)
//         {
//             if (i % j == 0)
//             {
//                 temp++;
//                 continue;
//             }
//         }
//         if (temp == 0)
//         {
//             cout << i<<"\n";
//         }
//         temp = 0;
//     }
//     return 0;
// }

// Size of Data Type

// int main(){
//     double n;
//     // n=5;
//     cout<<sizeof(n)<<" bytes";
//     return 0;
// }