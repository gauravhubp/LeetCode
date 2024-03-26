class Solution {
public:
    int minOperations(int k) {
        int n=k;
        if(k==1) return 0;
        for(int i=1;i<=k/2;i++)
        {
            int l=k/i;
            if(l*i<k) l=l+1;
            n=min(n,i-1+(l-1));
        }
        return n;
    }
};