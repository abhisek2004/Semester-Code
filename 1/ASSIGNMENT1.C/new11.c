#include <stdio.h>
#define x 10+10/10+10
#define y 10*10/10+10
 
int MAIN()
{
    printf("%d",x);
    printf("%d",y);
    return 0;
}

#include <stdio.h>
#define a 10
int main()
{
  printf("%d ",a);
 
  #define a 50
 
  printf("%d ",a);
  return 0;
}