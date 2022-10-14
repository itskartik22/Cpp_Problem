#include <bits/stdc++.h>
using namespace std;
// Optimized Method
//  int minEatingSpeed(vector<int> &piles, int h)
//  {
//      int high = INT_MIN;
//      for (auto val : piles)
//      {
//          high = max(high, val);
//      }
//      int ans = 0;
//      int low = 1;
//      while (low < high)
//      {
//          int mid = low + (high - low) / 2;
//          int val = 0;
//          // time calculation if speed is k
//          for (auto a : piles)
//              val += (a + mid - 1) / mid;
//          // checking with given hour
//          if (val <= h)
//          {
//              high = mid;
//          }
//          else
//          {
//              low = mid + 1;
//          }
//      }
//      return low;
//  }
//  Normal Method
int minEatingSpeed(vector<int> &piles, int h)
{
    int max_pile = piles[0];
    for (auto pile : piles)
    {
        max_pile = max(max_pile, pile);
    }
    int k = 1, i;
    while (k <= max_pile)
    {
        int time = 0;
        for (i = 0; i < piles.size(); i++)
        {
            time += (piles[i] + k - 1) / k;
        }
        if (time <= h)
        {
            break;
        }
        else
        {
            k++;
        }
    }
    return k;
}
int main()
{
    vector<int> vec = {332484035, 524908576, 855865114, 632922376, 222257295, 690155293, 112677673, 679580077, 337406589, 290818316, 877337160, 901728858, 679284947, 688210097, 692137887, 718203285, 629455728, 941802184};
    int h =  823855818;
    cout << minEatingSpeed(vec, h);
    return 0;
}