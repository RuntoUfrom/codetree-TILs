#include <iostream>
#include<string>
using namespace std;

class Spy{
    public:
        string secretCode;
        string meetingPoint;
        int time;
    Spy(string secretCode,string meetingPoint, int time){
        this->secretCode = secretCode;
        this->meetingPoint = meetingPoint;
        this-> time = time;
    }
};

int main() {
    string str1,str2;
    int t;
    cin>>str1>>str2>>t;
    Spy s1 = Spy(str1,str2,t);
    cout<<"secret code : "<<s1.secretCode<<endl;
    cout<<"meeting point : "<<s1.meetingPoint<<endl;
    cout<<"time : "<<s1.time;
    return 0;
}