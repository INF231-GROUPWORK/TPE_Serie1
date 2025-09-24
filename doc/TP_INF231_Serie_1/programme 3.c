#include<stdio.h>

int main(){
    int t[100], n, i, val;

    printf("Enter the size of the array: ");
    do{
        scanf("%d",&n);
    }while(n<=0 || n>100);

    for(i=0; i<n; i++){
        printf("N°%d: ",i+1);
        scanf("%d",&t[i]);
    }

    printf("Value to find: ");
    scanf("%d",&val);

    for(i=0; i<n; i++){
        if (t[i] == val){
            printf("The value is at position %d\n",i+1);
            return 0;
        }
    }

    printf("Value not found\n");

    return 0;

}

