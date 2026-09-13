class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_dol=0,ten_dol;
        for(int x: bills){
        if(x==5){
            five_dol++;
        } else if(x==10){
            if(five_dol>0){
                five_dol--;
                ten_dol++;
            } else{
                return false;
            }
    
        } else{
            if(five_dol>0 && ten_dol>0){
                five_dol--;
                ten_dol--;
            } else if(five_dol>2){
                five_dol-=3;
            }else{
                return false;
            }
        }
        }
        return true;
    }
};