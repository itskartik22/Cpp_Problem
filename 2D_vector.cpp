// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
// vector<int> num {1, 2, 3};

// // gives garbage value
// cout << num[4]<<endl;

// // throws an exception
// cout << num.at(4);
//     return 0;
// }



// C++ code to demonstrate traversal
// of a 2D vector
  
#include <bits/stdc++.h>
using namespace std;
  
// Driver Method
int main()
{
    // Initializing 2D vector "vect" with
    // sample values
    vector<vector<int> > vec{ { 1, 2, 3 },
                              { 4, 5, 6 },
                              { 7, 8, 9 } };
    // reverse(vec.begin(),vec.end());                          
    reverse(vec.begin(),vec.end());
    vector<int>::iterator iter;
    // Displaying the 2D vector
    for (int i = 0; i < 3; i++) {
        for (
            auto iter = vec[i].begin();
            iter != vec[i].end(); iter++)
            cout << *iter << " ";
        cout << endl;
    }
  
    return 0;
}