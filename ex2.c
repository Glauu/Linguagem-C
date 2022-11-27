#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//inicialmente foi usado "scanf("%s \n,s");",mas o scanf finaliza a string qdo encontra um espaço
// não serve para uma string grande como é o caso desse projeto

int main(void)

{
    char *s = malloc(3 * sizeof(s));
    
    if (s == NULL)
    {
        return 1;
    }
    else
    {   printf("Nome: ");
        {
         scanf("%[^\n]", s);
        }
        printf("Hello %s! \n", s);
    }
    free(s);
}
