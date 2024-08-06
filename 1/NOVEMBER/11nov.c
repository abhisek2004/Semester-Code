#include<stdio.h>
int main()
{
    int branch;
    char course;
    printf("\n\n  \tMENU");
    printf("\n     ............");
    printf("\n1. ENGINEERING");
    printf("\n \t  a. CSE");
    printf("\n \t  b. ECE");
    printf("\n \t  c. MECH");
    printf("\n2. COMPUTER APPLICATION");
    printf("\n \t  a. MCA");
    printf("\n \t  b. BCA");
    printf("\n3. BUSINESS");
    printf("\n \t  a. BBA");
    printf("\n \t  b. MBA");

    printf("\nenter your option : ");
    scanf("%d",branch);
    printf("\nenter your choice:");
    scanf(" %c",course);
    
    switch (branch)
    {
    case 1:
       switch (course)
       {
       case 'a':
         printf("CSE");
        break;
       case 'b':
        printf("ECE");
        break;
        case 'c':
         printf("MECH");
        break;
       default:
        printf("course invalid");
        break;
       }
        break;
    switch (course)
    {
    case 2:
        switch (branch)
        {
        case 'a':
            printf("MCA");
            break;
        case 'b':
            printf("BCA");
            break;

        default:
            printf("invalid branch");
            break;
        }
        break;
    switch (course)
    {
    case 3:
      switch (branch)
      {
      case 'a':
        printf("BBA");
        break;
      case 'b':
        printf("MBA");
        break;
      default:
      printf("invalid branch");
        break;
      }
        
        break;
    
    default:
        printf("invalid branch");
        break;
    }
    default:
        printf("invalid course");
        break;
    }
    default:
        break;
    }
    return 0;
}