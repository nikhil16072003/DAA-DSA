/*

Pattern  


4 4 4 4 4 4 4 
4 3 3 3 3 3 4 
4 3 2 2 2 3 4 
4 3 2 1 2 3 4 
4 3 2 2 2 3 4 
4 3 3 3 3 3 4 
4 4 4 4 4 4 4 
  */


#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int len = n*2 - 1;
    int i,j;
    int a[len][len];
    int start=0;
    int end=len-1;
    while(n!=0){
         for( i=start;i<=end;i++){
             for(j=start ;j<=end;j++){
                  if(i==start ||i==end||j==start ||j==end){
                      a[i][j]=n;
                    }
           
              }
       
          }
          ++start;
          --end;
          --n;
        
    }
    for(i=0;i<len;i++){
        for(j=0;j<len;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
   
    return 0;
}
