class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> freq1 ,freq2;

        for(char it : s) 
            freq1[it]++;
        for(char it : t) 
            freq2[it]++;

        return freq1 == freq2;
    }
};
