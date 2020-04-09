#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s1,s2;
    const int max=26;
    int counta[max],countb[max],del=0;

    cin >> s1 >> s2;
    
    memset(counta,0,sizeof(counta));
    memset(countb,0,sizeof(countb));
    
    for(int i=0;i<s1.size();i++)
        counta[s1[i]-'a']++;
    
    for(int i=0;i<s2.size();i++)
        countb[s2[i]-'a']++;
    
    for(int i=0;i<26;i++){
       del+=abs(counta[i]-countb[i]);    
    }
                        
    cout<<del<<"\n";
}

int main(){
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
