#include <stdio.h> // Librer�a central para programar en C
#include <stdlib.h> // Librer�a para la funci�n system("clear")
#include <unistd.h> // Librer�a para la funci�n sleep()

// Questionary es un juego, y un poco m�s

// Funci�n principal
int main()
{
    int comprobar=1; // Variable global para el ciclo while principal

    system("clear"); // Para limpiar la pantalla despues de cada interacci�n con el juego
    printf("\033[5;3;1;35m"); // C�digos para darle formato, colores y animaciones a lo mostrado en pantalla
    // Pantalla de inicio
    printf("\n\n\n\n\n\t\t\t     A BOLILLO'S PRODUCTION\n\n\n\n\t\t\t       POWERED BY CHRISPO\n\n\n\n\t\t\t\t �2020 LABBBBAS");
    printf("\n\n\n\n\t\t\t  PRESIONA ENTER PARA CONTINUAR...");
    printf("\033[0m"); // C�digos para restablecer el formato inicial, sino el resto del programa adopta el mismo formato declarado arriba
    getchar(); // Funci�n para darle una pausa al programa hasta que el usuario presione Enter

    while(comprobar==1)
    {
        // Variables locales
        int i=1,n=0,opcion; 
        char r;
        comprobar=0; // Redeclaramos nuestra variable global una vez entrando al ciclo central para que no se repita inmediatamente al terminar

        // Men�
        system("clear");
        printf("\033[3;1;34m");
        printf("\n\n\t\t\t    BIENVENID@ A QUESTIONARY");
        printf("\033[1;33m");
        printf("\n\n\n\t\t\t    �QU� TEMA QUIERES JUGAR?");
        printf("\033[1;31m");
        printf("\n\n\n\t\t\t     1. VIDEOJUEGOS     ??\n");
        printf("\n\t\t\t     2. M�SICA          ??\n");
        printf("\n\t\t\t     3. PEL�CULAS       ??\n");
        printf("\n\t\t\t     4. MATEM�TICAS     ??\n");
        printf("\n\t\t\t     5. CULTURA GENERAL ??\n");
        printf("\n\t\t\t     6. SALIR           ??\n");
        printf("\033[1;36m");
        printf("\n\n\t\t\t     SELECCIONA UNA OPCI�N: ");
        scanf("%d",&opcion);

        // Switch para administrar 5 secciones del juego
        switch (opcion)
        {   // 1. Videojuegos
            case 1: while(i<=5)
                    {
                        system("clear");
                        printf("\033[1;35m");
                        printf("\n\n\n\t\t\t\t   VIDEOJUEGOS\n\n\n\n");
                        // Apuntador de preguntas sobre videojuegos
                        char *videojuegos[] = {"\t\t �A QUI�N SE LE CONOCE COMO EL H�ROE DEL TIEMPO?", "\t\t    �C�MO SE LLAMA EL HERMANO DE MARIO BROS?", 
                        "\t\t\t    �QU� ES EL C�DIGO KONAMI?", "\t\t\t�CU�L JUEGO FUE LANZADO PRIMERO?", "\t\t     �CU�L CONSOLA DE VIDEOJUEGOS NO EXISTE?"};        
                        printf("%s\n", videojuegos[n]); // Utilizamos la variable n para recorrer todo nuestro apuntador si contestas bien
                        switch(n)
                        {   // Pregunta 1 Videojuegos
                            case 0: printf("\n\n\t\t\t\t A) ZELDA\n\n\t\t\t\t B) LINK\n\n\t\t\t\t C) KRATOS\n\n\t\t\t\t D) NATHAN DRAKE");
                                    // Su respectiva opci�n m�ltiple
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    // L�gica de respuesta correcta
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3); // Funci�n para pausar el programa 3 segundos y se reaunide autom�ticamente
                                    }
                                    // L�gica de respuestas incorrectas
                                    else if(r=='a' || r=='A' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t\tLA RESPUESTA CORRECTA ES: B) LINK\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    // L�gica de valor inv�lido
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 2 Videojuegos
                            case 1: printf("\n\n\t\t\t\tA) PEACH\n\n\t\t\t\tB) BOWSER\n\n\t\t\t\tC) LUIGI\n\n\t\t\t\tD) TOAD");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='a' || r=='A' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t\tLA RESPUESTA CORRECTA ES: C) LUIGI\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 3 Videojuegos
                            case 2: printf("\n\n\t\t\tA) ? ? ? ? ? ? ? ? A B START\n\n\t\t\tB) MANTENER PRESIONADO START Y SELECT");
                                    printf("\n\t\t\t   AL INICIO DEL JUEGO\n\n\t\t\tC) GOLPEAR LA CONSOLA\n\n\t\t\tD) C�DIGO FUENTE DE LOS VIDEOJUEGOS");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t     LA RESPUESTA CORRECTA ES: A) ? ? ? ? ? ? ? ? A B START\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 4 Videojuegos
                            case 3: printf("\n\n\t\t\t\tA) SONIC\n\n\t\t\t\tB) PAC-MAN\n\n\t\t\t\tC) PONG\n\n\t\t\t\tD) MARIO BROS");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='a' || r=='A' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t\tLA RESPUESTA CORRECTA ES: C) PONG\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 5 Videojuegos
                            case 4: printf("\n\n\t\t\t\tA) PLAYSTATION\n\n\t\t\t\tB) XBOX\n\n\t\t\t\tC) ATARI 2600\n\n\t\t\t\tD) KFCONSOLE");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t     LA RESPUESTA CORRECTA ES: D) KFCONSOLE\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                        }
                        n++; // El elemento de nuestro apuntador se aumentar� en 1 cada vuelta de ciclo para imprimir la siguiente pregunta
                    }
                break;
            // 2. M�sica
            case 2: while(i<=5)
                    {
                        system("clear");
                        printf("\033[1;31m");
                        printf("\n\n\n\t\t\t\t     M�SICA\n\n\n\n");
                        char *musica[] = {"       �CU�L ES EL �LBUM NO RECOPILATORIO M�S VENDIDO DE TODA LA HISTORIA?", "\t\t  �CU�L FUE EL ARTISTA M�S ESCUCHADO DEL 2020?", 
                        "\t     �CU�L ES LA CANCI�N CON M�S REPRODUCCIONES EN YOUTUBE?", "\t\t\t�QUI�N ES EL REY DEL ROCK & ROLL?", "\t\t\t �CU�L BANDA NO ES BRIT�NICA?"};
                        printf("%s\n", musica[n]);
                        switch(n)
                        {   // Pregunta 1 M�sica
                            case 0: printf("\n\n\t\t\tA) THE DARK SIDE OF THE MOON - PINK FLOYD\n\n\t\t\tB) BACK IN BLACK - AC/DC");
                                    printf("\n\n\t\t\tC) THRILLER - MICHAEL JACKSON\n\n\t\t\tD) THEIR GREATEST HITS - THE EAGLES");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='d' || r=='D' || r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t     LA RESPUESTA CORRECTA ES: C) THRILLER - MICHAEL JACKSON\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 2 M�sica
                            case 1: printf("\n\n\t\t\t\tA) BILLIE EILISH\n\n\t\t\t\tB) BAD BUNNY\n\n\t\t\t\tC) BTS\n\n\t\t\t\tD) THE WEEKND");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='d' || r=='D' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t     LA RESPUESTA CORRECTA ES: B) BAD BUNNY\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 3 M�sica
                            case 2: printf("\n\n\t\t\t\tA) BABY SHARK\n\n\t\t\t\tB) DESPACITO\n\n\t\t\t\tC) SHAPE OF YOU\n\n\t\t\t\tD) SEE YOU AGAIN");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t     LA RESPUESTA CORRECTA ES: A) BABY SHARK\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 4 M�sica
                            case 3: printf("\n\n\t\t\t\tA) MICHAEL JACKSON\n\n\t\t\t\tB) MICK JAGGER\n\n\t\t\t\tC) JIM MORRISON\n\n\t\t\t\tD) ELVIS PRESLEY");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t    LA RESPUESTA CORRECTA ES: D) ELVIS PRESLEY\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 5 M�sica
                            case 4: printf("\n\n\t\t\t\tA) THE BEATLES\n\n\t\t\t\tB) THE ROLLING STONES\n\n\t\t\t\tC) GUNS N' ROSES\n\n\t\t\t\tD) QUEEN");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='d' || r=='D' || r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t    LA RESPUESTA CORRECTA ES: C) GUNS N' ROSES\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                        }
                        n++;
                    }
                break;
            // Pel�culas
            case 3: while(i<=5)
                    {
                        system("clear");
                        printf("\033[1;33m");
                        printf("\n\n\n\t\t\t\t    PEL�CULAS\n\n\n\n");
                        char *peliculas[] = {"�QU� ACTOR INTERPRET� AL MAGO GANDALF EN LA TRILOG�A DE EL SE�OR DE LOS ANILLOS?", 
                        "\t   �POR CU�L PEL�CULA LEONARDO DICAPRIO GAN� SU PRIMER �SCAR?", "\t     �EN QU� PEL�CULA PODEMOS ENCONTRAR A MUFASA Y A SIMBA?",
                        "    �QU� ACTOR INTERPRETA A FREDDIE MERCURY EN LA PEL�CULA BOHEMIAN RHAPSODY?", "\t   �CU�L ES LA PELICULA M�S TAQUILLERA DE TODOS LOS TIEMPOS?"};
                        printf("%s\n", peliculas[n]);
                        switch(n)
                        {   // Pregunta 1 Pel�culas
                            case 0: printf("\n\n\t\t\t\tA) ALFRED HITCHCOCK\n\n\t\t\t\tB) TOM CRUISE\n\n\t\t\t\tC) ORLANDO BLOOM\n\n\t\t\t\tD) IAN MCKELLEN");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t    LA RESPUESTA CORRECTA ES: D) IAN MCKELLEN\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 2 Pel�culas
                            case 1: printf("\n\n\t\t\t\tA) THE REVENANT\n\n\t\t\t\tB) THE WOLF OF WALL STREET\n\n\t\t\t\tC) CATCH ME IF YOU CAN\n\n\t\t\t\tD) THE GREAT GATSBY");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t    LA RESPUESTA CORRECTA ES: A) THE REVENANT\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 3 Pel�culas
                            case 2: printf("\n\n\t\t\t\tA) THE LION KING\n\n\t\t\t\tB) ONWARD\n\n\t\t\t\tC) BAO\n\n\t\t\t\tD) INSIDE OUT");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t   LA RESPUESTA CORRECTA ES: A) THE LION KING\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 4 Pel�culas
                            case 3: printf("\n\n\t\t\t\tA) BEN HARDY\n\n\t\t\t\tB) RAMI MALEK\n\n\t\t\t\tC) TOM HANKS\n\n\t\t\t\tD) TOBEY MAGUIRE");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='d' || r=='D' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t     LA RESPUESTA CORRECTA ES: B) RAMI MALEK\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 5 Pel�culas
                            case 4: printf("\n\n\t\t\t\tA) AVATAR\n\n\t\t\t\tB) TITANIC\n\n\t\t\t\tC) AVENGERS: ENDGAME\n\n\t\t\t\td) STAR WARS: THE FORCE AWAKENS");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='d' || r=='D' || r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t  LA RESPUESTA CORRECTA ES: C) AVENGERS: ENDGAME\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                        }
                        n++;
                    }
                break;
            // Matem�ticas
            case 4: while(i<=5)
                    {
                        system("clear");
                        printf("\033[1;37m");
                        printf("\n\n\n\t\t\t\t   MATEM�TICAS\n\n\n\n");
                        char *matematicas[] = {"\t\t\t      �CU�NTO ES 8/2(2+2)?", "\t\t�CU�L SERIA UNA EXPRESI�N EQUIVALENTE PARA (a+b)�?",
                         "\t\t\t�C�MO SE LE CONOCE ESTA F�RMULA?\n\t\t\t      x = (-b � vb�-4ac)/2a", "\t       �CU�L ES LA EXPRESI�N PARA EL TEOREMA DE PIT�GORAS?"
                         , "\t\t�QUI�N ES CONSIDERADO COMO EL PADRE DEL C�LCULO?"};
                        printf("%s\n", matematicas[n]);
                        switch(n)
                        {
                            // Pregunta 1 Matem�ticas
                            case 0: printf("\n\n\t\t\t\t     A) 16\n\n\t\t\t\t     B) 1\n\n\t\t\t\t     C) 4\n\n\t\t\t\t     D) 8");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t\tLA RESPUESTA CORRECTA ES: A) 16\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 2 Matem�ticas
                            case 1: printf("\n\n\t\t\t\tA) a�+b�\n\n\t\t\t\tB) 2a+2b\n\n\t\t\t\tC) a�+2ab+b�\n\n\t\t\t\tD) a+ab+b");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='d' || r=='D' || r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t     LA RESPUESTA CORRECTA ES: C) a�+2ab+b�\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 3 Matem�ticas
                            case 2: printf("\n\n\t\t\tA) LA CHICHARRONERA\n\n\t\t\tB) F�RMULA DE LA ECUACI�N DE SEGUNDO GRADO\n\n\t\t\tC) A Y B SON CORRECTAS");
                                    printf("\n\n\t\t\tD) NINGUNA DE LAS ANTERIORES");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='d' || r=='D' || r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\tLA RESPUESTA CORRECTA ES: C) A Y B SON CORRECTAS\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 4 Matem�ticas
                            case 3: printf("\n\n\t\t\t\tA) c� = a� + b�\n\n\t\t\t\tB) c = a + b\n\n\t\t\t\tC) x = (-b � vb�-4ac)/2a\n\n\t\t\t\tD) AB� = BH * BC");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t   LA RESPUESTA CORRECTA ES: A) c� = a� + b�\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 5 Matem�ticas
                            case 4: printf("\n\n\t\t\t\t   A) EINSTEIN\n\n\t\t\t\t   B) NEWTON\n\n\t\t\t\t   C) BALDOR\n\n\t\t\t\t   D) GAUSS");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='d' || r=='D' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t       LA RESPUESTA CORRECTA ES: B) NEWTON\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                        }
                        n++;
                    }  
                break;
            // Cultura General
            case 5: while(i<=5)
                    {
                        system("clear");
                        printf("\033[1;36m");
                        printf("\n\n\n\t\t\t\t CULTURA GENERAL\n\n\n\n");
                        char *cultura_general[] = {"\t\t      �QUI�N ES EL CREADOR DEL LENGUAJE C?", "\t\t   �CU�NDO FINALIZ� LA SEGUNDA GUERRA MUNDIAL?", 
                        "\t\t     �CU�NTO DUR� LA GUERRA DE LOS 100 A�OS?", "\t\t\t�EN QU� A�O SE DESCUBRI� AM�RICA?", "\t\t\t     �QU� ES UN PALINDROMO?"};
                        printf("%s\n", cultura_general[n]);
                        switch(n)
                        {   // Pregunta 1 Cultura General
                            case 0: printf("\n\n\t\t\t\tA) DENNIS RITCHIE\n\n\t\t\t\tB) RICHARD STALLMAN\n\n\t\t\t\tC) ALAN TURING\n\n\t\t\t\tD) ALAN COOPER");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t   LA RESPUESTA CORRECTA ES: A) DENNIS RITCHIE\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 2 Cultura General
                            case 1: printf("\n\n\t\t\t\t    A) 1918\n\n\t\t\t\t    B) 1945\n\n\t\t\t\t    C) 1939\n\n\t\t\t\t    D) 1914");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='a' || r=='A' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t\tLA RESPUESTA CORRECTA ES: B) 1945\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 3 Cultura General
                            case 2: printf("\n\n\t\t\t\t  A) 107 A�OS\n\n\t\t\t\t  B) 106 A�OS\n\n\t\t\t\t  C) 99 A�OS\n\n\t\t\t\t  D) 116 A�OS");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='a' || r=='A' || r=='c' || r=='C' || r=='b' || r=='B')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t\t  LA RESPUESTA ES: D) 116 A�OS\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 4 Cultura General
                            case 3: printf("\n\n\t\t\t\t    A) 1482\n\n\t\t\t\t    B) 1492\n\n\t\t\t\t    C) 1484\n\n\t\t\t\t    D) 1494");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='a' || r=='A' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\n\n\t\t\tLA RESPUESTA CORRECTA ES: B) 1492\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            // Pregunta 5 Cultura General
                            case 4: printf("\n\n\t\t    A) UNA PALABRA QUE SE ESCRIBE DIFERENTE\n\t\t       PERO SIGNIFICA LO MISMO QUE OTRA PALABRA");
                                    printf("\n\n\t\t    B) UNA PALABRA QUE TIENE UN SIGNIFICADO\n\t\t       APUESTO A OTRA PALABRA\n\n\t\t    C) UNA PALABRA");
                                    printf(" QUE SE ESCRIBE Y SE LEE\n\t\t       IGUAL AL DERECHO Y AL REV�S\n\n\t\t    D) UN AVE EN PELIGRO DE EXTINCI�N\n");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    system("clear");
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t  �CORRECTO!??\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='a' || r=='A' || r=='b' || r=='B' || r=='d' || r=='D')
                                    {
                                        printf("\n\n\n\n\n\n\n\n\n\t\t\t\t  INCORRECTO??\n\n\t\t\t   LA RESPUESTA CORRECTA ES:\n\n       ");
                                        printf("C) UNA PALABRA QUE SE ESCRIBE Y SE LEE IGUAL AL DERECHO Y AL REV�S\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                        }
                        n++;
                    }
                break;
            case 6: comprobar=2; // Si queremos salir, declaramos la variable global para que realice una funci�n de abajo
                break;
            case 25: comprobar=25; // Para el Easter Egg del juego
                break;
            default: i=20; // Para imprimir valor inv�lido
                break;
        }

        system("clear");
        // L�gica para cuando pierdes
        if(i==10)
        {
            printf("\033[1;36m");
            printf("\n\n\n\n\n\n\n\n\t\t\t\t   PERDISTE??\n\n\n\n\n\n");
            printf("\t\t    �QUIERES INTENTARLO DE NUEVO? S�(1) NO(2) ");
            scanf("%i",&comprobar);
        }
        // L�gica para cuando contestas algo diferente a lo que te dice el juego
        else if(i==20)
        {
            printf("\033[1;31m");
            printf("\n\n\n\n\n\n\n\n\t\t\t\tOPCI�N INV�LIDA?\n\n\n\n\n\n");
            printf("\t\t    �QUIERES INTENTARLO DE NUEVO? S�(1) NO(2) ");
            scanf("%i",&comprobar);
        }
        // L�gica para cuando ganas
        else if(i>5)
        {
            printf("\033[1;34m");
            printf("\n\n\n\n\n\t\t\t\t �FELICIDADES!\n\n\n\n\n\n\t\t\t\t   GANASTE??");
            printf("\n\n\n\n\n\n\t\t     �QUIERES JUEGAR DE NUEVO? S�(1) NO(2) ");
            scanf("%i",&comprobar);
        }
        // En los 3 casos, te deja volver a jugar, o no 
    }

    system("clear");
    // L�gica para cuando quieres salir del juego
    if(comprobar==2)
    {
        printf("\033[1;35m");
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t VUELVA PRONTO??\n");
        sleep(3);
        system("clear");
    }
    else if(comprobar==0){}
    // L�gica para el Easter Egg
    else if(comprobar==25)
    {
        int x,a,w,j,k,espacios=9; // Variables locales
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t  �C�mo demonios llegaste aqu�?\n");
        sleep(3);
        system("clear");
        printf("\033[3;1;37m");
        printf("\n\n\n\n\n\n\n\n\n\t\t\t       LOGRO DESBLOQUEADO\n\n\n\t\t\t\t JINGLE HELLS??\n"); // Logro
        sleep(3);
        char *navidad[]={"F","E","L","I","Z  ","N","A","V","I","D","A","D  ","<","3"}; // Utilizamos de nuevo un puntero para la frase

        system("clear");
        printf("\n\n\n\t\t\t");
        // Ciclo para imprimir la frase con diferentes colores
        for(w=0;w<=13;w++)
        {
            if(w%2==0)
            {
                printf("\033[5;1;35m");
                printf("%s ",navidad[w]);
            }
            else
            {
                printf("\033[1;37m");
                printf("%s ",navidad[w]);
            }
        }
        printf("\n\n\n");

        printf("\033[1;33m");
        printf("\t\t\t\t       #\n");

        // Ciclo para imprimir el �rbol de navidad y las esferas de diferentes colores
        for(a=1;a<=10;a++)
        {
            printf("\t\t\t      ");
            for(k=1;k<=espacios;k++)
            {
                printf(" ");
            }
            espacios--;
            for(j=1;j<=(a*2)-1;j++)
            {
                if(j%2==0)
                {
                printf("\033[1;31m");
                printf("*");
                }
                else if(j%3==0){
                printf("\033[1;34m");
                printf("*");
                }
                else
                {
                    printf("\033[1;32m");
                    printf("*");
                }
            }
                printf("\n");
        }   // L�gica para el tronco del �rbol
            for(x=1;x<=3;x++)
            {
                printf("\033[1;30m");
                printf("\t\t\t\t      ***\n");
            }
                    
            printf("\n\n");
            printf("\033[0m");
    }
    // L�gica para cuando ingresas una opcion incorrecta cuando te pregunta si quieres volver a intentarlo
    else
    {
        system("clear");
        printf("\033[1;31m");
        printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\tOPCI�N INV�LIDA??\n");
        sleep(3);
        system("clear");
    }

	return 0;
}
