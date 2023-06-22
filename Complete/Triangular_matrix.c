                          /*Solution 15*/

#include<stdio.h>
int main()
{
    printf("Enter the no of row and column in matrix 1\n");
    int m,n;
    scanf("%d%d",&m,&n);
     //checking compatibility
    if(m!=n)
    {
        printf("The matrix is not sqaure matric\n\n");
        return 0;
    }
    int a[m][n];
    printf("Enter the elements for matrix 1\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    }
    int flag1=1;
    int flag2=1;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<i && a[i][j]!=0)
            flag1=0;
            if(i<j && a[i][j]!=0)
            flag2=0;
        }
    }

    if(flag1==1 && flag2==0)
    printf("The matrix is upper triangular matrix\n");
    else if(flag2==1 && flag1==0)
    printf("The matrix is lower triangular matrix\n");
    else if(flag1==1 && flag2==1)
    printf("The matrix is diagonal matrix\n");
    else
    printf("The matrix is regular matrix\n");
    return 0;
}
