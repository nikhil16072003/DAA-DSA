#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int i,a,b,temp;
   a=0;
   b=1;
   cout<<a<<" ";
   cout<<b<<" ";
   for(i=2;i<n;i++){
       temp=b;
       b=b+a;
       a=temp;
       cout<<b<<" ";
       
   }

    return 0;
}
