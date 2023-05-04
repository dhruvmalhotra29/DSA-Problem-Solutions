 bool areOccurrencesEqual(string s) {

        map<char,int> f;
        int n=s.size();

        for(int i=0; i<n; i++)
        {
            f[s[i]]++;
        }

        for(int i=1; i<n; i++)
        {
            if(f[s[i]]!=f[s[i-1]])
            {
                return false;
            }
        }

        return true;
    }