int countEven(int num) {

        int count=0;

        for(int i=1; i<=num; i++)
        {
            int no=i,s=0;
            while(no)
            {
                int d=no%10;
                s+=d;
                no/=10;
            }

            if(s%2==0)
                count++;
        }

        return count;

    }