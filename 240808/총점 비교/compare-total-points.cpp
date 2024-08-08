#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10

class Student{
    public:
    string name;
    int score1;
    int score2;
    int score3;
    Student(string name, int score1, int score2, int score3){
        this->name = name;
        this-> score1 = score1;
        this->score2 = score2;
        this->score3 = score3;
    }
    Student(){}
};

bool cmp(const Student &a, const Student &b){
    return(a.score1+a.score2+a.score3)<(b.score1+b.score2+b.score3);
}

int main() {
    int n;
    cin>>n; 
    Student arrStudent[MAX];
    for(int i = 0; i<n; i++){
        string tmpname;
        int tmps1,tmps2,tmps3;
        cin>>tmpname>>tmps1>>tmps2>>tmps3;
        arrStudent[i] = Student(tmpname,tmps1,tmps2,tmps3);
    }
    sort(arrStudent,arrStudent+n,cmp);
    for(int i = 0; i<n; i++){
        cout<<arrStudent[i].name<<" "
        <<arrStudent[i].score1<<" "
        <<arrStudent[i].score2<<" "
        <<arrStudent[i].score3<<endl;
    }
    return 0;
}