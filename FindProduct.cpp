#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    long long int ans=1;

    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin >> arr[i];
    for(int i=0;i<n;i++)
        ans=(ans*arr[i])%(int)(pow(10,9)+7);
    cout<<ans;
    return 0;
}
