class Solution {
public:
    bool isAnagram(string s, string t) {
        int freqArr[256]={};
        for(int i=0;i<s.length();i++){
            freqArr[s[i]]++;
        }
        for(int i=0;i<t.length();i++){
            freqArr[t[i]]--;
        }
        for(int i=0;i<256;i++){
            cout<<"hello"<<endl;
            if(freqArr[i]!=0){
                return false;
            }
        }
        return true;
    }
};