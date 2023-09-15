class Solution {
public:
    string decodeString(string s) {
        stack<string> str;
        stack<int> stint;
        string currstr="",prevstring;
        int currint=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9'){
                currint=10*currint+s[i]-'0';
            }
            else if(s[i]=='['){
                str.push(currstr);
                currstr="";
                stint.push(currint);
                currint=0;
            }
            else if(s[i]==']'){
                prevstring=currstr;
                currstr=str.top();
                str.pop();
                int times=stint.top();
                stint.pop();
                while(times--){
                    currstr+=prevstring;
                }
            }
            else{
                currstr+=s[i];
            }
        }
        return currstr;
    }
};
