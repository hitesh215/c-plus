void sort012(int arr[], int n)
    {
        int count0=0;
        int count1=0;
        int count2=0;
        
        for(int i=0;i<n;i++){
            if(arr[i]==0)
                count0++;
            else if(arr[i]==1)
                count1++;
            else
                count2++;
        }
        int j=0;
        while(count0--){
            arr[j++]=0;
        }
        while(count1--){
            arr[j++]=1;
        }
        while(count2--){
            arr[j++]=2;
        }
    }