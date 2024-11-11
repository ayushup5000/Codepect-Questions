#include<iostream>
using namespace std;

int main(){
    int n,i;
    cout<<"The Prime Number Between 1 to 100 are as follows: "<<"\n";

    for(n=1; n<=100; n++){
         for( i=2; i<=n/2; i++){
        if(n%i==0)
        break;
       }
       if(i>n/2)
       cout<<n<<" ";
    }
    return 0;
}