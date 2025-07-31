class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned="";
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }
       
     
      
         string reversed = cleaned;
        reverse(reversed.begin(), reversed.end());

        // Compare cleaned and reversed strings
        return cleaned == reversed;

        
    }
};