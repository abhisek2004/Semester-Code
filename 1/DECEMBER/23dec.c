//print a hello msg using an udf show()
#include<stdio.h>
void show();// prototype
int main()
{
    show();//fun call
    return 0;
}
void show()
{
    printf("\nabhisek panda");
}