void bottom(stack<int> &s,int k){
    if(s.empty()){
        s.push(k);
        return;
    }
     int num=s.top();
    s.pop();
   bottom(s,k);
    s.push(num);
}


void reverseStack(stack<int> &stack) {
    if(stack.empty()){
        return;
    }
    int num=stack.top();
stack.pop();
reverseStack(stack);
bottom(stack,num);
}
