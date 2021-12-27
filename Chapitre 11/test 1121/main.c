#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE 1
#define FALSE 0
#define RANGE 30

int verify_Input_Range(int input);
int check_User_Answer(int generatedNumber, int input);


int main()
{
    int answer, random, isRange, isGuess;

    srand((unsigned)time(NULL)); // Definit une graine pour la fonction rand() en fonction du temps
    random=rand(); // genere un nombre alétoire
    random%=(RANGE+1); // Abaisse la plage du nombre aléatoire à RANGE
    printf("Essayez de devinez le nombre [0-%d]: ", RANGE);
    scanf("%d", &answer);


    do
    {
        isRange=verify_Input_Range(answer);
        if(isRange!=TRUE)
        {
            printf("Veillez entrer une valeur dans la plage [0-%d]: ", RANGE);
            scanf("%d", &answer);
        }
        else
        {
            isGuess=check_User_Answer(random, answer);
            if(isGuess!=TRUE)
            {
                printf("Perdu, retentez votre chance !: ");
                scanf("%d", &answer);
            }
            else
                printf("Bravo le nombre était bien %d !\n", random);
        }

    }while(isRange!=TRUE || isGuess!=TRUE);



    return(0);
}

int verify_Input_Range(int input) // fonction qui verifie l'input
{
    if(input>=0 && input<=RANGE)
        return TRUE;
    else
        return FALSE;
}

int check_User_Answer(int generatedNumber, int input) //Verifie si la reponse est bonne
{
    if(generatedNumber==input)
        return TRUE;
    else
        return FALSE;
}
