/* TODO: Include check to make sure the same file isn't being created twice. Fixed using append mode maybe?? */

void files()
{
    FILE *f;
    f = fopen("userlist.txt", "r");
    char c;
    char userlist[100][100];
    /* Initialise userlist with NULL */
    int i, j;
    int row = 0, column = 0;
    while ( ( c = fgetc(f) ) != EOF )
    {
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
    /* NULL-ify the end of the userlist array */
    for ( i = row ; i < 100 ; i++ )
    {
        userlist[i][0] = NULL;
    }
    /* File Creation segment
    for ( i = 0 ; userlist[i][0] != NULL ; i++ )
    {
        //printf("IN FILE CREATION SEGMENT");
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
    }*/
    for ( i = 0 ; userlist[i][0] != NULL ; i++ )
    {
        char temp[100] = "";
        strcpy(temp, userlist[i]);
        printf("Detected username: %s. Going into %s folder.\n", temp, temp);
        chdir(temp);
        printf("Successfully entered %s folder.\n", temp);
        system("pwd");
        /* FIX THIS SHIT */
        for ( j = 0 ; userlist[j][0] != NULL ; j++ )
        {
            printf("Comparison with ");
            puts(userlist[j]);
            char tempfile[100] = "";
            strcpy(tempfile, userlist[j]);
            if ( ( strcmp(tempfile, userlist[i]) ) == 0 )
            {
                printf("Same username. Skipping.\n");
                continue;
            }
            else
            {
                strcat(tempfile, ".txt");
                FILE *z;
                z = fopen(tempfile, "a");
                fclose(z);
                printf("Creating %s file in %s folder successful\n", tempfile, temp);
            }
        }
        printf("Entering root directory.\n");
        chdir("..");
        system("pwd");
        printf("Exiting loop.\n");
    }
}
