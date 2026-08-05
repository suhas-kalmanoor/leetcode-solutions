int strStr(char* haystack, char* needle) {
    int l1=strlen(haystack);
    int l2=strlen(needle);
    int j=0;
    for(int i=0;i<=l1-l2;i++)
    {
        for(j=0;needle[j]!='\0';j++)    
        {
            if(haystack[i+j]!=needle[j])
            break;
        }
        if(needle[j]=='\0')
        return i;
    }
    return -1;
}