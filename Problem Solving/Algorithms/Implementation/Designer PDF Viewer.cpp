#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,alpha[26],num[10],temp=0;
    string s;
    
    
    for(int i=0;i<26;i++)
    {cin>>alpha[i];}
    
    cin>>s;
    for(int x=0; x<s.size(); x++)
    {
        n=int(s[x])-97;
        num[x]=alpha[n];
        
    }
    
    auto max=max_element(num,num+10);
    cout<<(*max)*(s.size())<<"\n";
    

    return 0;
}
