#include<bits/stdc++.h>
using namespace std;

int top=0;
int arr[200];

class STACK{
  
  public:
  void insert(int data){              // insertion on top of stack
     arr[top] = data;
     top++;
  }

  void showlist(){                    // showing the stack from top
     for(int i=top-1;i>=0;i--){
        cout<<arr[i]<<" ";
     }
  }
  void DELETE(){                      // deleting top of stack
     top--;
  }
  
};

int main(){

  STACK s;
  int choice,data;
  
  cout<<" enter choice 1.insert 2.printstack 3.delete top of stack:";
  cin>>choice;
  while(choice!=-1){
      if(choice==1)
      {
          cout<<"enter data:";
          cin>>data;
          s.insert(data);
      }
      else if(choice==2){
           cout<<"the list is:";
           s.showlist();
           cout<<endl;
      }
      else if(choice==3){
           cout<<"after deleting top of stack:";
           s.DELETE();
           s.showlist();
           cout<<endl;
      }
      else
      cout<<"wrong choice!!"<<endl;

      cout<<"enter next choice:";
      cin>>choice;
  } 

  return 0;
}
