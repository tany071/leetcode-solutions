class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        multimap<int,char> r;
        string ans = "";
        for (auto a:s){
            map[a]++;
        }
        for(auto a:map){
            r.insert({a.second,a.first});
        }
        for(auto it = r.rbegin(); it != r.rend();++it){
            ans += string(it->first, it->second);
        }

        return ans;
        
    }
};
