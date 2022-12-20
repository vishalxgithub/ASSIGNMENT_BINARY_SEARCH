class Solution {
public:
    int guessNumber(int n) {
    int s=0;
    int e=n;
    int mid = s+(e-s)/2;
        while(s<=e){
            int a = guess(mid);
            if(a == 0)
                return mid;
            if(a == -1)
                e = mid-1;
            else if(a == 1)
                s = mid+1;
            mid = s+(e-s)/2;
        }
        return 1;
    }
};
