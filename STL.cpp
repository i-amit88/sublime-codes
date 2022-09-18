#include<iostream>
#include<map>  //stores key pair value
#include<vector>
#include<set>
#include<list>
#include<forward_list>
using namespace std;
int main(){
    
    
    // map<int,string> m;
    // m.insert(pair<int,string>(1,"john"));   //inserting element in pair 
    // m.insert(pair<int,string>(2,"ravi"));
    // m.insert(pair<int,string>(3,"khan"));



    //     //for iterating  method 2........................

    map<int,string>::iterator itr;

    for ( itr = m.begin(); itr != m.end(); itr++)   //begin and end is same for all forward list and list set vector and dequeue

    {
        cout<<itr->first<< " "<<itr->second<<endl;
    }

    //..........................using vector...........................
    // vector<int> v={1,2,3,4};
    // v.push_back(10);
    // v.push_back(11);
    // v.pop_back(); //deletes element from last

    // //iterator 1 .........
    // for(int x : v){
    //         cout<<x<<endl;

    // }

        //.......................using list...................


    // list<int> l={1,2,3,4,5};
    // l.push_back(23);
    // l.push_back(24);
    // l.pop_back();
    // l.pop_front();   //pops element from front

    // for(int x : l){
    //     cout<<x<<endl;
    // }


    // forward_list<int> fl={1,2,3,4,6};
    // fl.push_front(5);
    // fl.push_front(7);
    // fl.pop_front();
    // // everything will take effect from front only..................

    // for(int x: fl){
    //     cout<<x<<endl;
    // }
    

    
    return 0;

}