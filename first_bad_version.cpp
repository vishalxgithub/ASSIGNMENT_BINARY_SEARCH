class Solution {
public:
    int firstBadVersion(int n) {
        int s = 0;
        int e = n;
        int mid = s+(e-s)/2;
        int ans = -1;
        while(s<=e){
            bool a = isBadVersion(mid);
            if(a == true){
                ans = mid;
                e = mid-1;
            }
            else if(a == false){
                s = mid+1;
            }
            mid = s+(e-s)/2;
        }
        return ans;
    }
};
