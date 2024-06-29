#include <stdio.h>
int main(){
int r1,c1,count=0;
printf("enter the number of rows for  matrix :");
scanf("%d",&r1);
printf("enter the number of coloumns for matrix :");
scanf("%d",&c1);
int m1[r1][c1],m2[r1][c1];
        printf("Enter first matrix elements \n");    
        for(int i=0;i<r1;i++)    
        {    
            for(int j=0;j<c1;j++)    
            {    
                scanf("%d",&m1[i][j]);    
            }    
        }    
          
            

        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                m2[c1][r1]=m1[r1][c1];
            }
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                if(m1[r1][c1]!=m2[c1][r1]){
                    count++;
                    break;

                }
            }
        }
        if(count==0){
            printf("the Matrix is symmetric");

        }
        else{
            printf("the Matrix is not symmetric");
        }

        return 0;

}