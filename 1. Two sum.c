/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hash_table;
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(hash_table.count(target - nums[i]) && hash_table[target - nums[i]]!=i){
                res.push_back(hash_table[target-nums[i]]);
                res.push_back(i);
                break;
            }
            else
                hash_table[nums[i]] = i;
        }
        return res;
    }
};

 /*Hash table*/
 int* twoSum(int* nums, int numsSize, int target) {
    int min = 100000;
    for(int i=0;i<numsSize;i++){
        if(nums[i]<min) min = nums[i];
    }

    int max = target - min;
    int len = max - min +1;

    int *position_table = (int *)malloc(len*sizeof(int));
    int *res = (int *)malloc(2*sizeof(int));

    for(int i=0;i<len;i++){
        position_table[i] = -1;
    }

    for(int i=0;i<numsSize;i++){
        if(nums[i]<=max){
            if(position_table[target-nums[i]-min] != -1){
                res[0]=position_table[target-nums[i]-min];
                res[1]=i;
                return res;
            }
            position_table[nums[i]-min] = i;
        }
    }
    return res;
}

/*C++  new */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash;
	    vector<int> result;
        for(int i=0; i<nums.size(); i++){
            int numbertofind = target - nums[i];
            if(hash.find(numbertofind) == hash.end())
                hash[nums[i]] = i;
            else
            {
                result.push_back(hash[numbertofind]);
                result.push_back(i);
                return result;
            }
        }
    }
};


/*C++  old */
vector<int> twoSum(vector<int> &numbers, int target)
{
    //Key is the number and value is its index in the vector.
	unordered_map<int, int> hash;
	vector<int> result;
	for (int i = 0; i < numbers.size(); i++) {
		int numberToFind = target - numbers[i];

        //if numberToFind is found in map, return them
		if (hash.find(numberToFind) != hash.end()) {
                    //+1 because indices are NOT zero based
			result.push_back(hash[numberToFind] + 1);
			result.push_back(i + 1);
			return result;
		}

        //number was not found. Put it in the map.
		hash[numbers[i]] = i;
	}
	return result;
}
