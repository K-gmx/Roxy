class Solution {
public:
    void getnext(const string& s,int *next){
        int i,j=0,len=s.size();
        next[0]=j;
        for(i=1;i<=len-1;i++)
        {
            while(j>0&&s[i]!=s[j])
            {
                j=next[j-1];
            }
            if(s[i]==s[j])
            {
                j++;
            }
            next[i]=j;
        }
    } 
    int strStr(string haystack, string needle) {
         if (needle.size() == 0) {
            return 0;
        }
        int  next[needle.size()],len=haystack.size(),j=0;
        getnext(needle,next);
        for(int i=0;i<=len-1;i++)
        {
            while(haystack[i]!=needle[j]&&j>0)
            {
                j=next[j-1];
            }
            
            if(haystack[i]==needle[j])
            {
                j++;
            }
            if(j==needle.size())return (i-needle.size()+1);
            
        }
        return -1;
    }
};
