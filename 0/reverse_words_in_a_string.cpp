public class Solution 
{
	public static String reverseString(String str) 
	{
		//Write your code here
		String arr[]=str.split(" ");
		StringBuilder sb=new StringBuilder("");
		for(int j=arr.length-1;j>=0;j--){
			sb.append(arr[j]+" ");
			

		}
		String re= sb.toString();
		return re;
	}
}
