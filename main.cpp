#include <iostream>
#include<string.h>
#include"P_function.h"
#define MAX 1000//最大人数
using namespace std;

int main() {
    Addressbooks abs;
    abs.m_Size=0;
    int select=0;
    while(1)
    {
        showMenu();
        cin>>select;
        switch (select)
        {
            case 1://添加联系人
                addPerson(&abs);
                break;
            case 2:  //显示联系人
                showPerson(&abs);
                break;
            case 3:  //删除联系人
                deletePerson(&abs);
                break;
            case 4:  //查找联系人
                findPerson(&abs);
                break;
            case 5:  //修改联系人
                modifyPerson(&abs);
                break;
            case 6:  //清空联系人
                cleanPerson(&abs);
                break;
            case 0:  //退出通讯录
                cout << "欢迎下次使用" << endl;
                system("pause");
                return 0;
                break;
            default:
                break;
        }
    }

    system("pause");
    return 0;
}
