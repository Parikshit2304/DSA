#include<stdio.h>    
int main()
{
    int r1,c1,i,j;
 
    printf("Enter number of rows for  Matrix:\n");    
    scanf("%d",&r1);    
    printf("Enter number of columns for Matrix:\n");     
    scanf("%d",&c1); 
    int arradd[r1][c1];
    
    
    
        int m1[r1][c1],m2[r1][c1];
        printf("Enter first matrix elements \n");    
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c1;j++)    
            {    
                scanf("%d",&m1[i][j]);    
            }    
        }    
        printf("Enter Second matrix elements\n");    
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c1;j++)    
            {    
                scanf("%d",&m2[i][j]);    
            }    
        }   
        
        for(int i=0; i<r1;i++){
            
            for(int j=0;j<c1;j++){
                
                
                arradd[i][j]=m1[i][j]+m2[i][j];
            }

        }
    printf("the matrix is :");
    for (int i=0;i<r1;i++){
        printf("\n");
        for(int j=0;j<c1;j++){
            printf("%d\t",arradd[i][j]);
        }
    }
    
    
}