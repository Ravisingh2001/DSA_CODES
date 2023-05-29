//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            int N = Integer.parseInt(read.readLine());
            String[] Dictionary=read.readLine().split(" ");
            String Pattern=read.readLine();
            Solution ob = new Solution();
            ArrayList <String> ans=ob.CamelCase(N,Dictionary,Pattern);
            for(String u:ans)
             System.out.print(u+" ");
            System.out.println(); 
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
      ArrayList<String> CamelCase(int N,String[] d,String p){
        //code here
        ArrayList<String> list = new ArrayList<>();
        String value;
        String regex = "^" + p + ".*";
        int patternLength = p.length();
        for(String i : d)
        {
            if(i.length() >= patternLength)
            {
                value = i.replaceAll("[a-z]", "");
                if(value.length() >= patternLength)
                {
                    if(value.matches(regex))
                    {
                        list.add(i);
                    }
                }
            }
        }
        if(list.size() == 0)
        {
            list.add("-1");
        } else 
        {
            Collections.sort(list);
        }
        return list;
    }
}