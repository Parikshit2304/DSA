/*#include <stdio.h>

int main() {

  int i, n;
  int t1 = 0, t2 = 1;
  int nextTerm = t1 + t2;

  
  printf("Enter the number of terms: ");
  scanf("%d", &n);

  
  printf("Fibonacci Series: %d, %d, ", t1, t2);

  
  for (i = 3; i <= n; ++i) {
    printf("%d, ", nextTerm);
    t1 = t2;
    t2 = nextTerm;
    nextTerm = t1 + t2;
  }

  return 0;
}
*/

/*#include <stdio.h>
int main(){
int i,j,a,b,r1,c1,r2,c2;
printf("enter the number of rows for 1st matrix :");
scanf("%d",&r1);
printf("enter the number of coloumns for 1st matrix :");
scanf("%d",&c1);
printf("enter the number of rows for 2nd matrix :");
scanf("%d",&r2);
printf("enter the number of coloumns for 2nd matrix :");
scanf("%d",&c2);
int arr1[r1][c1], arr2[r2][c2], mul[r1][c2];
if(c1!=r2){
  printf("matrix multiplication not possible");
}
else
{
  printf("enter the elements of matrix 1\n");
  for (i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++){
      scanf("%d",&arr1[i][j]);
    }
  }
  printf("enter the elements of matrix 2\n");
  for (i=0;i<r2;i++){
    for(j=0;j<c2;j++){
      scanf("%d",&arr2[i][j]);
    }
  }
  
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c2;j++)    
            {    
                mul[i][j]=0; 
 
                // Multiplying i’th row with j’th column
                for(int k=0;k<c1;k++)    
                {    
                    mul[i][j]+=m1[i][k]*m2[k][j];    
                } 
            }    
        }    
        printf("Multiplied matrix\n");     
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c2;j++)    
            {    
                printf("%d\t",mul[i][j]);    
            }    
            printf("\n");    
        } 
    }
    return 0; 
}*/
#include<stdio.h>

int main(){
int r,c;
    
    printf("Enter the Number of rows:");
    scanf("%d",&r);
    printf("Enter the Number of coloumns:");
    scanf("%d",&c);
    int arr1[r][c];
    for(int i=0;i<r;i++){
        
        for(int j=0;j<c;j++){
            printf("enter the elements:");
            scanf("%d",&arr1[i][j]);
            
            
        }
    }
    for(int i=0;i<r;i++){
        printf("\n");
        for(int j=0;j<c;j++){
            
            printf("%d\t",arr1[i][j]);
            
            
        }
    }
    return 0;
}