bool isValidParenthesis(string s)
{
    // Write your code here.
    stack<char> st;
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='[' || s[i]=='{'){
                st.push(s[i]);
            }
            else {
                if(st.empty()){
                    return false;
                }
                if((s[i]==')' && st.top()=='(')||(s[i]=='}' && st.top()=='{')||(s[i]==']' && st.top()=='[')){
                st.pop();
            }
            else{
                return false;
            }
        
                   
        }
        }
        if(st.empty()){
            return true;
        }
        else{
            return false;
        }
}