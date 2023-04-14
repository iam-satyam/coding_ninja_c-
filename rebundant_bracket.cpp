#include <bits/stdc++.h> 
bool findRedundantBrackets(string &s)
{  int n=s.length();
    stack<char>p;

    for(int i=0;i<n;i++){

        if(s[i]=='('||s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/' ){
            p.push(s[i]);
        }
        else{
             if(s[i]==')' ){
            bool is =true;
            while(p.top()!='('){
                char top=p.top();
                if (top == '+' || top == '-' || top == '*' || top == '/') {
                  is = false;
                }
                p.pop();
            }
            if (is == true)
              return true;
            p.pop();
             }
        }
    }
    
    return false;
}
