 int distributeCandies(vector<int>& candyType) {

        int n=candyType.size();
        set<int> s;

        for(int i=0; i<n; i++)
        {
            s.insert(candyType[i]);
        }

        int t=s.size();

        if(t<=(n/2))
            return t;

        return (n/2);

    }