void directories(char *name)
{
    //char name[1000];
    //gets(name);
    char command[1000] = "mkdir ";
    strcat(command, name);
    //puts(command);
    system(command);
    //system("dir");
}
