#include<bits/stdc++.h>
using namespace std;
#define n 3

class matrix{
   public:
      void matrixmul(int a[][n],int b[][n],int res[][n]){
           for(int i=0;i<n;i++){
               int sum=0;
               for(int j=0;j<n;j++){
                   for(int k=0;k<n;k++){
                       sum+=a[i][k]*b[k][j]; 
                   } 
                   res[i][j]=sum;
                   sum=0;
               }
           }
           
      }

};

int main(){

   cout<<"ente elements of 1st matrix";
   int a[n][n],b[n][n],res[n][n];
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
          cin>>a[i][j];
      }
   }
   cout<<"enter elements of 2nd matrix";
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         cin>>b[i][j];
      }
   }

   matrix m;
   m.matrixmul(a,b,res);
   
   for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
         cout<<res[i][j]<<" ";
      }
      cout<<endl;
   }  

   return 0;
}
