#include<bits/stdc++.h>
using namespace std;
#define ll long long int

class complexImplementer{
  
   public:
      ll real1;
      ll real2;
      ll imaginary1;
      ll imaginary2;

      void complexadder(ll real1,ll imaginary1,ll real2,ll imaginary2){           // function to add two complex numbers
           ll realadd=real1+real2;
           ll complexadd=imaginary1+imaginary2;
           cout<<"after sum:";
           if(complexadd>=0)
           cout<<realadd<<"+"<<abs(complexadd)<<"i"<<endl;

           else
           cout<<realadd<<"-"<<abs(complexadd)<<"i"<<endl;
      }

      void complexsubstract(ll real1,ll imaginary1,ll real2,ll imaginary2){       // function to substract two complex numbers
           ll realsub=real1-real2;
           ll imaginarysub=imaginary1-imaginary2;
           cout<<"after substraction:";
           if(imaginarysub>=0)
           cout<<realsub<<"+"<<abs(imaginarysub)<<"i"<<endl;
           
           else
           cout<<realsub<<"-"<<abs(imaginarysub)<<"i"<<endl;         
      }
     
};

int main(){
  complexImplementer s;
  ll a,b,c,d;
  cout<<"enter the real and complex parts of first complex number:";
  cin>>a>>b;
  
  cout<<"enter real and imaginary parts of second complex number:";
  cin>>c>>d;
  
  s.complexadder(a,b,c,d);
  s.complexsubstract(a,b,c,d);
  return 0;
}
