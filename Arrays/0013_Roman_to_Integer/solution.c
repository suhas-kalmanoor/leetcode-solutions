int value(char ch){
        switch(ch)
    {
        case 'I':
        return 1;
        break;
        case 'V': 
        return 5;
                break;

        case 'X': 
        return 10;
                break;

        case 'L': 
        return 50;
                break;

        case 'C': 
        return 100;
                break;

        case 'D': 
        return 500;
                break;

        case 'M': 
        return 1000;
                break;

    }
    return 0;
}

int romanToInt(char* s) {
    int sum=0;
    int l=strlen(s);
    for(int i=0;i<l;i++)
    {
        char ch1;
        ch1=s[i];
        int x=value(ch1);
        if(value(s[i+1])>value(s[i])){
            int y=value(s[i+1]);
            int z=value(s[i]);
            sum=sum+(y-z);
            i++;
        }
        else
        sum=sum+x;


    }

    return sum;
}
