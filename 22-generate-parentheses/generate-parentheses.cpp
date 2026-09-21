class Solution {
public:
vector<string> ans;
void gen(int o,int c,string s){
    if(o==0&&c==0){
        ans.push_back(s);
        return;
    }
    if(o>0){
        string temp=s;
        temp.push_back('(');
        gen(o-1,c,temp);
    }
    if(o<c){
        s.push_back(')');
        gen(o,c-1,s);

    }
}
    vector<string> generateParenthesis(int n) {
        gen(n,n,"");
        return ans;
    }
};