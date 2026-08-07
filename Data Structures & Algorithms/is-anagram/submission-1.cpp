class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq1 ,freq2;

        for(char it : s) 
            freq1[it]++;
        for(char it : t) 
            freq2[it]++;

        for(char it : s) {
            if(freq1[it]==freq2[it])
                {}
            else
                return false;
        }
        for(char it : t) {
            if(freq1[it]==freq2[it])
                {}
            else
                return false;
        }
        return true; 
    }
};
