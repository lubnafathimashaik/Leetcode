import java.util.HashMap;

class Solution {

    public boolean containsNearbyDuplicate(int[] nums, int k) {

        // Create HashMap
        // Key = number
        // Value = index
        HashMap<Integer, Integer> map = new HashMap<>();


        // Traverse the array
        for(int i = 0; i < nums.length; i++) {


            // Check whether current number is already present
            if(map.containsKey(nums[i])) {


                // Get previous index of this number
                int previousIndex = map.get(nums[i]);


                // Check distance
                if(i - previousIndex <= k) {

                    return true;
                }
            }


            // Store/update latest index
            map.put(nums[i], i);
        }


        return false;
    }
}