 int smallestEqual(vector<int>& nums) {

        int idx=-1;
        int n=nums.size();

        for(int i=0; i<n; i++)
        {
            if((i%10)==nums[i])
            {
                idx=i;
                break;
            }
        }

        return idx;

    }