#include <bits/stdc++.h>
using namespace std;
int minEatingSpeed(vector<int> &piles, int h)
{
    int high = INT_MIN;
    for (auto val : piles)
    {
        high = max(high, val);
    }
    int ans = 0;
    int low = 1;
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        int val = 0;
        // time calculation if speed is k
        for (auto a : piles)
            val += (a + mid - 1) / mid;
        //checking with given hour   
        else if(val<=h){
            high = mid;
        }
        else{
            low = mid + 1;
        }
    }
    return low;
}
int main()
{
    vector<int> vec = {3,6,7,11};
    // vector<int> vec = {30, 11, 23, 4, 20};
    int h = 8;
    cout << minEatingSpeed(vec, h);
    return 0;
}
// Brute Force Method ...
//  int maxFunction(vector<int> &piles)
//  {
//      int maxi = INT_MIN;
//      for (auto val : piles)
//      {
//          maxi = max(maxi, val);
//      }
//      return maxi;
//  }
//  int minEatingSpeed(vector<int> &piles, int h)
//  {
//      int num = maxFunction(piles);
//      int count = 0;
//      int ans = 1;
//      for (int i = 1; i <= num; ++i)
//      {
//          int k = i;
//          count = 0;
//          for (int j = 0; j < piles.size(); j++)
//          {
//              int value = piles[j];
//              while (value > 0)
//              {
//                  value -= k;
//                  count++;
//              }
//          }
//          if (count == h)
//          {
//              ans = k;
//              break;
//          }
//      }
//      return ans;
//  }