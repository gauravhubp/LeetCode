class Solution {
public:
    int maximumLengthSubstring(string s) {
        int l=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            map<int,int> p;
            for(int j=i;j<n;j++)
            {
                p[s[j]]++;
                if(p[s[j]]<=2) l=max(l,j-i+1);
                else break;
            }
        }
        return l;
    }
};