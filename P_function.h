#ifndef UNTITLED_P_FUNCTION_H
#define UNTITLED_P_FUNCTION_H
#define MAX 1000
using namespace std;
struct Person
{
    string m_Name;
    int m_Sex;
    int m_Age;
    string m_Phone;
    string m_Addr;
};

struct Addressbooks
{
    struct Person personArray[MAX];
    int m_Size;
};

void showMenu();

void addPerson(Addressbooks *abs);

void showPerson(Addressbooks * abs);

int isExist(Addressbooks * abs, string name);

void deletePerson(Addressbooks * abs);

void findPerson(Addressbooks * abs);

void modifyPerson(Addressbooks * abs);

void cleanPerson(Addressbooks * abs);

#endif //UNTITLED_P_FUNCTION_H
