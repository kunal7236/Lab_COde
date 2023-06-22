                             /*Solution 14*/

#include<stdio.h>
int main()
{
    printf("Enter the no of row and column in matrix 1\n");
    int m,n;
    scanf("%d%d",&m,&n);
    printf("Enter the value of row and column in matrix 2\n");
    int p,q;
    scanf("%d%d",&p,&q);
    //checking compatibility
    if(n!=p)
    {
        printf("The matrix are in compatible for multiplication\n\n");
        return 0;
    }
    int a[m][n];
    int b[p][q];
    printf("Enter the elements for matrix 1\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    printf("Enter the elements for matrix 2\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        scanf("%d",&b[i][j]);
    }
    //Displaying the matrix 1
    printf("The matrix 1 looks like:\n\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
    }
     //Displaying the matrix 2
    printf("The matrix 2 looks like:\n\n");
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        printf("%d ",b[i][j]);
        printf("\n");
    }
    int c[m][q];
    //Multiplying the two matrices
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            int s=0;
            for(int k=0;k<p;k++)
            s+=a[i][k]*b[k][j];
            c[i][j]=s;
        }
    }
    //Displaying the product matrix
    printf("The product looks like:\n\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        printf("%d ",c[i][j]);
        printf("\n");
    }
    return 0;
}
