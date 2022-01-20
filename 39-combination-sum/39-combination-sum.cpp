class Solution {
public:
    
void find(int index,vector<int> & candidates,int target,vector<vector<int>>& res,vector<int>&ds)
    {
        if(index==candidates.size())
        {
            if(target==0)
            {
                res.push_back(ds);
               
            }
            return;
        }
     
       if(candidates[index]<=target)
       {
           ds.push_back(candidates[index]);
           find(index,candidates,target-candidates[index],res,ds);
           ds.pop_back();
           
       }
     find(index+1,candidates,target,res,ds);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int>ds;
        find(0,candidates,target,res,ds);
        return res;
    }
};