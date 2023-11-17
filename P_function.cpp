#include <iostream>
#include <string.h>
#include "P_function.h"
using namespace std;

void showMenu()
{
    cout << "***************************" << endl;
    cout << "*****  1�������ϵ��  *****" << endl;
    cout << "*****  2����ʾ��ϵ��  *****" << endl;
    cout << "*****  3��ɾ����ϵ��  *****" << endl;
    cout << "*****  4��������ϵ��  *****" << endl;
    cout << "*****  5���޸���ϵ��  *****" << endl;
    cout << "*****  6�������ϵ��  *****" << endl;
    cout << "*****  0���˳�ͨѶ¼  *****" << endl;
    cout << "***************************" << endl;
}

void addPerson(Addressbooks *abs)
{
    //�жϵ绰���Ƿ�����
    if (abs->m_Size == MAX)
    {
        cout << "ͨѶ¼�������޷����" << endl;
        return;
    }
    else
    {
        //����
        string name;
        cout << "������������" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        cout << "�������Ա�" << endl;
        cout << "1 -- ��" << endl;
        cout << "2 -- Ů" << endl;

        //�Ա�
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "������������������";
        }

        //����
        cout << "���������䣺" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        //��ϵ�绰
        cout << "��������ϵ�绰��" << endl;
        string phone = "";
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        //��ͥסַ
        cout << "�������ͥסַ��" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        //����ͨѶ¼����
        abs->m_Size++;

        cout << "��ӳɹ�" << endl;
        system("pause");
        system("cls");
    }
}

//2����ʾ������ϵ����Ϣ
void showPerson(Addressbooks * abs) {
    if (abs->m_Size == 0) {
        cout << "��ǰ��¼Ϊ��" << endl;
    } else {
        for (int i = 0; i < abs->m_Size; i++) {
            cout << "������" << abs->personArray[i].m_Name << "\t";
            cout << "�Ա�" << (abs->personArray[i].m_Sex == 1 ? "��" : "Ů") << "\t";
            cout << "���䣺" << abs->personArray[i].m_Age << "\t";
            cout << "�绰��" << abs->personArray[i].m_Phone << "\t";
            cout << "סַ��" << abs->personArray[i].m_Addr << endl;
        }
    }

    system("pause");
    system("cls");
}

//�ж��Ƿ���ڲ�ѯ����Ա�����ڷ���������������λ�ã������ڷ���-1
int isExist(Addressbooks * abs, string name)
{
    for (int i = 0; i < abs->m_Size; i++)
    {
        if (abs->personArray[i].m_Name == name)
        {
            return i;
        }
    }
    return -1;
}

//3��ɾ��ָ����ϵ����Ϣ
void deletePerson(Addressbooks * abs)
{
    cout << "��������Ҫɾ������ϵ��" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1)
    {
        for (int i = ret; i < abs->m_Size; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];
        }
        abs->m_Size--;
        cout << "ɾ���ɹ�" << endl;
    }
    else
    {
        cout << "���޴���" << endl;
    }

    system("pause");
    system("cls");
}

//4������ָ����ϵ����Ϣ
void findPerson(Addressbooks * abs)
{
    cout << "��������Ҫ���ҵ���ϵ��" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1)
    {
        cout << "������" << abs->personArray[ret].m_Name << "\t";
        cout << "�Ա�" << abs->personArray[ret].m_Sex << "\t";
        cout << "���䣺" << abs->personArray[ret].m_Age << "\t";
        cout << "�绰��" << abs->personArray[ret].m_Phone << "\t";
        cout << "סַ��" << abs->personArray[ret].m_Addr << endl;
    }
    else
    {
        cout << "���޴���" << endl;
    }

    system("pause");
    system("cls");

}

//5���޸�ָ����ϵ����Ϣ
void modifyPerson(Addressbooks * abs)
{
    cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
    string name;
    cin >> name;

    int ret = isExist(abs, name);
    if (ret != -1)
    {
        //����
        string name;
        cout << "������������" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;

        cout << "�������Ա�" << endl;
        cout << "1 -- ��" << endl;
        cout << "2 -- Ů" << endl;

        //�Ա�
        int sex = 0;
        while (true)
        {
            cin >> sex;
            if (sex == 1 || sex == 2)
            {
                abs->personArray[ret].m_Sex = sex;
                break;
            }
            cout << "������������������";
        }

        //����
        cout << "���������䣺" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[ret].m_Age = age;

        //��ϵ�绰
        cout << "��������ϵ�绰��" << endl;
        string phone = "";
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;

        //��ͥסַ
        cout << "�������ͥסַ��" << endl;
        string address;
        cin >> address;
        abs->personArray[ret].m_Addr = address;

        cout << "�޸ĳɹ�" << endl;
    }
    else
    {
        cout << "���޴���" << endl;
    }

    system("pause");
    system("cls");

}

//6�����������ϵ��
void cleanPerson(Addressbooks * abs)
{
    abs->m_Size = 0;
    cout << "ͨѶ¼�����" << endl;
    system("pause");
    system("cls");
}