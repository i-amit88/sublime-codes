#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){



    //.................................vector...........................
    vector<int>v;
    cout<<"printing capacity"<<endl;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<"printing values of v"<<endl;
    for(int x:v)
        cout<<x<<" ";
    cout<<endl;
    cout<<"printing capacity again after adding values"<<endl;
    cout<<v.capacity()<<endl;
    cout<<"printing size of vector v"<<endl;
    cout<<v.size()<<endl;
    cout<<"printing  array with values of v"<<endl;
    vector<int>a(v);
    for(int x:a)
        cout<<x<<endl;
    cout<<"poping values"<<endl;
    v.pop_back();
    v.pop_back();
    for(int x:v)
        cout<<x<<endl;
 //   xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx


    




    return 0;
}