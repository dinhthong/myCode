int intdigit(int x)
{
    unsigned int count=0;
    while(x>=10)
    {
        count++;
        x=x/10;
    }
    return count+1;
}