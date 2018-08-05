#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "directories.h"
#include "userlist.h"
#include "files.h"

int main()
{
    char username[100];
    printf("Enter username\n");
    gets(username);
    directories(username);
    userlist(username);
    files();
}
