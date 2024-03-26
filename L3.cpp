class Solution {
public:
    vector<long long> mostFrequentIDs(vector<int>& a, vector<int>& f) {
        vector<long long> v;
        multiset<long long> s;
        map<int,long long int> p;
        for(int i=0;i<a.size();i++)
        {
            if(p.count(a[i]))
            {
                long long l=p[a[i]];
                if(s.find(l)!=s.end())
                    s.erase(s.find(l));
            }
            p[a[i]]+=f[i];
            s.insert(p[a[i]]);
            v.push_back(*s.rbegin());
        }
        return v;
    }
};