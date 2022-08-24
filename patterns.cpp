#include<iostream>
using namespace std;


// Rectangle..
// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Hollow Rectangle.....

// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             if(i>1 && i<row && j>1 && j<col){
//                 cout<<"  ";
//             }
//             else{
//                 cout<<"* ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// ......Inverted Pyramid...
int main()
{
    int n;
    int a=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<a++<<" ";
        }
        cout<<endl;
    }
}