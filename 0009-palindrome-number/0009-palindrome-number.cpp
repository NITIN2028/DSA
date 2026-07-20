class Solution {
public:
    bool isPalindrome(int x) {
        int orginal=x;
        int rev=0;
        
            while(x>0){
                int lastdigit=x%10;
                 if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && lastdigit > 7))
                return 0;

                rev=rev*10+lastdigit;
                x=x/10;
                

            }
            if(rev==orginal) return true;
            else return false;
        
        
    }
};