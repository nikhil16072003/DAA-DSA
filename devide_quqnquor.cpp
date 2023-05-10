/*
Write a program using divide and conquer approach to sort the given array of symbols based on the frequency of its occurances

For example:

If the given array of symbols contains ['*', '$', '*', '+', '*', '-', '-', '+', '-', '*']

Then you output should be printed as

$

+ +

- - -

* * * *



Sample Input:

1st line: 10 (size of the array)

2nd line: '*', '$', '*', '+', '*', '-', '-', '+', '-', '*' (The array of symbols)

Output:

$
+ +
- - -
* * * *

Note: There will be no symbols with equal number of occurances

Sample 2:

6

% * $ % * *

Output

$
% %
* * *
*/


#include <iostream>
using namespace std;
void merge_sort(int i, int j, int a[], int aux[]) {
    if (j <= i) {
        return;     
    }
    int mid = (i + j) / 2;

    
    
    merge_sort(i, mid, a, aux);     
    merge_sort(mid + 1, j, a, aux);    

    int pointer_left = i;       
    int pointer_right = mid + 1;        
    int k;      
    for (k = i; k <= j; k++) {
        if (pointer_left == mid + 1) {      
            aux[k] = a[pointer_right];
            pointer_right++;
        } 
        else if (pointer_right == j + 1) {        
            aux[k] = a[pointer_left];
            pointer_left++;
        } 
        else if (a[pointer_left] < a[pointer_right]) {        
            aux[k] = a[pointer_left];
            pointer_left++;
        }
        else {        
            aux[k] = a[pointer_right];
            pointer_right++;
        }
    }

    for (k = i; k <= j; k++) {      
        a[k] = aux[k];
    }
}
class num{
    public:
    string sym;
    int fre;
};


int main() {
   int n,i,k,count,j;
   cin>>n;
    num s[n];
 
   for(i=0;i<n;i++){
       cin>>s[i].sym;
       s[i].fre=-1;
       
   }
  for(i=0;i<n;i++){
      count=1;
      for(j=i+1;j<n;j++){
          if(s[i].sym==s[j].sym){
              count++;
              s[j].fre=0;
          }
      }
      if(s[i].fre!=0){
          s[i].fre=count;
      }
  }

  int freq[n];
  for(i=0;i<n;i++){
      freq[i]=s[i].fre;
  }
  int aux[n];
  merge_sort(0,n-1,freq,aux);
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          if(freq[i]==s[j].fre){
              if(s[j].fre!=0){
                  for(k=0;k<s[j].fre;k++){
                      cout<<s[j].sym<<" ";
                  }
              }
              else{
                  continue;
              }
              cout<<"\n";
          }
      }
  }
  
   

    return 0;
}
