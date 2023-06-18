//Amazon Spring '23 High Frequency
class Solution {
public:
    int partitionString(string s) {
        int count=1;
        set<char> str;
        for(char c : s){
            if(str.count(c)){
                str.clear();
                count++;
            }
            str.insert(c);
        }
        return count;
    }
};
