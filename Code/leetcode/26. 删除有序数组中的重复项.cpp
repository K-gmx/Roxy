int removeDuplicates(int* a, int len) {
    if(len==0)return 0;
    int k=0;
    for(int i=0;i<=len-1;i++)
    {
        if(a[i]!=a[k])
        {
            a[++k]=a[i];
        }
    }
    return k+1;
}
