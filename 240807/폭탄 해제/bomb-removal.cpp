#include <iostream>
#include<string>
using namespace std;

class Bom{
    public:
    string code;
    string color;
    int time;
    Bom(string code, string color, int time){
        this->code = code;
        this->color = color;
        this->time = time;
    }
};

int main() {
    string str1,str2;
    int t;
    cin>>str1>>str2>>t;
    Bom b = Bom(str1,str2,t);
    cout<<"code : "<<b.code<<endl;
    cout<<"color : "<<b.color<<endl;
    cout<<"second : "<<b.time;
    return 0;
}