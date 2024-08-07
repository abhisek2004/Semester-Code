//Generate random no between 0 to 100 . if you enter less than the generated no then it will show "you enter too low".
//If you entered more than the random no then it will show you "You entered too high". 
//If it matches then it will print "YAY ! YOU WON THE MATCH"
//assignment 04 q04

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int num = rand() % 100;
    int cho;
    int tried =0;
   while (cho!=num)
   {
     printf("\nenter for the choice : ");
    scanf("%d", &cho);
     if (cho == num)
    {
        printf("\ni won the match");
    }
    else if (cho < num)
    {
        printf("\nyou entered too low");
    }else
    printf("\nyou entered too high");
    tried ++;
   }
   printf("\nthe num is %d",num);
   printf("\nyou tried %d times",tried);
}

output
enter for the choice : 90

you entered too low
enter for the choice : 95

you entered too high
enter for the choice : 94

i won the match
the num is 94
you tried 3 times