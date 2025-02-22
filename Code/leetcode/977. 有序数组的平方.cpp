/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int i=0,j=numsSize-1;
    int k=j;
    int* a = malloc(sizeof(int) * numsSize);
    while(i<=j)
    {
        if(nums[i]*nums[i]<=nums[j]*nums[j])
        {
            a[k--]=nums[j]*nums[j];
            j--;
        }
        else
        {
            a[k--]=nums[i]*nums[i];
            i++;
        }
    }
    *returnSize=numsSize;
    return a;
}
