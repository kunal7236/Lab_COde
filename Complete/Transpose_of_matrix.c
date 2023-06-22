                    /*Solution 16*/

#include<stdio.h>
int main()
{
    printf("Enter the no of row and column in matrix \n");
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter the elements for matrix \n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    //Displaying the matrix 
    printf("The matrix looks initially like:\n\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
     
    //Displaying the transpose matrix
    printf("The transpose of matrix looks like:\n\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        printf("%d ",a[j][i]);
        printf("\n");
    }
    return 0;
}
