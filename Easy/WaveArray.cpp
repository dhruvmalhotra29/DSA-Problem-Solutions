 // arr: input array
    // n: size of array
    //Function to sort the array into a wave-like array.
    void convertToWave(int n, vector<int>& arr){

        // Your code here
        for(int i=0; i<n-1; i+=2)
        {
            int t=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=t;
        }

        return;

    }