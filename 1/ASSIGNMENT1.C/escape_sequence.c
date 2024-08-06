#include<stdio.h>
#define p printf
int main ()
{
    char *s="manas";
    char gen='m';
    int roll=66;
    float dues=10000.50;
    p(" \a my name is \t %s",s);
    p("\a my gen is \t %c",gen);
    p("\n my roll is \t %d",roll);
    p("\n my dues is \t %.2f",dues);
    return 0;
}