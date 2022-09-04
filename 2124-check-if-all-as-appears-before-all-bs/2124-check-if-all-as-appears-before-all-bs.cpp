class Solution {
public:
    bool checkString(string s) {
        bool check = true;
        
        for(auto c : s){
            if(c == 'b')
                check = false;
            if(check == false && c == 'a')
                return false;
        }
        
        return true;
    }
};