int mySqrt(int x) {
    long long low=0;
    long long high=x;
    long long temp;
    while(low<=high)
    {
            long long mid=(low+high)/2;

        if(mid*mid>x)
        high=mid-1;
        else if(mid*mid<x)
        {
            temp=mid;
            low=mid+1;
        }
        else
        return mid; 
    }
    return temp;
}