 vector<int> shuffle(vector<int>& nums, int n) {

        int i=0,j=n;
        vector<int> nums1;

        while(i<n and j<(2*n))
        {
            nums1.push_back(nums[i]);
            nums1.push_back(nums[j]);
            i++;
            j++;
        }

        return nums1;

    }