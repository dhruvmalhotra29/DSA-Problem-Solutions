  void swapElements(int arr[], int sizeof_array){

        // Your code here

        for(int i=0; i<sizeof_array-2; i++)
        {
            swap(arr[i],arr[i+2]);
        }

        return;

    }