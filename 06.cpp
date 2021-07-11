// Labastida Vázquez Fernando
// Práctica 05

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 5

int stack[MAXSIZE];
int top = -1;
int myQueue[MAXSIZE];
int front = 0;
int rear = -1;
int itemCount = 0;

int peekSt();
void pop();
void push(int data);
int isemptySt();
int isfullSt();
int peekC0();
void insert(int data);
int removeElem();
bool isEmptyCo();
bool isFullCo();

int main()
{
   setlocale(LC_ALL, "");
   int data;
   int i;
    int a = 1, b = 0, k;

 
     for(int w = 0; i < 10; i++){
    push(b);
      insert(b);
       push(a);
      insert(a);
    b = b + a;
    a = a + b;
  }
      
      

   printf("\nEl contenido del stack es: [");
   while (top > 0)
   {
      peekSt();
      printf("%d, ", stack[top]);
      pop();
   }
   peekSt();
   printf("%d]\n", stack[top]);
   pop();
   // printf("(El stack quedó vacío.)\n");

   printf("\nEl contenido de la cola  es: [");
   while (front < rear)
   {
      peekC0();
      printf("%d, ", myQueue[front]);
      removeElem();
   }
   peekC0();
   printf("%d]\n", myQueue[front]);
   removeElem();
   // printf("(La cola quedó vacía.)\n");
   front = 0;
   rear = -1;
   itemCount = 0;
}
int peekSt()
{
   if (!isemptySt())
   {
      return stack[top];
   }
   else
   {
      printf("El stack está vacío, no se puede hacer peek\n");
      return -1;
   }
}

void push(int data)
{
   if (!isfullSt())
   {
      stack[++top] = data;
   }
   else
   {
      printf("ERROR stack está lleno, no se puede hacer push\n");
   }
}

int isfullSt()
{
   if (top == MAXSIZE - 1)
   {
      return true;
   }
   else
   {
      return false;
   }
}

int isemptySt()
{
   if (top == -1)
   {
      return true;
   }
   else
   {
      return false;
   }
}

void pop()
{
   if (!isemptySt())
   {
      top--;
   }
   else
   {
      printf("El stack está vacío, no se puede hacer pop\n");
   }
}

int peekC0()
{
   if (isEmptyCo())
   {
      printf("La cola está vacía, no se puede hacer peek\n");
      return -1;
   }
   return myQueue[front];
}

int removeElem()
{
   if (isEmptyCo())
   {
      printf("No se puede remover, cola vacía\n");
      rear = -1;
      return -1;
   }
   else
   {
      int data = myQueue[front++];
      itemCount--;
      return data;
   }
}

void insert(int data)
{
   if (rear == MAXSIZE - 1)
   {
      rear = -1;
   }
   if (isFullCo())
   {
      printf("No se puede insertar, cola llena\n");
      rear = -1;
   }
   else
   {
      myQueue[++rear] = data;
      itemCount++;
   }
}

bool isFullCo()
{
   return itemCount == MAXSIZE;
}

bool isEmptyCo()
{
   return itemCount == 0;
}
