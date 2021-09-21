class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    
		    int l=s.length();	    
	    
		    vector<string> ans;
		    
		    int power_set=pow(2,l);
		    
		    //bit manipulation use kiya 
		    
		    for(int i=0;i<power_set;i++)
		    {
		        string x;
		        
		        //ek ek karke pernutation nikalo
		        for(int j=0;j<l;j++)
		        {
		            //konsi konsi bits set hai vo hi print karo
		            if(i &(1<<j))
		            {
		                x=x+s[j];
		            }
		        }
		        
		        if(i!=0)
		        {
		            ans.push_back(x);
		        }
		     }
		     
		     sort(ans.begin(),ans.end());
		    
		    return ans;
		}
};
