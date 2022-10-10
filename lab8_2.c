#include <stdio.h>
#include <string.h>
int main (void)
{
    char name[20] ;
    printf("Enter name> ");
    scanf("%[^\n]s",name);
    printf("%s",name);




    return (0);
}