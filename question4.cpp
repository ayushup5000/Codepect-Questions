#include<iostream>
using namespace std;

int main(){
     int a=0,b=1,c,n,i;
     cout<<"Enter a Number: "<<"\n";
     cin>>n;
     for(int i=1; i<n; i++){
        if(i<=1){
            c = i;
        }

        else{
            c = a+b;
            a = b;
            b = c;
        }
         cout<<c<<" ";
     }

    return 0;
}
