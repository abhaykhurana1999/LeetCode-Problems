class Solution {
public:
    int maxProfit(vector<int>& p) {
       
        int minm=INT_MAX;
        int pf=0;
        for(int i=0;i<p.size();i++)
        {
            if(minm>p[i])
            {
               minm=p[i];
            }
            else if(p[i]-minm>pf)
            {
                pf=p[i]-minm;
            }
        }
        return pf;
        
        
    }
};