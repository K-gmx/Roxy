void moveZeroes(int* nums, int numsSize) {
    int star=0,i;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=0)
        {
            nums[star++]=nums[i];
        }
    }
    for(star;star<numsSize;star++)
    {
        nums[star]=0;
    }
}
