#include <bits/stdc++.h>
#include <iostream>
using namespace std;
struct node{
    int head;
    string name;
}a[100001];
int n,m,x,y;

int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>a[i].head>>a[i].name;
    }//input the sentences
    int now=0;
    for(int i=1;i<=m;i++){
        cin>>x>>y;
        if(a[now].head==0){
            now=(now+x+y-1)%n+1;
        }else{
            if(x==1){
                now=(now-y+n-1)%n+1;
            }else{
                now=(now+y-1)%n+1;
            }
        }
    }
   cout<<a[now-1].name<<endl;
    return 0;
}