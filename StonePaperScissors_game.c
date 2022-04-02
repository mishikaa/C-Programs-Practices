//Creating rock,paper & scissors game

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n);//To generate a random no. between 0 to 2 as this game has only 3 options : Rock,Paper or Scissors 
void game();//This function is to check which one wins in each round
char inputChoice();//To input the choice of the user
char CompChoice(int ch);//To convert the random no. to a  character as per the game for the choice of the computer
void result(int comp_score,int user_score);//To print the final result who won or lost or whether it's a tie

char name[50];//To store the name of the user

int generateRandomNumber(int n)
{
    srand(time(NULL));
    return rand()%n;
}

int main()
{
    printf("\nEnter your name : ");
    gets(name); 
    printf("\nHello %s !\nLet's start the game.\n\n",name);
    game();   
    return 0;
}


void game()
{
    int User_score=0; /*To store the score of the user*/
    int Comp_score=0; /*To store the score of the computer*/ 


int i=1;
int choice;

do
{
    printf("\n********<--Round %d-->********\n\n",i);
    
    printf("\t********Enter \"R\" for \"Rock\",\"S\" for \"Scissors\" & \"P\" for \"Paper\"********\n ");
    input:
    printf("\n*******<--Your turn-->*******\n");
    char choiceUser=inputChoice();

    if( choiceUser != 'P' && choiceUser != 'R' && choiceUser != 'S')
    {
        printf("\nInvalid Input");
        printf("\n\t********Enter \"R\" for \"Rock\",\"S\" for \"Scissors\" & \"P\" for \"Paper\"********\n ");
        goto input;

    }

    else
    {
    printf("\n********<--Computer's turn-->********\n");
    int rand=generateRandomNumber(3);//Calling the function to generate a random no.

    char choiceComp=CompChoice(rand);//Storing the choice of computer

    printf("%c\n",choiceComp);

    if((choiceUser == 'P' && choiceComp == 'R') || (choiceUser == 'R' && choiceComp == 'S') || (choiceUser == 'S' && choiceComp == 'P'))
    { /*Case in which user wins the round*/
        User_score++;
    }

    else if(choiceUser==choiceComp)
    { /*Case when it's a tie*/
        goto end;
    }

    else
    { /*Case when computer wins the round*/
        Comp_score++;
    }

    end:
    printf("\t\t\t\t\t**Scoreboard**\n",i);
    printf("\n\t\t\t\t\t%s : %d\n",name,User_score);
    printf("\t\t\t\t\tComputer : %d\n",Comp_score);

    i++;

    printf("\nPress 0 to exit and any other number to continue to play & Press Enter\n");
    scanf("%d",&choice);
    }
    
}while(choice!=0);

printf("\n\t\t\t\t\t****Game Over****\n");
result(User_score,Comp_score);    
}

char inputChoice()
{
    char ch;
    scanf(" %c",&ch);
    return ch;
}
char CompChoice(int ch)
{
    switch (ch)
    {
        case 0:
        return 'R';
        break;
        case 1:
        return 'P';
        break;
        case 2:
        return 'S';
        break;
    }
}

void result(int user_score,int comp_score)
{
    if(user_score>comp_score)
    {
        printf("\n\t\t\t\t****Congrats ! You won the game.****)");
    }
    else if(user_score<comp_score)
    {
        printf("\n\t\t\t\t****Oops! You lost the game.****\n");
        printf("\n\t\t\t\t****No problem! Try again.****\n");
    }
    else
    {
        printf("\n\t\t\t\t\t****It's a Tie!****");
    }
}