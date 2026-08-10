char* addBinary(char* a, char* b) {
    int l1=strlen(a);
    int l2=strlen(b);
    int i=l1-1,k=0;
    int j=l2-1;
    int sum=0;
    int carry=0;
    int len=(l1>l2)?l1:l2;
    char* ans=malloc((len+2)*sizeof(char));
    while(i>=0||j>=0||carry)
    {
        sum=carry;
        if(i>=0){
        sum+=a[i]-'0';
        i--;
        }
        if(j>=0){
        sum+=b[j]-'0';
        j--;
        }
        ans[k++]=sum%2+'0';
        carry=sum/2;
    }
    ans[k]='\0';
    i=0;
    for(i=0;i<k/2;i++)
    {
        int temp=ans[i];
        ans[i]=ans[k-1-i];
        ans[k-1-i]=temp;

    }
    return ans;

}