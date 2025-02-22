void reverseString(char* s, int sSize) {
    char *star=s,*end=s+sSize-1;
    for(;star<end;star++,end--)
    {
        *star^=*end^=*star^=*end;
    }
}
