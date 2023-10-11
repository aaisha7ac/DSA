class Solution 
{
    
    // TC : O(n)
    // SC : O(n)
    
    public:
    //Function to find if there is a celebrity in the party or not.
    
    bool check(int a,int b,vector<vector<int>>& M) {
        
        if(M[a][b] == 1) { // a knows b ,here b is satisfying the condition of celebrity
            return true;
        }
        else {          // a doesn't know b , here a is satisfying the condition of celebrity
            return false;
        }
    }
    
    int celebrity(vector<vector<int> >& M, int n) {
        // code here 
        stack<int>st;
        
        for(int i = 0; i < n; i++) {
            st.push(i);
        }
        
        while(st.size() > 1) {
            
            int a = st.top();
            st.pop();
            
            int b = st.top();
            st.pop();
            
            if(check(a,b,M)) {
                st.push(b);
            }
            else {
                st.push(a);
            }
        }
        
        int ans = st.top();
        
        int count = 0;
        // row of celebrity element should be zero because celebrity doesn't know anyone
        for(int i = 0; i < n; i++) {
            if(M[ans][i] == 0) {
                count++;
            }
        }
        
        int count1 = 0;
        // column of celebrity element should be one except diagonal because everone's knows celebrity
        for(int i = 0; i < n; i++) {
            if(M[i][ans] == 1) {
                count1++;
            }
        }
        
        if(count == n && count1 == n-1) {
            return ans;
        }
        else {
            return -1;
        }
    }
};