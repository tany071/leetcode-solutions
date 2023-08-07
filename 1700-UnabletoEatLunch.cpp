class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int> st;
        queue<int> q;
        for (int i=0;i<students.size();i++){
            st.push(sandwiches[sandwiches.size()-1-i]);
            q.push(students[i]);
        }
        int n=0;
        while(!st.empty()){
            if(st.top()==q.front()){
                st.pop();
                q.pop();
                n=0;
            } else{
                q.push(q.front());
                q.pop();
                n++;
            }
            if(n==q.size()) break;
        }
        return q.size();
        
    }
};
