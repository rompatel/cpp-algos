// Same as Knapsack greedy, however, we cannot choose a portion of an object. Either it is completely chosen or completely discarded.
#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll i,j,k,n,m,t,capacity;
    cout<<"Enter the capacity of the knapsack:\n";
    cin>>capacity;
    cout<<"Enter the number of objects: \n";
    cin>>n;
    vector<ll>profit(n),weight(n);
    cout<<"Enter the profits of the objects as a list:\n";
    for(i=0;i<n;i++){
        cin>>profit[i];
    }
    cout<<"Enter the weights of the objects as a list:\n";
    for(i=0;i<n;i++){
        cin>>weight[i];
    }
    ll a[n][capacity+1];
    for(i=0;i<n;i++){
        a[i][0]=0;
    }
    for(j=0;j<=capacity;j++){
        a[0][j]=0;
    }
    for(i=0;i<n;i++){
        for(j=1;j<=capacity;j++){
            if(j==0 || i==0){
                continue;
            }
            if(j<weight[i]){
                a[i][j]=a[i-1][j];
            } else {
                a[i][j]=max(profit[i]+a[i-1][j-weight[i]], a[i-1][j]);
            }
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"The maximum profit we can obtain is: "<<a[n-1][capacity]<<endl;
    return 0;
}
