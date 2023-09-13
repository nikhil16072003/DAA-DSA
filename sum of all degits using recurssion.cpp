#include <iostream>
using namespace std;
int sum(int n){
    if(n==0){
        return 0;
    }
    int lastdigit=n%10;
    int quotient=n/10;
    return sum(quotient) +lastdigit;
}
int main() {
   int n;
   cin>>n;
   int ans=sum(n);
   cout<<ans;

    return 0;
}
