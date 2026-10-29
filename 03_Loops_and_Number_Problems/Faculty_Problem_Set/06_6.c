#include<stdio.h>
int main()
{
    int num,choice,guess,remaining;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the number of total choice:");
    scanf("%d",&choice);
    remaining=choice;
    while(remaining>0)
    {
        printf("Enter your guess:");
        scanf("%d",&guess);
        remaining--;
        if(guess==num)
        {
            printf("Right, Player-2 wins!");
            break;

        }
        else if(remaining>0)
        {
            printf("Wrong, %d Choices Left!\n",remaining);
        }
        else
        {
            printf("Wrong, %d choices left!\nPlayer-1 wins!",remaining);
        }

    }
    return 0;
}


