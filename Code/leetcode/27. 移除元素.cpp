int removeElement(int* nums, int numsSize, int val) {
    int *k=nums,a=0;
    for(;a<numsSize;a++)
    {
        if(nums[a]!=val)
        {
            *k++=nums[a];
        }
    }
    return k-nums;
}
