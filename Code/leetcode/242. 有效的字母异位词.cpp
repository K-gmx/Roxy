bool isAnagram(char* s, char* t) {
    int len1=strlen(s)-1,len2=strlen(t)-1,i,a[26*]={0};
    if(len1!=len2) return false;
    for(i=0;i<=len1;i++)
    {
        a[s[i]-'a']++;
        a[t[i]-'a']--;
    }
    for(i=0;i<=26;i++)
    {
        if(a[i]!=0)return false;
    }
    return true;
}
