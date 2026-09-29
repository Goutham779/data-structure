#include <stdio.h>

int main() {
    int a[10][10], b[10][10], sum[10][10];
    int r, c, i, j,ch,k;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    printf("1.addition.2.substraction,3.multiplication,4.transpose");
    scanf("%d",&ch);

    if(ch==1 || ch==2) {
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++)
                printf("%d ", ch==1 ? a[i][j]+b[i][j] : a[i][j]-b[i][j]);
            printf("\n");
        }
    }
    else if(ch==3) {
        for(i=0;i<r;i++) {
            for(j=0;j<c;j++) {
                int s=0;
                for(k=0;k<c;k++)
                    s += a[i][k]*b[k][j];
                printf("%d ",s);
            }
            printf("\n");
        }
    }

    return 0;
}