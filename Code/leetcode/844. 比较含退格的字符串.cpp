void f(char *s){
    int star=0,len=strlen(s)-1;
    for(int i=0;i<=len;i++)
    {
        if(s[i]!='#')
        {
            s[star++]=s[i];
        }
        else star--;
        if(star<0)star=0;
    }
    s[star]='\0';
}
bool backspaceCompare(char* s, char* t) {
    f(s);
    f(t);
    return strcmp(s,t)==0;
}
