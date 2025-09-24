#include<stdio.h>
#define Taille_Max 1000
        int Est_trié(int T[], int n){
            for(int i = 0; i < n; i++){
                if(T[i] < T[i+1]){
                    return 1;
                }
                return 0;
            }
        }
        int main(){
            int T[Taille_Max],n;
            printf("Entrer la taille du tableau :\n");
            scanf("%d",&n);
            printf("Entrer les valeurs du tableau :\n");
                for(int i = 0; i < n; i++){
                    printf("Val %d : ",i);
                    scanf("%d",&T[i]);
                }
                if(Est_trié(T,n)){
                    printf("Le tableau est trié :\n");
                }else{
                    printf("Le tableau n'est pas trié :\n");
                }
                return 0;
    }