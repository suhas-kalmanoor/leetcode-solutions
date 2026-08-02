char* longestCommonPrefix(char** strs, int strsSize) {
                int i,j;
                int l=strlen(strs[0]);
                    char *ans=(char*)malloc((l+1)*sizeof(char));


    for(i=0;strs[0][i]!='\0';i++)
    {
        for(j=0;j<strsSize;j++)
        {
            if(strs[j][i]!=strs[0][i])
            {
                ans[i]='\0';
                return ans;
            }
        }
                    ans[i]=strs[0][i];

    }
    ans[i]='\0';
    return ans;
}