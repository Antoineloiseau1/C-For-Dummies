#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0

int verifyInput(int check);
int checkGuess(int gen, int input);


int main()
{
    int guess, random;

    srand((unsigned)time(NULL)); // Definit une graine pour la fonction rand en fonction du temps
    random=rand(); // genere un nombre alétoire
    random%=21; // Abaisse la plage du nombre aléatoire à 20

    printf("Essayez de devinez le nombre [0-20]: ");

    do
    {
        scanf("%d", &guess); // enregistre la réponse du joueur
        if(verifyInput(guess))
        {
            if(checkGuess(random, guess))
                printf("Bravo, le nombre était bien %d !\n", random);
            else
                printf("Perdu ! Le nombre était %d...\n", random);
        }
        else
    return(0);
}

int verifyInput(int check) // fonction qui verifie l'input
{
    if(check<0 || check>20)
    {
        printf("Vous êtes hors de la plage.\n");
        return FALSE;
    }
    else
        return TRUE;
}

int checkGuess(int gen, int input) //Verifie si la reponse est bonne
{
    if(gen==input)
        return TRUE;
    else
        return FALSE;
}
