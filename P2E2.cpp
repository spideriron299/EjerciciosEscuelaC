#include <stdio.h>
 
void imprimir(int *Z);
int * datos(int *Z);
int d;
int main() {
    
    printf("Dame las dimensiones:\n" );
    scanf("%d", &d);
    
    int Z[d];
    
    datos(Z);
    imprimir(Z);
    
}
int *datos(int *Z){
 
    for(int i=1; i<=d; i++){
    printf("El elemento %d es: ", i);
    scanf("%d",(Z+i));
    }
    return Z;
}
 
void imprimir(int *Z){
    for(int i=1; i<=d; i++){
        printf("%d\n",*(Z+i));
}
    
}
