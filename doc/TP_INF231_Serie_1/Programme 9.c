#include<stdio.h>
int main (){
    int i,j,m,n;
    printf("enter the dimension of the vector :  ");
        scanf("%d",&n);
            printf("enter the number of columns of the matrix :  ");
            scanf("%d",&m);
            int vec[n],mat[n][m],X[m];
                    printf("enter the vector's elements : ");
                        for(i=1;i<=n;i++){
                            scanf("%d",&vec[i]);
                        }
                        printf("enter the elements of the matrix (%d rows* %d columns) : \n",n,m);
                                for(i=0;i<n;i++){
                                    for(j=0;j<m;j++){
                                        scanf("%d",&mat[i][j]);
                                    }
                                }
                                for(j=0;j<m;j++){
                                        X[j] = 0;
                                        for(i=0;i<n;i++){
                                            X[j] += vec[i]*mat[i][j];
                                    }
                                        }
                                        printf("Result : \n");
                                                for(j=0;j<m;j++){
                                                    printf("%d",X[j]);
                                                }
                            return 0;
}