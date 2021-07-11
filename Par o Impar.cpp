#include <stdio.h>

int main(){
    int a;
    int npar=0;
    int nimpar=0;
    int array1[npar];
    int array2[nimpar];
    printf("\n Cual es la longitud del arreglo?");
    scanf("%i", &a );
    int array3[a];
    
    for(int i=1; i<=a; i=i+1){
        
        printf("\n Dame el valor de [%i]", i);
        scanf("%i", &array3[i]);
        
    if(array3[i]%2==0){
        
        npar++;
    }
    else{   
        nimpar++;
    }       
    }
    for(int i=1; i<a; i=i+1){
           if(array3[i] % 2 == 0){//si es par
               for(int e=0; e<npar; e++){
                   array1[e]=array3[i];
               }   
           }
           else{
                   for(int d=0; d<=nimpar; d++){
                       array2[d]=array3[i];
           }   
       }
       }
       
       printf("\nlos numero pares son:\n");
       for(int i=0; i<npar; i++){
           printf("\n %i\n ", array1[i]);
       }
        return 0;
}

