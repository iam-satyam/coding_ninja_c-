#include<stack>
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
   stack<int> s;
   s.push(-1);
   vector<int> ans;
   for(int i=n-1; i>=0; i--){
       int curr=arr[i];
       while(s.top()>=curr){
          s.pop();
       }
       s.push(curr);
       ans[i]=s.top();

   }
   return ans;
}
