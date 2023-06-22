
class Solution {
public:
     
    unordered_map<Node*, Node*> mp;
    Node* cloneGraph(Node* node) {
        if(node == NULL)
            return NULL;
        
        if(mp.find(node) != mp.end())
            return mp[node];
        
        Node* newly_created_node = new Node(node -> val);
        
        mp[node] = newly_created_node;
        
        for(Node* &it : node -> neighbors)
        {
            Node* adjacent = cloneGraph(it);    
            newly_created_node -> neighbors.push_back(adjacent);
        }
        return newly_created_node;
    }
};
