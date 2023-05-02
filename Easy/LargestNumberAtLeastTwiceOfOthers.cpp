    int dominantIndex(vector<int>& nums) {

        int maxIdx=-1;
        int n=nums.size();
        int big=-1;

        for(int i=0; i<n; i++)
        {
            if(big<nums[i])
                maxIdx=i;
            big=max(big,nums[i]);
        }

        for(int i=0; i<n; i++)
        {
            if((nums[i]*2)>big and nums[i]!=big)
            {
                maxIdx=-1;
                break;
            }
        }


        return maxIdx;

    }