class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x%10==0 && x!=0)) return false; // negative numbers are not palindrome
        
        int rev=0;
        while(x>rev){
            int num=x%10;
            rev=rev*10+num;
            x=x/10;
        }
        return (rev==x || x == rev / 10);
    }
};