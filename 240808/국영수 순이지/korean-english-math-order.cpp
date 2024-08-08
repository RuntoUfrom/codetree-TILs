#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 10
class Student{  
    public :
    string name;
    int kor;
    int eng;
    int math;
    Student(string name, int kor, int eng, int math){
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->math = math;
    }
    Student(){}
};

bool cmp(const Student & a, const Student &b){
    if(a.kor==b.kor){
        if(a.eng==b.eng){
            return a.math>b.math;
        }else{
            return a.eng>b.eng;
        }
    }
    else{
        return a.kor>b.kor;
    }
}

int main() {
    int n;
    cin>>n;
    Student arrscore[MAX];
    for(int i = 0; i<n; i++){
        string tmpname;
        int tmpkor,tmpeng,tmpmath;
        cin>>tmpname>>tmpkor>>tmpeng>>tmpmath;
        arrscore[i] = Student(tmpname,tmpkor,tmpeng,tmpmath);
    }
    sort(arrscore,arrscore+n,cmp);
    for(int i = 0; i<n; i++){
        cout<<arrscore[i].name<<" "<<arrscore[i].kor<<" "<<arrscore[i].eng<<" "<<arrscore[i].math<<endl;
    }
    return 0;
}