#include <iostream>
#include<string.h>
#include"P_function.h"
#define MAX 1000//�������
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
            case 1://�����ϵ��
                addPerson(&abs);
                break;
            case 2:  //��ʾ��ϵ��
                showPerson(&abs);
                break;
            case 3:  //ɾ����ϵ��
                deletePerson(&abs);
                break;
            case 4:  //������ϵ��
                findPerson(&abs);
                break;
            case 5:  //�޸���ϵ��
                modifyPerson(&abs);
                break;
            case 6:  //�����ϵ��
                cleanPerson(&abs);
                break;
            case 0:  //�˳�ͨѶ¼
                cout << "��ӭ�´�ʹ��" << endl;
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
