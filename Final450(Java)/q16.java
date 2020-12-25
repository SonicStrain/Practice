class Solution {
    public int findDuplicate(int[] nums) { 
            for(int i = 0; i <nums.length; i++){
                int next = Math.abs(nums[i]);
                if(nums[next] < 0) return next;
                nums[next] = -1 * nums[next];
            }
        
        return nums[0];
    }
}