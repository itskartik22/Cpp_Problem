class Solution {
public:
    int guessNumber(int n) {
        // int arr[n];
        // for(int i=0;i<n;i++){
        //     arr[i]=i+1;
        // }
        int s=1;
        int e=n;
        while(s<=e){
            int m=s+ (e-s)/2;
            int ret=guess(m);
            if(ret==-1){
                e=m-1;
            }
            else if(ret==1){
                s=m+1;
            }
            else{
                return m;
            }
        }
        return -1;
    }