int Solution::longestValidParentheses(string A) {
    stack<int> s;
s.push(-1);
for(int i = 0; i < A.length(); ++i) {
    if(A[i] == '(' || s.top() == -1 || A[s.top()] == ')') {
        s.push(i);
    } else {
        s.pop();
    }
}
int ml = 0, last = A.length();
while(!s.empty()) {
    int d = last - s.top() - 1;
    ml = max(ml, d);
    last = s.top();
    s.pop();
} 
return ml;
}
