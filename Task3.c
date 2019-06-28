#include <stdio.h>
#include <string.h>
int main()
{
    char a[]="Where was the Olympics";
    char b[]=", held in London?";
    printf("The length of the string \"%s\" is %d characters\n", a, strlen(a));
    printf("The length of the string \"%s\" is %d characters\n", b, strlen(b));
    return 0;
}