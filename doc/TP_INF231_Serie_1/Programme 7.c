#include<stdio.h>
#define MAX_NUM 10
    int main(){
        int i,n,temp;
        int T[MAX_NUM];
            printf("Enter any integers:\n");
            scanf("%d",&n);
                for(i=0;i< MAX_NUM;i++){
                    scanf("%d",&T[i]);
                }
                    for(i=0;i< MAX_NUM/2;i++){
                        temp = T[i];
                        T[i] = T[MAX_NUM-1-i];
                        T[MAX_NUM-1-i] = temp;
                    }
                        printf("The inverted elements : ");
                        for(i=0;i< MAX_NUM;i++){
                        printf("%d",T[i]);
                        }
                        return 0;
    }