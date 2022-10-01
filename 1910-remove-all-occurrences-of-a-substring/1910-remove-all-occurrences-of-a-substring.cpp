class Solution {
public:
    string removeOccurrences(string s, string part) {
        int loc = s.find(part);
        while(s.length() != 0 && loc < s.length()){
            s.erase(loc,part.length());
            loc = s.find(part);
        }
        return s;
    }
};