// write a program to print the following star pattern for a generalized value of n 
#include<stdio.h>

int main(){
    int n = 6;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*n; j++)
        {
            if (j>=n-1-i && j<=n-1+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
            
        }
            printf("\n");
        
    }
    
}