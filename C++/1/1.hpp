using namespace std;

class Solution {
    // Explaination: Concept: The complement represents the value that, when added to the current element, results in the target sum. Mathematically, if a and b are two numbers, and target is the desired sum, the b = target - a.
    public:
        // Public method twoSum with parameters ArrayList of Type ints and the target int
        vector<int> twoSum(vector<int>& nums, int target) {
            // Creating a new unordered hash map with key value int, int
            unordered_map<int, int> numMap;
            // getting the amount of elements in the array
            int n = nums.size();

            // Looping through size of array
            for (int i = 0; i < n; i++) {

                // Target minus the index of the array at counter. The complement represents the value that, when added to the current element, would result in the targer sum.
                int complement = target - nums[i];

                // unordered_map.count returns 1 or 0 depending on if the key exists in the map.
                if (numMap.count(complement)) {
                    // return vector and index
                    return {numMap[complement], i};
                }
                numMap[nums[i]] = i;
            }

            return {}; // No solution found
        }
};

// nums = [3,2,4], target = 6
// First pass: 6-3 = 3 numMap<3, 0>
// Second pass: 6-2 = 4 numMap<2, 1>
// Third pass: 6-4 = 2 numMap<4, 2>
// Since two is already present in the numMap as a complement, so a solution is found.
//
// By calculating the complement and checking its existence in the numMap the code efficiently identifies pairs of elements that sum up to the target value. 
