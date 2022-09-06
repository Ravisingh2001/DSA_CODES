class Solution {
    public int[] twoSum(int[] nums, int target) {
       /* for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                if(nums[j]==target-nums[i]){
                    return new int[]{i,j};
                }
            }
        }
        return null;
        
    }
}*/
        int[] result=new int[2];
        Map map=new HashMap();
        for(int i=0;i<nums.length;i++){
            if(!map.containsKey(target -nums[i])){
                map.put(nums[i],i);
            }
            else{
                result[1]=i;
                result[0]=(int)map.get(target-nums[i]);
                return result;
            }
        }
        return result;}}