class Solution {
public:
    int equalSubstring(string s, string t, int maxcost) {
       int n=s.size();
       int start=0,curr_cost=0,max_len=0;
       for(int end=0;end<n;++end){
        curr_cost+=abs(s[end]-t[end]);
        while(curr_cost>maxcost){
            curr_cost-=abs(s[start]-t[start]);
            ++start;
        }
        max_len=max(max_len,end-start+1);
       } 
       return max_len;
    }
};