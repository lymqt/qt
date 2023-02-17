#include<iostream>
#include<string>
using namespace std;
class Student{
public:
    string name;
    string id;
    
    void input(){
        cout << "请输入姓名："<<" ";
        cin >> name;
        cout << endl;
        cout << "请输入学号:" << " ";
        cin >> id;
        cout << endl;
        cout << "输入完成！" << endl;
    }
    void show(){
        if(name!=""){
            cout << "学生姓名：" <<name<< endl;
            cout << "学生学号：" <<id<< endl;
        }
        else{
            cout << "未输入信息，请输入！" << endl;
            input();
            show();
        }
    }
};
int main()
{
    //cout << "Hello World!" << endl;
    Student s1;
    //s1.input();
    s1.show();
    return 0;
}