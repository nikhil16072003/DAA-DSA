#include <cstring>
#include <iostream>
#include<algorithm>
using namespace std;
void lcsAlgo(char *S1, char *S2, int m, int n) {
    int i,j;
 int lcs_mat[m+1][n+1];
 cout<<"The Lcs matrix is;\n";
 for( i=0;i<=m;i++){
     for(j=0;j<=n;j++){
         if(i==0 || j==0){
             lcs_mat[i][j]=0;
         }
         else if(S1[i-1]==S2[j-1]){
             lcs_mat[i][j]=lcs_mat[i-1][j-1]+1;
         }
         else{
             lcs_mat[i][j]=max(lcs_mat[i-1][j],lcs_mat[i][j-1]);
         }
     }
 }
 for(i=0;i<=m;i++){
     for(j=0;j<=n;j++){
         cout<<lcs_mat[i][j]<<" ";
     }
     cout<<endl;
 }
 int index=lcs_mat[m][n];
 char lcs[index+1];
 i=m;
 j=n;
 lcs[index]='\0';
 while(i>0 && j>0){
     if(S1[i-1]==S2[j-1]){
         lcs[index-1]=S1[i-1];
         i--;
         j--;
         index--;
         
     }
     else if(lcs_mat[i-1][j]>lcs_mat[i][j-1]){
         i--;
     }
     else{
         j--;
     }
 }
 cout<<lcs;
}

int main() {
  char S1[] = "ACADB";
  char S2[] = "CBDA";
  int m = strlen(S1);
  int n = strlen(S2);

  lcsAlgo(S1, S2, m, n);
}
