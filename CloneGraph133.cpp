queue<Node*>q;
class Solution {
public:
    Node* cloneGraph(Node* node) {
   
        if(node == nullptr) return nullptr;
        unordered_map<int, Node*> mp;
        
        mp[1] = new Node(node->val);
        
        q.push(node);
        
        while(!q.empty()) {
            node = q.front();
            q.pop();
            
            for(auto n : node->neighbors) {
                if(!mp[n->val]) {
                    q.push(n);
                    mp[n->val] = new Node(n->val);
                }
                
                mp[node->val]->neighbors.push_back(mp[n->val]);
            }
            
        }
        
        
        return mp[1];
        
    }
};