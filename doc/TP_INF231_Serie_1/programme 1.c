#include <stdio.h>

int main() {
    int n[20][20], m[20][20], c[20][20], p;
	printf("enter the size of the matrix: ");
	
	do{
	   scanf("%d",&p);
	   }while(p>=20 && p<0);
    
    printf("Enter elements of the first matrix:\n");
    for (int i=0;i<p;i++) {
        for (int j=0;j<p;j++) {
            printf("n[%d][%d] = ",i,j);
            scanf("%d",&n[i][j]);
        }
    }

    printf("\nEnter elements of the second matrix:\n");
    for (int i=0;i<p;i++) {
        for (int j=0;j<p;j++) {
            printf("m[%d][%d] = ",i,j);
            scanf("%d",&m[i][j]);
        }
    }

    for (int i=0;i<p;i++) {
        for (int j=0;j<p;j++) {
            c[i][j] = 0;
            for (int k=0;k<p;k++) {
                c[i][j] += n[i][k] * m[k][j];
            }
        }
    }

    printf("\nProduct of the two matrices is:\n");
    for (int i=0;i<p;i++) {
        for (int j=0;j<p;j++) {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

