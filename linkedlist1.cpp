#include <iostream>
using namespace std;

class Node{
      
      public:
             
      int data;  
      Node *next;          
      
};


class SLL{
      
 private:
         
         Node *head;       //Node pointer to head
         
 public:
        
        SLL(){               //default constructor
        head = NULL;
        }
        void printAll();
      
        void insertNewNode(int item);

        void search(int item);
        void delet();
};


     void SLL::printAll(){
     
     Node *p;
     p = head;
     while(p->next!=NULL){
     
     cout << p->data << " ";
     p = p->next;
     } 
     
} 

     void SLL::insertNewNode(int item){
          Node* temp;
          
          temp = new Node;
          temp->data = item;
          temp->next = head;
          head = temp;
          
          
          }


    void SLL::search(int item){
         Node* temp;
         temp=head;
         int c=1;
         while(temp->next!=NULL){
             if(temp->data==item){
                 cout<<"search successful at"<<c<<endl;
             }
             temp=temp->next;
             c++;
         }      
    }
    void SLL::delet(){
          if(head==NULL){
              return;
          }
          Node* temp;
          temp=head;
          head=head->next;
          delete(temp);
          cout<<"head deleted"<<endl;
    }
int main(){
    
    SLL list;
    int x;
    cin>>x;
    while(x!=-1){
    list.insertNewNode(x);
    cin>>x;}
    
    list.printAll();
    list.search(2);
    list.delet();
    list.printAll();
    return 0;
    
    
}

