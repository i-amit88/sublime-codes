#include<bits/stdc++.h>
using namespace std;

void generate(int pos, string &str,vector<string>&ans){     
        if(pos>= str.size()){
            ans.push_back(str);
            return;

        }

        for(int i=pos; i<str.size();i++){
            swap(str[i],str[pos]);
            generate(pos+1,str,ans);
            swap(str[i],str[pos]); //backtracing step

        }
}



int main(){
    string str="abc";
    // cin>>str;
    vector<string>ans;

    generate(0,str,ans);

    for(auto ele:ans){
        cout<<ele<<"\n";

    }
    return 0; 
}