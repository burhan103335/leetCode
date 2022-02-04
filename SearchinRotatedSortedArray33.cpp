/* first find the pivot */

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size()-1, pivot = 0, mid, end, start = 0;
        if(nums[0]>nums[n]){
            end = n;
            while(pivot<end){
                mid = (pivot+end)/2;
                if(nums[mid]>=nums[0]) pivot = mid+1;
                else end = mid;
            }
            if(target>=nums[0]){
                pivot--;
                while(start<=pivot){
                    mid = (start+pivot)/2;
                    if(nums[mid]==target) return mid;
                    else if(nums[mid]<target) start = mid+1;
                    else pivot = mid-1;
                }
                return -1;
            }
            else{
                while(pivot<=n){
                    mid = (pivot+n)/2;
                    if(nums[mid]==target) return mid;
                    else if (nums[mid]<target) pivot = mid+1;
                    else n = mid-1;
                }
                return -1;
            }
        }
        else{
            while(start<=n){
                    mid = (start+n)/2;
                    if(nums[mid]==target) return mid;
                    else if (nums[mid]<target) start = mid+1;
                    else n = mid-1;
                }
                return -1;
        }
        
    }
};