class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        for(char c:s){
            if(c=='('|| c=='[' || c=='{'){
                a.push(c);
            }else{
                if(a.empty()){
                    return false;
                }
            char c1=a.top();
            a.pop();
           
            if(c==')'){
                if(c1!='('){
                    return false;
                }
            }
             if(c=='}'){
                if(c1!='{'){
                    return false;
                }
            } if(c==']'){
                if(c1!='['){
                    return false;
                }
            }
            }
        }   
        return a.empty(); 
    }
};