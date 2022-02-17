class Solution {

    void backtracking(vector<vector<int>> & ans, vector<int> tmp, vector<int> candidates, int target, int pos, int sum) {
        if(sum)
            tmp.push_back(candidates[pos]);
        if(sum>target) return;
        if(sum  ==  target){
            ans.push_back(tmp);
            return;
        }
        
        for(int i = pos; i<candidates.size(); i++){
            
            backtracking(ans, tmp, candidates, target, i, sum+candidates[i]);
        }
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        //sort(candidates.begin(), candidates.end());

        vector<vector<int>> ans;

        vector<int>tmp;

        backtracking(ans, tmp, candidates, target, 0, 0);

        return ans;
    }
};
