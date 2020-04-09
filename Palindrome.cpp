#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string st;
    vector<char>word,temp;
    char ch;
    getline(cin,st);
   
    for(int i=0;i<st.size();i++){
        ch=st.at(i);
        word.push_back(ch);
        temp.push_back(ch);
    }
    reverse(word.begin(),word.end());
    if(word==temp)
        cout<<"Yes";
    else
        cout<<"No";
    return 0;
}


