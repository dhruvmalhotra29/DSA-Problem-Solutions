  int findNumbers(vector<int>& nums) {

        int cnt=0;
        int n=nums.size();

        for(int i=0; i<n; i++)
        {
            int num=nums[i];
            int digits=0;
            while(num)
            {
                num/=10;
                digits++;
            }
            if(digits%2==0)
                cnt++;
        }

        return cnt;
    }