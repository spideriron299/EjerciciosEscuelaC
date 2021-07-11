#include <dos.h>
#include <conio.h>
//Este programa muestra el numero del color
//Elaborado por DBA
main(){
 int c;
 textmode(C80);
 textbackground(WHITE);
 clrscr();
 for (c=0; c<20; c++){
 textcolor(c);
 textbackground(c+1);
 cprintf (" Color numero %d \n", c);
 delay(500);
 }
 cprintf ("Programa elaborado por DBA");

 getch();
}
