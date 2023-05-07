 int findMaxConsecutiveOnes(vector<int>& nums) {

        int ones=0,o=0;
        int n=nums.size();

        for(int i=0; i<n; i++)
        {
            if(nums[i]==0)
            {
                ones=max(ones,o);
                o=0;
            }
            else
            {
                o++;
            }
        }

        ones=max(ones,o);

        return ones;

    }