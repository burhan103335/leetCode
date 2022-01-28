/* trie approch
    Check all character for "." .
*/


class WordDictionary {
public:
    
    struct node{
        node* word[26];
        bool check;
    };
    
    bool ck(string s, int start, int end, node* head)
    {
        if(start>=end)
        {
            if(head==NULL) return 0;
            return head->check;
        }
        if(head==NULL) return 0;
        int val  = s[start]-'a';
        if(s[start]!='.'){
            if(head->word[val]==NULL) return 0;
            return ck(s, start+1, end, head->word[val]);
        }
        else
        {
            int ans = 0;
            for(int i = 0; i<26; i++){
                if(head->word[i]!=NULL) ans |= ck(s, start+1, end, head->word[i]);
            }
            return ans;
        }
        return head->check;
    }
    
    
    node* root;
    int id;
    
    node* createNode(){
        node* newNode = new node();
        for(int i = 0; i<26; i++) newNode->word[i] = NULL;
        newNode->check = false;
        return newNode;
    }
    
    
    WordDictionary() {
        root = createNode();
    }
    
    void addWord(string wd) {
        int n = wd.length();
        node* head = root;
        for(int i = 0; i<n; i++)
        {
            id = wd[i]-'a';
            if(head->word[id]==NULL){
                node* newNode = createNode();
                head->word[id] = newNode;
            }
            head = head->word[id];
        }
        head->check = true;
    }
    
    bool search(string wd) {
        int n = wd.length();
        /*
        node* head = root;
        for(int i = 0; i<n; i++)
        {
            if(wd[i]!='.'){
                id = wd[i]-'a';
                if(head->word[id]==NULL) return 0;
                head = head->word[id];
            }
            for(int j = 0; j<26; j++)
            {
                
            }
        }
        return head->check;
        */
        return ck(wd, 0, n, root);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */