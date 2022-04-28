class Solution {
public:
  bool isValid(string s) {
        stack<char> st;
        
        for( char ch: s) {
            if(st.empty() || ch == '{' || ch == '['|| ch == '('){
                st.push(ch);
            }
            else if( ( st.top()== '{' && ch == '}' ) || 
                     ( st.top()== '[' && ch == ']' ) ||
                     ( st.top()== '(' && ch == ')' ) ){
                st.pop();
            }
            else 
                return false;
        }
      if(st.empty()) return true;
      return false;
    }
};
