class Solution {
    public int search(int[] nums, int target) {
        int n = nums.length;
        if (n == 1) {
        return nums[0] == target ? 0 : -1;
        }

        int left = 0, right = n - 1;

        while (left < right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] > nums[right])
                left = mid + 1;
            else
                right = mid;
        }

        int pivot = left;  

        if (pivot == 0) {
            left = 0;
            right = n - 1;
        }
        else if (target >= nums[0]) {
            left = 0;
            right = pivot - 1;
        } 
        else {
            left = pivot;
            right = n - 1;
        }

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }

        return -1;
    }
    
}