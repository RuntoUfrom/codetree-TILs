#include <iostream>
#include<algorithm>
using namespace std;
#define MAXNUM 10
class Student{
    public: 
    string name;
    int height;
    int weight;
    Student(string name, int height, int weight){
        this->name = name;
        this->height = height;
        this->weight= weight;
    }
    Student(){}
};
bool cmp(const Student &a, const Student &b){
    return a.height<b.height;
}
int main() {
    int n;
    cin>>n;
    Student arrstu[MAXNUM];
    for(int i = 0;i<n; i++){
        string tmpname;
        int tmpheight,tmpweight;
        cin>>tmpname>>tmpheight>>tmpweight;
        arrstu[i] = Student(tmpname,tmpheight,tmpweight);
    }
    sort(arrstu,arrstu+n,cmp);
    for(int i = 0;i<n; i++){
        cout<<arrstu[i].name<<" "<<arrstu[i].height<<" "<<arrstu[i].weight<<endl;
    }
    return 0;

}