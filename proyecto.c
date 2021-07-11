#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    int opcion,comprobar=1,j,k,z,espacios=9;
    char r;

    system("clear");
    printf("\033[5;1;35m");
    printf("\n\n\n\n\n\t\t\t     A BOLILLO'S PRODUCTION\n\n\n\n\t\t\t       POWERED BY CHRISPO\n\n\n\n\t\t\t\t ©2020 LABBBBAS");
    printf("\n\n\n\n\t\t\t  PRESIONA ENTER PARA CONTINUAR...");
    printf("\033[0m");
    getchar();

    while(comprobar==1)
    {
        int i=1,n=0;
        comprobar=0;

        system("clear");
        printf("\033[1;34m");
        printf("\n\n\t\t\t    BIENVENID@ A QUESTIONARY");
        printf("\033[1;33m");
        printf("\n\n\n\t\t\t    ¿QUÉ TEMA QUIERES JUGAR?");
        printf("\033[1;31m");
        printf("\n\n\n\t\t\t     1. VIDEOJUEGOS     👾\n");
        printf("\n\t\t\t     2. MÚSICA          🎼\n");
        printf("\n\t\t\t     3. PELÍCULAS       🎬\n");
        printf("\n\t\t\t     4. MATEMÁTICAS     🧮\n");
        printf("\n\t\t\t     5. CULTURA GENERAL 🤔\n");
        printf("\n\t\t\t     6. SALIR           🚪\n");
        printf("\033[1;36m");
        printf("\n\n\t\t\t     SELECCIONA UNA OPCIÓN: ");
        scanf("%d",&opcion);
        system("clear");

        switch (opcion)
        {
            case 1: printf("\n");
                    while(i<=5)
                    {
                        system("clear");
                        printf("\033[1;32m");
                        printf("\n\n\n\t\t\t\t 1.VIDEOJUEGOS\n\n\n\n");
                        char *videojuegos[] = {"\t\t¿A QUIÉN SE LE CONOCE COMO EL HÉROE DEL TIEMPO?", "\t\t   ¿CÓMO SE LLAMA EL HERMANO DE MARIO BROS?", "\t\t\t  ¿QUÉ ES EL CÓDIGO KONAMI?", "\t\t      ¿CUÁL JUEGO FUE LANZADO PRIMERO?", "\t\t    ¿CUÁL CONSOLA DE VIDEOJUEGOS NO EXISTE?"};        
                        printf("%s\n", videojuegos[n]);
                        switch(n)
                        {
                            case 0: printf("\n\n\t\t\t\t A) ZELDA\n\n\t\t\t\t B) LINK\n\n\t\t\t\t C) KRATOS\n\n\t\t\t\t D) NATHAN DRAKE");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😀\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='a' || r=='A' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\t\t\t\tINCORRECTO 💩\n\n\t\t      LA RESPUESTA CORRECTA ES: B) LINK\n\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 1: printf("\n\t\t\t\tA) PEACH\n\t\t\t\tB) BOWSER\n\t\t\t\tC) LUIGI\n\t\t\t\tD) TOAD\n\n");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!👌\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='a' || r=='A' || r=='d' || r=='D')
                                    {
                                        printf("\n\t\t\t\tINCORRECTO 😵\n\n\t\t      LA RESPUESTA CORRECTA ES: C) LUIGI\n\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 2: printf("\nA) ▲ ▲ ▼ ▼ ◄ ► ◄ ► A B START\nB) MANTENER PRESIONADO START Y SELECT AL INICIO DEL JUEGO\nC) GOLPEAR LA CONSOLA\nD) CÓDIGO FUENTE DE LOS VIDEOJUEGOS\n\n");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😛\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\n\t\t\t\tINCORRECTO 😢\n\n\t      LA RESPUESTA CORRECTA ES: A) ▲ ▲ ▼ ▼ ◄ ► ◄ ► A B START\n\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 3: printf("\nA) SONIC\nB) PAC-MAN\nC) PONG\nD) MARIO BROS\n\n");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!👍\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='a' || r=='A' || r=='d' || r=='D')
                                    {
                                        printf("\n\t\t\t\tINCORRECTO 😬\n\n\t\t      LA RESPUESTA CORRECTA ES: C) PONG\n\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 4: printf("\nA) PLAYSTATION\nB) XBOX\nC) ATARI 2600\nD) KFCONSOLE\n\n");
                                    printf("\n\n\n\n\t\t\t\tELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='d' || r=='D')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!🥵\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\n\t\t\t\tINCORRECTO 🙄\n\n\t\t    LA RESPUESTA CORRECTA ES: D) KFCONSOLE\n\n");
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
            case 2: printf("\n");
                    while(i<=5)
                    {
                        system("clear");
                        printf("\033[1;32m");
                        printf("\n\t\t\t\t2. MÚSICA\n\n");
                        char *musica[] = {"¿CUÁL ES EL ÁLBUM NO RECOPILATORIO MÁS VENDIDO DE TODA LA HISTORIA?", "¿CUÁL FUE EL ARTISTA MÁS ESCUCHADO DEL 2020?", "¿CUÁL ES LA CANCIÓN CON MÁS REPRODUCCIONES EN YOUTUBE?", "¿QUIÉN ES EL REY DEL ROCK & ROLL?", "¿CUÁL BANDA NO ES BRITÁNICA?"};
                        printf("%s\n", musica[n]);
                        switch(n)
                        {
                            case 0: printf("A) THE DARK SIDE OF THE MOON - PINK FLOYD\nB) BACK IN BLACK - AC/DC\nC) THRILLER - MICHAEL JACKSON\nD) THEIR GREATEST HITS - THE EAGLES\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😁\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='d' || r=='D' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 😔\nLA RESPUESTA CORRECTA ES: C) THRILLER - MICHAEL JACKSON\n\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 1: printf("A) BILLIE EILISH\nB) BAD BUNNY\nC) BTS\nD) THE WEEKND\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😎\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='d' || r=='D' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 😟\nLA RESPUESTA CORRECTA ES: B) BAD BUNNY\n\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 2: printf("A) BABY SHARK\nB) DESPACITO\nC) SHAPE OF YOU\nD) SEE YOU AGAIN\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😱\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\nINCORRECTO 😶\nLA RESPUESTA CORRECTA ES: A) BABY SHARK\n\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 3: printf("A) MICHAEL JACKSON\nB) MICK JAGGER\nC) JIM MORRISON\nD) ELVIS PRESLEY\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='d' || r=='D')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😉\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 😐\nLA RESPUESTA CORRECTA ES: D) ELVIS PRESLEY\n\n");
                                        i=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 4: printf("A) THE BEATLES\nB) THE ROLLING STONES\nC) GUNS N' ROSES\nD) QUEEN\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!🤗\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='d' || r=='D' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 🤐\nLA RESPUESTA CORRECTA ES: C) GUNS N' ROSES\n\n");
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
            case 3: printf("\n");
                    while(i<=5)
                    {
                        system("clear");
                        printf("\033[1;32m");
                        printf("\n\t\t\t\t3. PELÍCULAS\n\n");
                        char *peliculas[] = {"¿QUÉ ACTOR INTERPRETÓ AL MAGO GANDALF EN LA TRILOGÍA DE EL SEÑOR DE LOS ANILLOS?", "¿POR CUÁL PELÍCULA LEONARDO DICAPRIO GANÓ SU PRIMER ÓSCAR?", "¿EN QUÉ PELÍCULA PODEMOS ENCONTRAR A MUFASA Y A SIMBA?", "¿QUÉ ACTOR INTERPRETA A FREDDIE MERCURY EN LA PELÍCULA BOHEMIAN RHAPSODY?", "¿CUÁL ES LA PELICULA MÁS TAQUILLERA DE TODOS LOS TIEMPOS?"};
                        printf("%s\n", peliculas[n]);
                        switch(n)
                        {
                            case 0: printf("A) ALFRED HITCHCOCK\nB) TOM CRUISE\nC) ORLANDO BLOOM\nD) IAN MCKELLEN\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='d' || r=='D')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!🙌\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 🙁\nLA RESPUESTA CORRECTA ES: D) IAN MCKELLEN\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 1: printf("A) THE REVENANT\nB) THE WOLF OF WALL STREET\nC) CATCH ME IF YOU CAN\nD) THE GREAT GATSBY\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!🤩\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 😰\nLA RESPUESTA CORRECTA ES: A) THE REVENANT\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 2: printf("A) THE LION KING\nB) ONWARD\nC) BAO\nD) INSIDE OUT\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!🤪\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 😓\nLA RESPUESTA CORRECTA ES: A) THE LION KING\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 3: printf("A) BEN HARDY\nB) RAMI MALEK\nC) TOM HANKS\nD) TOBEY MAGUIRE\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😅\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 🤕\nLA RESPUESTA CORRECTA ES: B) RAMI MALEK\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 4: printf("A) AVATAR\nB) TITANIC\nC) AVENGERS: ENDGAME\nd) STAR WARS: THE FORCE AWAKENS\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!🤠\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 🙃\nLA RESPUESTA CORRECTA ES: C) AVENGERS: EN\n\n");
                                        i+=10;
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
            case 4: printf("\n");
                    while(i<=5)
                    {
                        system("clear");
                        printf("\033[1;32m");
                        printf("\n\t\t\t\t4. MATEMÁTICAS\n\n");
                        char *matematicas[] = {"¿CUÁNTO ES 8/2(2+2)?", "¿CUÁL SERIA UNA EXPRESIÓN EQUIVALENTE PARA (a+b)²?", "¿CÓMO SE LE CONOCE ESTA FÓRMULA?\nx = (-b ± √b²-4ac)/2a", "¿CUÁL ES LA EXPRESIÓN PARA EL TEOREMA DE PITÁGORAS?", "¿QUIÉN ES CONSIDERADO COMO EL PADRE DEL CÁLCULO?"};
                        printf("%s\n", matematicas[n]);
                        switch(n)
                        {
                            case 0: printf("A) 16\nB) 1\nC) 4\nD) 8\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😳\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 🤧\nLA RESPUESTA CORRECTA ES: A) 16\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 1: printf("A) a²+b²\n B) 2a+2b\nC) a²+2ab+b²\nD) a+ab+b\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😚\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 🤨\nLA RESPUESTA CORRECTA ES: C) a²+2ab+b²\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 2: printf("A) LA CHICHARRONERA\nB) FÓRMULA DE LA ECUACIÓN DE SEGUNDO GRADO\nC) A Y B SON CORRECTAS\nD) NINGUNA DE LAS ANTERIORES\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😌\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 😕\nLA RESPUESTA CORRECTA ES: C) A Y B SON CORRECTAS\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 3: printf("A) c² = a² + b²\nB) c = a + b\nC) x = (-b ± √b²-4ac)/2a\nD) AB² = BH * BC\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😇\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 😫\nLA RESPUESTA CORRECTA ES: A) c² = a² + b²\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 4: printf("A) EINSTEIN\nB) NEWTON\nC) BALDOR\nD) GAUSS\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!🤙\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='a' || r=='A')
                                    {
                                        printf("\nINCORRECTO 😑\nLA RESPUESTA CORRECTA ES: B) NEWTON\n\n");
                                        i+=10;
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
            case 5: printf("\n");
                    while(i<=5)
                    {
                        system("clear");
                        printf("\033[1;32m");
                        printf("\n\t\t\t\t5. CULTURA GENERAL\n\n");
                        char *cultura_general[] = {"¿QUIÉN ES EL CREADOR DEL LENGUAJE C?", "¿CUÁNDO FINALIZÓ LA SEGUNDA GUERRA MUNDIAL?", "¿CUÁNTO DURÓ LA GUERRA DE LOS 100 AÑOS?", "¿EN QUÉ AÑO SE DESCUBRIÓ AMÉRICA?", "¿QUÉ ES UN PALINDROMO?"};
                        printf("%s\n", cultura_general[n]);
                        switch(n)
                        {
                            case 0: printf("A) DENNIS RITCHIE\nB) RICHARD STALLMAN\nC) ALAN TURING\nD) ALAN COOPER\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='a' || r=='A')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😊\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='b' || r=='B' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\nINCORRECTO 😥\nLA RESPUESTA CORRECTA ES: A) DENNIS RITCHIE\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 1: printf("A) 1918\nB) 1945\nC) 1939\nD) 1914\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!👏\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='a' || r=='A' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\nINCORRECTO 😪\nLA RESPUESTA CORRECTA ES: B) 1945\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 2: printf("A) 107 AÑOS\nB) 106 AÑOS\nC) 99 AÑOS\nD) 116 AÑOS\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='d' || r=='D')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😋\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='a' || r=='A' || r=='c' || r=='C' || r=='b' || r=='B')
                                    {
                                        printf("\nINCORRECTO 🤥\nLA RESPUESTA ES: D) 116 AÑOS\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 3: printf("A) 1482\nB) 1492\nC) 1484\nD) 1494\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='b' || r=='B')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!😙\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='a' || r=='A' || r=='c' || r=='C' || r=='d' || r=='D')
                                    {
                                        printf("\nINCORRECTO 😒\nLA RESPUESTA CORRECTA ES: B) 1492\n\n");
                                        i+=10;
                                        sleep(3);
                                    }
                                    else
                                    {
                                        i=20;
                                    }
                                break;
                            case 4: printf("A) UNA PALABRA QUE SE ESCRIBE DIFERENTE PERO SIGNIFICA LO MISMO QUE OTRA PALABRA\nB) UNA PALABRA QUE TIENE UN SIGNIFICADO APUESTO A OTRA PALABRA\nC) UNA PALABRA QUE SE ESCRIBE Y SE LEE IGUAL AL DERECHO Y AL REVÉS\nD) UN AVE EN PELIGRO DE EXTINCIÓN\n\n");
                                    printf("ELIGE UN INCISO: ");
                                    scanf("%s",&r);
                                    if(r=='c' || r=='C')
                                    {
                                        printf("\n\t\t\t\t  ¡CORRECTO!💪\n\n");
                                        i++;
                                        sleep(3);
                                    }
                                    else if(r=='a' || r=='A' || r=='b' || r=='B' || r=='d' || r=='D')
                                    {
                                        printf("\nINCORRECTO 🥱\nLA RESPUESTA CORRECTA ES: C) UNA PALABRA QUE SE ESCRIBE Y SE LEE IGUAL AL DERECHO Y AL REVÉS\n\n");
                                        i+=10;
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
            case 6: comprobar=2;
                break;
            case 25: comprobar=25;
                break;
            default: printf("\033[1;31m");
                    printf("\n\t\t\tOPCIÓN INVÁLIDA ❌\n\n");
                    sleep(3);
                    system("clear");
                break;
        }

        if(i==10)
        {
            system("clear");
            printf("LO SIENTO, PERDISTE 😞\n\n");
            printf("¿QUIERES INTENTARLO DE NUEVO? SÍ(1) NO(2) ");
            scanf("%i",&comprobar);
        }
        else if(i==20)
        {
            printf("\033[1;31m");
            printf("\n\t\t\tOPCIÓN INVÁLIDA ❌\n\n");
            printf("¿QUIERES INTENTARLO DE NUEVO? SÍ(1) NO(2) ");
            scanf("%i",&comprobar);
        }
        else if(i>5)
        {
            system("clear");
            printf("¡FELICIDADES! GANASTE 🥳\n\n");
            printf("¿QUIERES JUEGAR DE NUEVO? SÍ(1) NO(2) ");
            scanf("%i",&comprobar);
        }
    }

    if(comprobar==2)
    {
        system("clear");
        printf("\033[1;35m");
        printf("\n\t\t\t\t VUELVA PRONTO👋\n\n");
        sleep(3);
        system("clear");
    }
    else if(comprobar==0){}
    else if(comprobar==25)
    {
        int x,a;
        printf("\033[5;1;35m");
        printf("\n\t\t\t\tF");
        printf("\033[1;37m");
        printf("E");
        printf("\033[1;35m");
        printf("L");
        printf("\033[1;37m");
        printf("I");
        printf("\033[1;35m");
        printf("Z ");
        printf("\033[1;37m");
        printf("N");
        printf("\033[1;35m");
        printf("A");
        printf("\033[1;37m");
        printf("V");
        printf("\033[1;35m");
        printf("I");
        printf("\033[1;37m");
        printf("D");
        printf("\033[1;35m");
        printf("A");
        printf("\033[1;37m");
        printf("D ");
        printf("\033[1;35m");
        printf(":");
        printf("\033[1;37m");
        printf(")\n\n");
        printf("\033[1;33m");
        printf("\t\t\t\t       #\n");

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
        }
            for(x=1;x<=3;x++)
            {
                printf("\033[1;30m");
                printf("\t\t\t\t      ***\n");
            }
                    
            printf("\n\n");
            printf("\033[0m");
    }
    else
    {
        system("clear");
        printf("\033[1;31m");
        printf("\n\t\t\tOPCIÓN INVÁLIDA 🚫\n\n");
        sleep(3);
        system("clear");
    }

	return 0;
}