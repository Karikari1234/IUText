#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *f;
    f = fopen("userlist.txt", "r");
    char c[100];
    char userfiles[100][100];
    int i;
    for ( i = 0 ; i < 100 ; i++ )
    {
        fgets(c, 100, f);
        if ( c[0] != NULL )
            strcpy(userfiles[i], c);
        else
            userfiles[i][0] = NULL;
    }
    for ( i = 0 ; i < 100 ; i++ )
    {
        puts(userfiles[i]);
    }
}
