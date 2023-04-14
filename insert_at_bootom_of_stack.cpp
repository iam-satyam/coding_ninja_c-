#include <bits/stdc++.h>

void bottom(stack<int>&s,int n,int c,int k){
    if(s.empty()){
        s.push(k);
        return;
    }
    int num=s.top();
    s.pop();
    bottom(s,n,c+1,k);
    s.push(num);
}
stack<int> pushAtBottom(stack<int>& myStack, int x) 
{ int siz=myStack.size();
  int count=0;
  
 bottom(myStack,siz,count,x);
 return myStack;

}

