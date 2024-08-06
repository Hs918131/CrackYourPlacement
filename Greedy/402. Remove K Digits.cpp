class Solution {
public:
    string removeKdigits(string num, int k) {
        if(num.size() == k) return "0";
        stack<char> st;
        for(char c: num){
            while(!st.empty() && c < st.top() && k > 0){
                st.pop();
                k--;
            }
            if(st.empty() && c == '0') continue; 
            st.push(c);   
        }
        while(k != 0 && !st.empty()){
            st.pop();
            k--;
        }
        if(st.empty()) return "0";
        string ans = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
