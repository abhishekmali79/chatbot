#include<stdio.h>

int main() {
    int nums[] = {1,1,1,1,2,2,2,2,3,3,3,6,6,6,7,8,9,10,11,11};
    int j = 1, count = 1, k = 1;
    int n = (sizeof(nums)/sizeof(nums[0]))-1;
    
    for(int i=1;i<=n;i++){
        
        if(nums[i]==nums[i-1]){
            if(count<2){
                nums[j]=nums[i];
                count++;
                j++;
                k++;
            }
            else{
                continue;
            }
        }
        else if(nums[i]!=nums[i-1]){
            nums[j]=nums[i];
            count=1;
            j++;
            k++;
        }
    }
    for(int i=0;i<=k-1;i++){
        printf("%d ",nums[i]);
    }
    return 0;
}
