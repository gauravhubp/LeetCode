class Solution {
public:
    int maxBottlesDrunk(int b, int n) {
        int s=b;
        
        while(b>=n)
        {
            s+=1;
            b=b-n;
            b++;
            n++;
        }
        return s;
    }
};