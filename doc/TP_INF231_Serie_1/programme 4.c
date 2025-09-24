
#include<stdio.h>
int main(){
    
    int a,b ,res = 0;
        printf("Entrer les deux entier a et b");
        scanf("%d %d",&a ,&b);

        for (int i = 0; i < b; i++)
        {
        res += a;
        }
        printf("%d :",res);
    }
