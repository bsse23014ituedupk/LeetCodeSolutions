class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int freq[256]={0};  // ASCII char
        int maxlen=0;
        while(right<s.length()){
         freq[s[right]]++;

         // if duplicate found shrink the window
         while(freq[s[right]]>1){
            freq[s[left]]--;
            left++;
         }
         // update maxLength 
         int currentLength=right-left+1;
         if(currentLength>maxlen){
            maxlen=currentLength;
         }
         right++;
        }
       return maxlen;
    }
};