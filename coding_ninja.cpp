#include <bits/stdc++.h>

using namespace std;

string solution(string &s){
    string b;
    int i=0;
    while(i<s.length()){
        // if(s[i+1]=='B'){
        //     i++;
        //     i++;
        // }else{
        //     b.push_back(s[i]);
        //     i++;
        // }
        if(s[i]=='B'){
            b.pop_back();
            while(s[i++]=='B') i++;
            i++;
            b.push_back(s[i]);
        }
        else{
            b.push_back(s[i]);
            i++;
        }
    }
    return b;
}
int main()
{
    string input;
    cin>>input;
    cout<<solution(input);
    return 0;
}