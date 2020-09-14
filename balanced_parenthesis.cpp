int Solution::solve(string A) {
    stack<char> st;
    for(int i=0;i<A.size();i++) {
        if(A[i]=='(') {
            st.push(A[i]);
        } else if(A[i]==')') {
            if(st.size()>0) {
                char open = st.top();
                if(open=='(') {
                    st.pop();
                } else {
                    st.push(A[i]);
                }
            } else {
                    st.push(A[i]);
                }
        }
    }
    if(st.empty()) {
        return 1;
    } else {
        return 0;
    }
}
