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
        int left=0,right=cleaned.size()-1;
         while (left < right) {
            if (cleaned[left] != cleaned[right]) {
                return false;
            }
            ++left;
            --right;
        }

        return true;

        // Compare cleaned and reversed strings
        return cleaned == reversed;

        
    }
};