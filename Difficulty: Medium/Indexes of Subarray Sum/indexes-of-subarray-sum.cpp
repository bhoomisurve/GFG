class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        // code here
        int n = arr.size();
        int start = 0;
        int currsum = 0;
        
        for (int end = 0; end < n; end++){
            currsum += arr[end];
            while (currsum > target && start <= end){
                currsum -= arr[start];
                start++;
            }
            if (currsum == target){
                return {start + 1, end + 1};
            }
        }
        return {-1};
    }
};