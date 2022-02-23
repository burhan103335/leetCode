unordered_map<int, Node*> mp;

Node* dfs(Node* node) {
    if(node == nullptr) return nullptr;
    
    mp[node->val] = new Node(node->val);
    int n = node->neighbors.size();
    for(int i = 0; i<n; i++) {
        if(mp[node->neighbors[i]->val]){
            mp[node->val]->neighbors.push_back(mp[node->neighbors[i]->val]);
        }
        else mp[node->val]->neighbors.push_back(dfs(node->neighbors[i]));
    }
    return mp[node->val];
    
}



class Solution {
public:
    Node* cloneGraph(Node* node) {
        mp.clear();
        return dfs(node);
    }
};