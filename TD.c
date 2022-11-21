#include <stdio.h>
int ex(){
    int n;
    printf("Taille des elements de la figure:");
    scanf( "%d", &n );
    printf("%d\n", n);
    for(int i=0; i<n; i++){
        printf("-");}
    for(int j=0; j<n; j++){
        printf("x");}
    for(int k=0; k<n; k++){           
        printf("\n");}
}