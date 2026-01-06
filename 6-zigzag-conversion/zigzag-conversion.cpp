class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>s.size()){
            return s;
        }
        vector<string>Rows(numRows);
        int currow=0;
        bool down=false;

        for(char c:s){
            Rows[currow]+=c;

            if(currow==numRows-1 || currow==0){
                down= !down;
            }
            currow += down ? 1 : -1;
        }
        string ans;
        for(string &row:Rows){
            ans+=row;
        }return ans;

    }
};