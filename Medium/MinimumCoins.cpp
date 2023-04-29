int minimumCoins(int p)
{
    // write your code here
    vector<int> coins{1,2,5,10,20,50,100,500,1000};
    int min_coins=0;

    for(int i=8; i>=0; i--)
    {
        min_coins+=(p/coins[i]);
        p%=coins[i];
    }

    return min_coins;
}