#include<iostream>
using namespace std;
#include<unordered_set>





int main(){
    unordered_set<int>st;
    st.insert(5);
    st.insert(23);
    st.insert(21);
    st.insert(22);
    if(st.find(5)== st.end()){
        cout<<"not found";    //here it automatically breaks the loop
        

    }else{
        cout<<"found\n";

    }

    //printing values
    for(auto it= st.begin();it != st.end();it++){
        cout<<(*it)<<endl;
    }

    return 0;
}
