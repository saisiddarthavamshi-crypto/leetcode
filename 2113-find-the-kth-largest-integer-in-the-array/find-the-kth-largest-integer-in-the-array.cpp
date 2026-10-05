class Solution {
public:
 struct compare{
    bool operator()(const string &a,const string &b){
    if(a.length()!=b.length()){
        return a.length()>b.length();
    }
    return a>b;
    }
 };
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string>,compare>minheap;
        for(auto i:nums){
            minheap.push(i);
            if(minheap.size()>k){
                minheap.pop();

            }
        }
        return minheap.top();
    }
};