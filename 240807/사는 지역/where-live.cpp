#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

class Resident{
    public:
        string name;
        string num;
        string local;
    Resident(string name,string num, string local){
        this-> name = name;
        this->num = num;
        this->local = local;
    }
    Resident(){}
};

int main() {
    int n;
    Resident arrResi[10];
    cin>>n;
    for(int i = 0; i<n; i++){
        string tmp1,tmp2,tmp3;
        cin>>tmp1>>tmp2>>tmp3;
        arrResi[i] = Resident(tmp1,tmp2,tmp3);
    }
    int idx = 0;
    for(int i = 0; i<n; i++){
        if(arrResi[idx].name.compare(arrResi[i].name)<0){
            idx = i;
        }
    }
    cout<<"name "<<arrResi[idx].name<<endl;
    cout<<"addr "<<arrResi[idx].num<<endl;
    cout<<"city "<<arrResi[idx].local;
    return 0;
}