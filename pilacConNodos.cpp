#include<stdio.h>
#include<stdlib.h>
typedef struct nodo //definir un tipo de dato que es una estructura  llamada nodo
{
 int dato;//lo que voy a usar en la pila
 struct nodo *sig;//apuntador de tipo nodo
}tipoNodo;//lo rebautizo como tipoNodo
typedef tipoNodo *apNdo;
typedef tipoNodo *pila;
void Push(pila *p,int d);
int Pop(pila *c);
void imprimir(pila *p);

int main(){
    int dat,op,rep;
    pila Pila=NULL;// variable tipo pila
    do{
    printf("Que deseas realizar: ");
    printf("1.Ingresar Datos");
    printf("2. eliminar datos");
    scanf("%d",&op);
    switch (op)
    {
    case 1:
    
    printf("Que dato deseas ingresar");
    scanf("%d",&dat);
    Push(&Pila,dat);//dirección de pila
    imprimir(&Pila);
        break;
    case 2:
    printf("Se el elimino el valor %d",Pop(&Pila));
    imprimir(&Pila);
    break;
    default:
        break;
    }
    printf("Deseas imprimir otra operación");
    printf("1.SI");
    printf("2.No");
    scanf("%d",&rep);
    }while(rep==1);
    system("pause");
}
void Push(pila *p,int d){//CREAR un nuevo nodo es la casilla es la casilla,aqui crece dinamcamente
apNdo nuevo;//todo lo que declare como apNodo va aser un apuntador
//es una estructura nueva por lo tanto es un apuntador  que apunta a una estructura Tipo Nodo
nuevo=(apNdo)malloc(sizeof(tipoNodo));//declarando una variable que se llama nuevo
nuevo->dato=d; //el elemento dato en la estructura va a ser el parametro de d
nuevo->sig=*p;//esta reservando el siguiente espacio para el nuevo dato
*p=nuevo;//segun yo es el primer elemento de la pila

}
int Pop(pila *c){
    apNdo nodo;//se crea una nueva estructura no importa que se llame nodo es local
    int v;//variable de retorno
    nodo=*c;//nodo va a puntar al primer elemnto de lapila
    if(!nodo)//no hay nada en la pila
    return 0;
    *c=nodo->sig;
    v=nodo->dato;
    free(nodo);
    return v;
}
void imprimir(pila *p){
apNdo nodo;
while(nodo->sig!=NULL){//el proceso se va a repetir hasta que nodo sig sea diferente de NULL
nodo=*p;//nodo es una estructura que guaradara la estructura de p
*p=nodo->sig;//el apuntador p apuntara a la siguiente pila
printf("%d",nodo->dato);//el nodo guaradara el dato
}
}


