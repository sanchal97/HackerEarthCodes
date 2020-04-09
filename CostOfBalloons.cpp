#include<bits/stdc++.h>
using namespace std;

void costBalloons(){
    int g,p,n;
    cin >> g >> p;
    cin >> n;
    int p1[n],p2[n];
    for(int i=0;i<n;i++){
        cin >> p1[i] >> p2[i];
    }
    int sum1=0,sum2=0;
    for(int i=0;i<n;i++){
        sum1+=p1[i];
        sum2+=p2[i];
    }
    if((sum1*g+sum2*p)<(sum1*p+sum2*g))
        cout<<sum1*g+sum2*p;
    else
        cout<<sum1*p+sum2*g;
    cout<<"\n";
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        costBalloons();
    return 0;
}
