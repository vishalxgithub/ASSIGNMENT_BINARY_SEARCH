class Solution {
public:
    int mySqrt(int x) {
        if(x == 0)
            return 0;
        int s = 0;
        int e = x;
        long long mid = s+(e-s)/2;
        int ans = 0;
        while(s<=e){
            long long sqr = mid*mid;
            if(sqr == x)
                return mid;
            if(sqr < x){
                ans = mid;
                s = mid+1;
            }
            else
                e = mid-1;
            mid = s+(e-s)/2;
        }
        return ans;
    }
};
