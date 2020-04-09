#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    int x=0,y=0;
    getline(cin,st);
    for(int i=0;i<st.length();i++){
        if(st[i]=='z')
            x++;
        else
            y++;
    }
    if(x*2==y)
        cout<<"Yes";
    else
        cout<<"No";
    cout<<"\n";
    return 0;
}
