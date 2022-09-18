#include<iostream>
using namespace std;
#include<unordered_set>

struct Node{
    int data;
    struct Node *next;

}*head=NULL;



void removeDuplicates(struct Node* head)
{
   
    unordered_set<int> seen;
 
    
    struct Node* curr = head;
    struct Node* prev = NULL;
    while (curr != NULL) {
        
        if (seen.find(curr->data) != seen.end()) {
            prev->next = curr->next;
            delete (curr);
        }
        else {
            seen.insert(curr->data);
            prev = curr;
        }
        curr = prev->next;
    }
}

int main(){
    unordered_set<int>st;
    st.insert(5);
    st.insert(23);
    st.insert(21);
    st.insert(22);
    if(st.find(5)== st.end()){
        cout<<"not found";

    }else{
        cout<<"found\n";

    }

    //printing values
    for(auto it= st.begin();it != st.end();it++){
        cout<<(*it)<<endl;
    }

    return 0;
}
