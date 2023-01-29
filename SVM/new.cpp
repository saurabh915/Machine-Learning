#include<bits/stdc++.h>
using namespace std;
void solve(long long int n , long long int l, long long int s){
    vector<long long int>order;
for (long long int i = 1; i <= n; i++)
{
    order.push_back(i);
}
for (int i = 0; i < order.size(); i++)
{
    cout<<order[i]<<endl;
}

for (int i = 0; i < n; i++)
{
    int sum =0;
   int j =0;
   int k =j;
   int cnt = l;
   while(j<n){
  
    if(j == i){
       j++;
    }
    if(sum <s and cnt){
        sum = sum+ order[j];
     
        j++;
        cnt--;

    }
  
        if(sum == s and !cnt){
            cout<<"YES"<<endl;
            return;
        }
        if(sum >= s || !cnt){
             j = k+1;
             sum =0;
             k =j;
             cnt = l;
        }
    
    
   }
}
cout<<"NO"<<endl;
return;

}
int main()
{
  long long  int t;
    cin>>t;
    while(t--){
long long int n,l,s;
cin>>n;
cin>>l;
cin>>s;

cout<<"i am calling solve"<<endl;
solve(n,l,s);


    }
    return 0;
}