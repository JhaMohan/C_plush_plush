bool findRedundantBrackets(string &s)
{
    // Write your code here.
    stack<char>st;
    
    for(int i=0;i<s.length();i++) {
        char ch = s[i];
        
        if(ch=='(' || ch== '+'|| ch== '-'|| ch== '*' || ch== '/') {
            st.push(ch);
        }else {
            
            if(ch = ')') {
                bool isRedunant = true;
                while(st.top()!='(') {
                     char top = st.top();
                    if( top=='+'|| top=='-'|| top=='*' || top=='/'){
                        isRedunant = false;
                    }
                    st.pop();
                }
                if(isRedunant==true) {
                    return true;
                }       
                st.pop();
            }
        }
    }
    
    if(st.empty()) {
        return false;
    }else {
        return true;
    }