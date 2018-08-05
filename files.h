/*TODO: Include check to make sure the same file isn't being created twice. Fixed using append mode maybe?? */

void files()
{
    FILE *f;
    f = fopen("userlist.txt", "r");
    char c;
    char userlist[100][100];
    /*initialise userlist with NULL*/
    int i, j;
    /*for ( i = 0 ; i < 100 ; i++ )
    {
        for ( j = 0 ; j < 100 ; j++ )
        {
            userlist[i][j] = NULL;
        }
    }*/
    int row = 0, column = 0;
    while ( ( c = fgetc(f) ) != EOF )
    {
        printf("IN WHILE BLOCK\n");
        if ( c == 32 )
        {
            userlist[row][column] = NULL;
            row++;
            column = 0;
        }
        else
        {
            userlist[row][column] = c;
            column++;
        }
    }
    fclose(f);
    for ( i = row ; i < 100 ; i++ )
    {
        userlist[i][0] = NULL;
    }
    /* File Creation segment */
    for ( i = 0 ; userlist[i][0] != NULL ; i++ )
    {
        printf("IN FILE CREATION SEGMENT");
        char temp[100];
        strcat(temp, userlist[i]);
        printf("Detected username: ");
        puts(temp);
        strcat(temp, ".txt");
        FILE *z;
        z = fopen(temp, "a");
        fclose(z);
        for ( j = 0 ; temp[j] != NULL ; j++ )
        {
            temp[j] = NULL;
        }
    }
    /*for ( i = 0 ; i < 100 ; i++ )
    {
        puts(userlist[i]);
    }*/
}
