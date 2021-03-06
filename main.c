/************************************************

   main.c
   ------

  $Author: julien colot $

  Copyleft

************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <time.h>
#include "ui.h"

/*  Function main
 *  -------------
 *
 *  Point d'entree du jeu, delegue directement a la fonction stateMachine
 */


int main(){

     printf(
     "                                                                 \n" 
     "      ________  _______  __    _  _______  __   __  __   __  ___ \n" 
     "     |   _    ||   _   ||  |  | ||       ||  | |  ||  |_|  ||   |\n" 
     "     |  |_|  _||  |_|  ||   |_| ||_     _||  | |  ||       ||   |\n" 
     "     |      |_ |       ||       |  |   |  |  | |  ||       ||   |\n" 
     "     |   _    ||   _   ||  _    |  |   |  |  |_|  || || || ||   |\n" 
     "     |  |_|   ||  | |  || | |   |  |   |  |       || ||_|| ||   |\n" 
     "     |________||__| |__||_|  |__|  |___|  |_______||_|   |_||___|\n" 
     "                                                                 \n" 
     );

    srand(time(NULL));
    stateMachine();
    printf("\nBye bye!\n\n");
    exit(0);
}
