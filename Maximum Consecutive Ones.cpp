int longestSubSeg(vector<int> &arr , int n, int k){
    // Write your code here.
    int i=0;
    int flip=0;
    int j=0;
    int ans=0;
    while(i<n){
        if(arr[i]==0){
            flip++;

        }
        while(flip>k){
            if(arr[j++]==0){
                flip--;
            }
        }
        ans=max(ans,i-j+1);
        i++;

    }
    return ans;
}
