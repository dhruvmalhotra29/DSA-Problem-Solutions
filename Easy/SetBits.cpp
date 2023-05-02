    //Write your countBits function here
int countBits(int n)
{
    int setBits=0;
    while(n)
    {
        if(n%2)
            setBits++;
        n/=2;
    }

    return setBits;
}