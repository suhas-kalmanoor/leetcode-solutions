#define max 100000
int match(char open,char close)
{
    return(open=='(' && close==')')||(open=='['&&close==']')||(open=='{'&&close=='}');
}
char stack[max];
int top;
void push(char x)
{
    stack[++top]=x;
}
char pop()
{
    return stack[top--];
}
char peek()
{
    return stack[top];
}
bool isValid(char* s) {
    int i;
     top=-1;
    for(i=0;s[i]!='\0';i++)
    {
        char ch=s[i];
        if(ch=='('||ch=='{'||ch=='[')
        push(ch);
        else{
            if(top==-1)
            {
                return 0;
            }
            if(match(peek(),ch)!=1)
            {
                return 0;
            }
            int z=pop();
        }
    }
    if(top==-1)
    return 1;
    else 
    return 0;
}   