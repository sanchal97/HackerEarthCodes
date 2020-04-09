#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,rem,num;
    cin >> n;
    rem=n%12;
    string str;
    //identifying type of seat    
    if(rem==0||rem==1||rem==6||rem==7)
        str="WS";
    else if(rem==3||rem==4||rem==9||rem==10)
        str="AS";
    else
        str="MS";
    //identifying opposite seat nos;
    if(str=="WS")
    {
        if(rem==1)
            num=n+11;
        else if(rem==6)
            num=n+1;
        else if(rem==7)
            num=n-1;
        else
            num=n-11;
    }
    else if(str=="AS")
    {
        if(rem==3)
            num=n+7;
        else if(rem==4)
            num=n+5;
        else if(rem==9)
            num=n-5;
        else
            num=n-7;
    }
    else
    {
        if(rem==2)
            num=n+9;
        else if(rem==5)
            num=n+3;
        else if(rem==8)
            num=n-3;
        else
            num=n-9;
    }
    cout<<num<<" "<<str<<"\n";
}

    int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}

