bool checkPalindrome(string s)
{
    // Write your code here.

    int n=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]>='A' and s[i]<='Z')
        {
            s[i]=tolower(s[i]);
            s[n]=s[i];
            n++;
        }
        else if(s[i]>='a' and s[i]<='z')
        {
            s[n]=s[i];
            n++;
        }
        else if(isdigit(s[i]))
        {
            s[n]=s[i];
            n++;
        }
    }

    int st=0,e=n-1;

    while(st<=e)
    {
        if(s[st]!=s[e])
            return false;
        st++;
        e--;
    }

    return true;

}