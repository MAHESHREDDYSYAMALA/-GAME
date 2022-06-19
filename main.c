#include <stdio.h>
#include <stdlib.h>
char block[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char a[20];char b[20];
char symbol; char a[20]; char b[20];
int player = 1,i,move;
void grid()
{                   //displaying game board
    
    printf("\n\t\tXOXOXOXOXOXOXOXXOXOXOXOXOXOXOXXOXOXOXOXOXOXOOXO \n\n");
    printf("\t\t    Player 1 (X)  -  Player 2 (O)\n\n");
    printf("\t\t\t     |     |     \n");
    printf("\t\t\t  %c  |  %c  |  %c  \n", block[1], block[2], block[3]);
    printf("\t\t\t__|_|__\n");
    printf("\t\t\t     |     |     \n");
    printf("\t\t\t  %c  |  %c  |  %c  \n", block[4], block[5], block[6]);
    printf("\t\t\t__|_|__\n");
    printf("\t\t\t     |     |     \n");
    printf("\t\t\t  %c  |  %c  |  %c  \n", block[7], block[8], block[9]);
    printf("\t\t\t     |     |     \n");
    
}

void markgrid()
{                         //marking moves
    if (move  == 1 && block[1] == '1')
            block[1] = symbol;
 
        else if (move  == 2 && block[2] == '2')
            block[2] = symbol;
 
        else if (move  == 3 && block[3] == '3')
            block[3] = symbol;
 
        else if (move  == 4 && block[4] == '4')
            block[4] = symbol;
 
        else if (move == 5 && block[5] == '5')
            block[5] = symbol;
 
        else if (move  == 6 && block[6] == '6')
            block[6] = symbol;
 
        else if (move == 7 && block[7] == '7')
            block[7] = symbol;
 
        else if (move == 8 && block[8] == '8')
            block[8] = symbol;
 
        else if (move == 9 && block[9] == '9')
            block[9] = symbol;
 
        else
       {
            printf("\n\t\t\t*Invalid move*\a\n");
            
            player--;
       }
       
       for (move=0;move>9;move--)
     {
            printf("\n\t\t\t*Invalid move*\a\n");
            scanf("%d",&move);
            player--;
     }
       
       
}
 
int win_condition()
{                          //checking game winning condition
    if (block[1] == block[2] && block[2] == block[3])
        return 1;                //returns 1 if conditions is satisfied and declares the winner
 
    else if (block[4] == block[5] && block[5] == block[6])
        return 1;               //returns 1 if conditions is satisfied and declares the winner
 
    else if (block[7] == block[8] && block[8] == block[9])
        return 1;               //returns 1 if conditions is satisfied and declares the winner
  
    else if (block[1] == block[4] && block[4] == block[7])
        return 1;               //returns 1 if conditions is satisfied and declares the winner
 
    else if (block[2] == block[5] && block[5] == block[8])
        return 1;               //returns 1 if conditions is satisfied and declares the winner
 
    else if (block[3] == block[6] && block[6] == block[9])
        return 1;               //returns 1 if conditions is satisfied and declares the winner
 
    else if (block[1] == block[5] && block[5] == block[9])
        return 1;               //returns 1 if conditions is satisfied and declares the winner
 
    else if (block[3] == block[5] && block[5] == block[7])
        return 1;               //returns 1 if conditions is satisfied and declares the winner
 
    else if (block[1] != '1' && block[2] != '2' && block[3] != '3' &&
        block[4] != '4' && block[5] != '5' && block[6] != '6' && block[7]
        != '7' && block[8] != '8' && block[9] != '9')
 
        return 0;             //returns 0 if any of above conditions are not satisfied and game is considered as draw
    else
        return -1;            //returns -1 if game is in process
}
 
int main()
{                          //player details
    printf("\n\n\a    XOXOXOXOXOXOXOX  WELCOME TO TIC TAC TOE GAME  XOXOXOXOXOXOXOX \n\n");
    printf("    ENTER PLAYER 1(X) NAME: ");
    scanf("%s",a);
    printf("    ENTER PLAYER 2(O) NAME: ");
    scanf("%s",b);
    printf("\n");
    do
    {
        grid();
        if(player==2)
        player=2;
        else
        player=1;
        
        if(player==2)
        symbol = 'O';
        else
        symbol = 'X';
        
        if(player==1)
        printf("\t\t     %s(%c), enter a number\a:  ",a,symbol);
        else if(player==2)
       
        printf("\t\t     %s(%c), enter a number\a:  ",b,symbol);
        scanf("%d",&move);
        markgrid(move); 
        i = win_condition();
        
        player++;
        
    }while (i == -1);
    grid();
    
    if (i == 1)
    {             
               //to declare the winner of the game
        if(player==2)
        printf("\n\t      XOXOXOXOX ===> \a\a%s WINS :) <=== XOXOXOXOX",a);
        else
        printf("\n\t      XOXOXOXOX ===> \a\a%s WINS :) <=== XOXOXOXOX",b);  
    }
    else if(i == 0)
    printf("\n\t      XOXOXOXOX ===> \aGAME DRAW <=== XOXOXOXOX");
    
}