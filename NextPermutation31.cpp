class Solution {
    
public:
    void nextPermutation(vector<int>& v) {
        int n = v.size()-1;
        for(int i = n; i>0; i--){
            if(v[i]>v[i-1]) {
                sort(v.begin()+i, v.end());
                for(int j = i; j<v.size(); j++){
                    if(v[i-1]<v[j]){
                        swap(v[i-1], v[j]);
                        return;
                    }
                }
            }
        }
        sort(v.begin(), v.end());
    }
};