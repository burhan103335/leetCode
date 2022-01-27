/*
    Here i discribe all step what I take for this problem.
    Step 1: convert number to binary 31 bit.
    Step 2: check my trie, and get the maximum xor for this binary number.
    Step 3: Check with previous max and store max value.
    Step 4: insert this binary in Trie.
    
*/

class Solution {
    int ar[32];
    
    void makeBinary(int val){
        int id = 31;
        while(val){
            ar[id--]  = val%2;
            val /= 2;
        }
    }
    
    
    struct BinaryTreeNode
    {
        BinaryTreeNode *left, *right;
    };
    
    BinaryTreeNode* newBinaryTreeNode()
    {
        BinaryTreeNode *temp = new BinaryTreeNode;
        temp->left = temp->right = NULL;
        return temp;
    }
    
public:
    int findMaximumXOR(vector<int>& nums) {
        int n = nums.size(), mx = 0, ans, j;
        
        BinaryTreeNode *head = newBinaryTreeNode(), *tmp;
        
        
        for(int i = 0; i<n; i++)
        {
            for(j = 0; j<32; j++) ar[j] = 0;
            makeBinary(nums[i]);
            ans = 0;
            
            tmp = head;
            
            for(j = 0; j<32; j++)
            {
                if(ar[j] && tmp->left !=NULL)
                {
                    ans = (ans*2) +1;
                    tmp = tmp->left;
                }
                else if(ar[j] && tmp->right != NULL)
                {
                    ans = (ans*2);
                    tmp = tmp->right;
                }
                else if(ar[j]==0 && tmp->right != NULL){
                    ans = (ans*2) + 1;
                    tmp = tmp->right;
                }
                else if(ar[j]==0 && tmp->left != NULL){
                    ans = (ans*2);
                    tmp = tmp->left;
                }
                else break;
            }
            mx = max(mx, ans);
            tmp = head;
            for(j = 0; j<32; j++){
                if(ar[j]){
                    if(tmp->right == NULL)
                        tmp->right = newBinaryTreeNode();
                    tmp = tmp->right;
                }
                else
                {
                    if(tmp->left == NULL) tmp->left = newBinaryTreeNode();
                    tmp = tmp->left;
                }
            }
            
        }
        return mx;
    }
};