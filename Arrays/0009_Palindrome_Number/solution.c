bool isPalindrome(int x) {
    long long rev=0;
    long long m=x;
    if(x<0)
    return 0;
    while(x!=0)
    {
        long long r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    if(rev==m)
    return 1;
    else
    return 0;
}