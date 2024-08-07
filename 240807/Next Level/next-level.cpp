#include <iostream>
#include <string>
using namespace std;

class Introduce{
    public:
    string userid;
    int level;
    Introduce(string userid = "codetree", int level = 10){
        this->userid = userid;
        this->level = level;
    }
};

int main() {
    Introduce u1 = Introduce();
    string id;
    int lv;
    cin>>id>>lv;
    Introduce u2 = Introduce(id, lv);
    cout<<"user "<<u1.userid<<" lv "<<u1.level<<endl;
    cout<<"user "<<u2.userid<<" lv "<<u2.level;
    return 0;
}