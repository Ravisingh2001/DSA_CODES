class Solution {
    public List<Integer> sequentialDigits(int low, int high) {
       String digits="123456789";
     List<Integer>result=new ArrayList<>();
        for(int length=1; length<=9;length++){
            
            
            for(int i=0;i+length<=digits.length(); i++){
               String subStr=digits.substring(i,i+length);
                
                
                int value=Integer.parseInt(subStr);
                if (value>=low && value<=high){
                    result.add(value);
                    
                }
            }
        } return result;
    }
}