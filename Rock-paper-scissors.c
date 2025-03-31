#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{

    char *choice[4];
    choice[0] = "rock";
    choice[1] = "paper";
    choice[2] = "scissors";
    choice[3] = NULL;
    char* player = argv[1];
    int len = strlen(player);
    
    for (int i = 0; i < len; i++)
    {
        tolower(player[i]);
    }
        
    int cpu = 0;
    int score = 0;
    srand(time(NULL));
    int player_checked = 0;
    // 0 = rock
    // 1 = paper
    // 2 = scissors
    //player = tolower(player);

    // sterilize input
    if (argc < 2 || argc < 2)
    {
        printf("Usage: './rpc <rock , paper , scissors>'\n");
        return 2;
    }

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(player, choice[i]) == 0)
        {
            player_checked = i;
            break;
        }
        else if (i == 2)
        {
            printf("strcmp failed to execute correctly.\n");
            return 1;
        }
    }
    
    // CPU picks a choice
    cpu = rand() % 3;

    if (player_checked == cpu)
    {
        printf("It's a tie! you both chose %s.\n", choice[cpu]);
    }

    else if ((player_checked == 0 && cpu == 2) || (player_checked == 1 && cpu == 0) || (player_checked == 2 && cpu == 1))
    {
        printf("CPU chose %s, You win!\n", choice[cpu]);
    }
    else
    {
        printf("You lose. CPU chose %s.\n", choice[cpu]);
    }
    
    
    
    // cpu randomly selects an option
    
    // compare the user's input

    // determine winner


    return 0;
}