#include <iostream>
#include <string>
using namespace std;

class Human{
    public:
    string codename;
    int score;
    Human(string codename, int score){
        this->codename = codename;
        this->score = score;
    }
    Human(){}
};

int main() {
    Human humans[5];
    int idx = 0;
    for(int i = 0; i<5; i++){
        string tmpcode;
        int tmpscore;
        cin>>tmpcode>>tmpscore;
        humans[i] = Human(tmpcode,tmpscore);
        if(humans[i].score<humans[idx].score){
            idx = i;
        }
    }
    cout<<humans[idx].codename<<" "<<humans[idx].score;

    return 0;
}