#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char users[100][100];
    int i;
    for ( i = 0 ; i < 100 ; i++ )
    {
        gets(users[i]);
        if ( users[i][0] == NULL )
            break;
    }
    FILE *f;
    f = fopen("userlist.txt", "a");
    i = 0;
    while ( users[i][0] != NULL )
    {
        fputs(users[i], f);
        //fprintf(f, "\n\0");
        i++;
    }
    fclose(f);
}
