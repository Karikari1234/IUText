void duplicate_CHECKER(char *username)
{
    char b[200][200];
    int i, j = 0, k = 0, n, m;
    for (i = 0;username[i] != '\0';i++)
    {
        if (username[i] == ' ')
        {
            b[k][j] = '\0';
            k++;
            j = 0;
        }
        else
        {
            b[k][j] = username[i];
            j++;
        }
    }
    b[k][j] = '\0';
    for (i = 0;i <= k;i++)//kinda bubble sorting stuff
    {
        for (j = i + 1;j <= k;j++)
        {
            if (strcmp(b[i], b[j]) == 0)//if same username is found
            {
                printf("Can't Use This Username");
                return;
            }
        }
    }

    printf("Operation Successful");
    return;
}

