#include <stdio.h>
#define macro(n, a, i, m) m##a##i##n
#define MAIN macro(n, a, i, m)
 
int MAIN()
{
    printf("GIET University");
    return 0;
}