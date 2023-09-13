/*
at n=5


1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
  */
#include <iostream>
using namespace std;
void pattern(int n){
    if(n==1){
        cout<<n<<"\n";
        return;
    }
    int i;
    for(i=1;i<=n;i++){
        cout<<i<<" ";
    }
    cout<<"\n";
    pattern(n-1);
    for(i=1;i<=n;i++){
        cout<<i<<" ";
        
    }
    cout<<"\n";
    
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    
}
////////////////////////////////////////////////////////////////////////////////
/*
at n==5
1
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
*/
#include <iostream>
using namespace std;
void pattern(int n){
    if(n==1){
        cout<<n<<"\n";
        return;
    }
    int i;
 
    pattern(n-1);
    for(i=1;i<=n;i++){
        cout<<i<<" ";
        
    }
    cout<<"\n";
    
}
int main(){
    int n;
    cin>>n;
    pattern(n);
    
}
/////////////////////////////////////////////////////////////////////////////////////////////////////
