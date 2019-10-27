using System;

public class GFG{
	static public void Main (){
	    int t;
	    t = Convert.ToInt32(Console.ReadLine());
	    for (int i = 0; i < t; i += 1)
	    {
	        int n;
	        n = Convert.ToInt32(Console.ReadLine());
	        string str;
	        str = Console.ReadLine();
	        //Console.WriteLine(str + " " + n);
	        if(n <= 2)
	        {
	            Console.WriteLine(0);
	        }
	        else
	        {
    	        Int64 ans = 0;
    	        for (int j = 0; j < n;)
    	        {
    	            char ch = str[j];
    	            int k;
    	            bool flag = false;
    	            for (k = j+1; k < n; k += 1)
    	            {
    	                if((ch == 'r' && str[k] != 'g') || ( ch == 'g' && str[k] != 'b') || (ch == 'b' && str[k] != 'r'))
    	                {
    	                    flag = true;
    	                    break;
    	                }
    	                ch = str[k];
    	            }
    	            Int64 len = k - j;
    	            if ((k == n-1) && (flag != true))
    	            {
    	                len = (k-j+1);
    	            }   
    	            //Console.WriteLine(len + " " + j + " " + k + " " + n + " " + flag);
    	            ans += ((len - 2)*( len - 1))/2;
    	            j = k;
    	        }
    	        
    	        Console.WriteLine(ans);
	        }
	    }
	}
}