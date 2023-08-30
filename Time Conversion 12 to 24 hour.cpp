/*Given a time in -hour AM/PM format, convert it to military (24-hour) time.

Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
- 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

Example

s='12:01:00PM'
Return '12:01:00'.

s='12:01:00AM'
Return '00:01:00'.*/


#include <bits/stdc++.h>
using namespace std;

string timeConversion(string s) {
    string res;
    string time_hour=s.substr(0,2);
    int hour=stoi(time_hour);
    if(s[8]=='P'){
        if(hour==12){
            return s.substr(0,8);
        }
        int pm=hour+12;
        string newh=to_string(pm);
        res=newh.append(s.substr(2,6));
        return res;
        
    }
    else{
        if(hour==12){
            string newh="00";
            res=newh.append(s.substr(2,6));
            return res;
        }   
        else{
            return s.substr(0,8);
        }
    }
}


int main(){
    string s;
    cout<<"Enter the string of the format: XX:XX:XXAM/PM"<<endl;
    getline(cin,s);
    string ans=timeConversion(s);
    cout<<"The time in 24 hour format is: "<<ans<<endl;
    return 0;
}