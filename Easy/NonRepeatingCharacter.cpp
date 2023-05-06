//Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
       map<char,int> f;
       int n=S.size();
       char ans='$';  // If no non-repeating character exists return $

       for(int i=0; i<n; i++)
       {
           f[S[i]]++;
       }

       for(int i=0; i<n; i++)
       {
           if(f[S[i]]==1)
           {
               ans=S[i];
               break;
           }
       }

       return ans;

    }