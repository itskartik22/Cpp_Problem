#include <iostream>
using namespace std;

// natural number sum returning function
int sumofnat(int n)
{
    int sum = 0;
    for(int i=1;i<=n;i++){
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int num;
    cout << "Enter a value of number : \n";
    cin >> num;
    cout << "Sum of n natural number : " << sumofnat(num);
    return 0;
}