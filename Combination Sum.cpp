class Solution {
    private:
    void findCombination(vector<int>&candidates,int target,vector<vector<int>>& ans ,vector<int>&ds,int index)
    {
           if(index == candidates.size())
           {
               if(target == 0)
               {
                   ans.push_back(ds);
                 
               }
                 return;
           }

           ////picking the element from the array
           if(candidates[index] <= target)
           {
               ds.push_back(candidates[index]);
               findCombination(candidates,target - candidates[index], ans,ds,index);
               ds.pop_back();
           }

           ///not picking the elementthe element 
           findCombination(candidates,target, ans,ds,index + 1);

    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       // sort(candidates.begin(),candidates.end());
        vector<vector<int>>ans;
        vector<int>ds;

        findCombination(candidates,target,ans,ds,0);
        return ans;
    }
};
