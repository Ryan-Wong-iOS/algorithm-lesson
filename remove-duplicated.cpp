//题目链接 https://leetcode-cn.com/problems/remove-duplicates-from-sorted-array/

int removeDuplicates(int* nums, int numsSize){
    if (numsSize < 1) return numsSize;
    int n = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[n] != nums[i]) {
            n++;
            nums[n] = nums[i];
        }
    }
    return n+1;
}