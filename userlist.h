void userlist(char *name)
{
    FILE *f;
    f = fopen("userlist.txt", "a");
    fputs(name, f);
    fclose(f);
}
