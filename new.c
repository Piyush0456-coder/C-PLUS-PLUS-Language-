//,#include <stdio.h>
//int main ()
//{
//    int arr[5][5];
//    int i,j;
//    for (i=0; i<5; i++)
//    {
//        for (j=0; j<5; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    printf("Hello");
//    return 0;
//}
#include <stdio.h>
int main ()
{
    int arr[5][3];
    int i,j;
    for (i=0; i<5; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("enter marks of students:-");
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("%d",arr[i][j]);
    return 0;
}
