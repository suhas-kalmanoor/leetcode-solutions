int removeDuplicates(int* nums, int numsSize) {
    int i;
    int write=1;
    for(i=1;i<numsSize;i++){
        if(nums[write-1]!=nums[i])
        {
            nums[write]=nums[i];
            write++;
        }


    }
    return write;
}