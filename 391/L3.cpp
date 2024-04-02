class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& a) {
        long long n=a.size();
        vector<long long> v(n,0);
        long long s=1,c=0;
        for(int i=n-2;i>=0;i--)
        {
            if(a[i]!=a[i+1])
            {
                s++;
                v[i]=s;
            }
            else s=1;
        }
        for(int i=0;i<n;i++) c+=v[i]==0 ? 1: v[i];
        return c;
    }
};