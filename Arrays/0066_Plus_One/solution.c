/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* a=(int*)malloc((digitsSize+1)*sizeof(int));
    int carry=1;
    int sum=0;
    int i;
    for(i=digitsSize-1;i>=0;i--)
    {
        if(digits[i]+carry==10)
        {
            a[i]=0;
            carry=1;
        }
        else if(digits[i]+carry<10){
                a[i]=digits[i]+carry;
                carry=0;
        }
        else{
            a[i]=digits[i];
        }
    }
            if(carry==1){
        *returnSize=digitsSize+1;
        i=digitsSize;
        while(i--)
        a[i+1]=a[i];
    a[0]=1;
        }
        else
        *returnSize=digitsSize;
    return a;
}