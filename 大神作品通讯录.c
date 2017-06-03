#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<conio.h>
#include<Windows.h>
//#include<windows.h>
using namespace std;
string ID;//����Ψһ��
class Person
{
protected:
    string No; //ѧ��
    string Age;//����
    string QQ;//QQ����
    char Name[20]; //����
    char Sex[10];  //�Ա�
    string Tel; //�绰����
    char domitory[25];//����
    char canteen[25];//��ϲ����ʳ��
    char sports[100];//��ϲ�����˶�
    char subject[50];//��ϲ���Ŀ�Ŀ
    Person *next;
public:
    Person(string ID,char *Name,char*Sex,string Age,string Tel,char*domitory,string QQ,char*canteen,char*sports,char*subject)
    {
        strcpy(this->Name,Name);
        strcpy(this->Sex,Sex);
        this->QQ=QQ;
        strcpy(this->domitory,domitory);
        strcpy(this->canteen,canteen);
        strcpy(this->sports,sports);
        strcpy(this->subject,subject);
        this->Tel=Tel;
        this->No=ID;
        this->Age=Age;
    }
    friend class Manage;
};
class Manage
{
private:
    Person *person;
public:
    Manage()
    {
        person=0;
        Load();
    }
    ~Manage()
    {
        Person *p;
        p=person;
        while(p)
        {
            p=p->next;
            delete person;
            person=p;
        }
        person=0;
    }
    void Find(char Name[20]);//����������
    void Find(string ID);//����Ų���
    void Add(); //��Ӽ���Ϣ
    void Delete(); //ɾ����Ϣ
    void Modify(string ID); //�޸���Ϣ
    void Query(); //��ѯ��Ϣ
    void TJ(); //����ļ���Ϣ
    void Save(); //��������
    void Load(); //��������
    void Look();//Ԥ��
    void DesTory();
    void Output(Person *p)
    {
        cout<<"\t\t��    ѧ��    ����"<<p->No<<endl;
        cout<<"\t\t��    ����    ����"<<p->Name<<endl;
        cout<<"\t\t��    �Ա�    ����"<<p->Sex<<endl;
        cout<<"\t\t��    ����    ����"<<p->Age<<endl;
        cout<<"\t\t��  ��ϵ�绰  ����"<<p->Tel<<endl;
        cout<<"\t\t��   QQ����   ����"<<p->QQ<<endl;
        cout<<"\t\t��  �����ַ  ����"<<p->domitory<<endl;
        cout<<"\t\t����ϲ���ķ��á���"<<p->canteen<<endl;
        cout<<"\t\t����ϲ���Ŀ�Ŀ����"<<p->subject<<endl;
        cout<<"\t\t����ϲ�����˶�����"<<p->sports<<endl;
        cout<<endl;
    }
};
void Manage::Add()
{
    system("cls");
    Person *p,*p2; //�½��ָ��
    string No,Age,Tel,QQ;
    char Name[20],Sex[10],domitory[25],canteen[25],sports[100],subject[50];
    char c;
    cout<<"\n\t   �� ����ѧ��ͨѶ¼ ��\n";
    cout<<"================================================"<<endl;
    //����ѧ����Ϣ
    cout<<"����ѧ��:        \t";
    cin>>No;
    cout<<endl;
    {
        Person *p1;
        p1=person;
        while(p1)
        {
            if(p1->No==No)
            {
                break;
            }
            else
            {
                p1=p1->next;
            }
        }
        if(p1!=NULL)
        {
            cout<<"��ѧ���Ѵ���,�Ƿ��޸ĸ�ѧ����Ϣ(Y/N) "<<endl;
            cin>>c;
            if(toupper(c)=='Y')
            {
                cout<<"��ѧ����ϢΪ:"<<endl;
                Find(No);
                cout<<endl;
                Modify(No);
                return ;
            }
            else
                return ;
        }
    }
    cout<<"��������:        \t";
    cin>>Name;
    cout<<endl;
    cout<<"�����Ա�:        \t";
    cin>>Sex;
    cout<<endl;
    cout<<"��������:        \t";
    cin>>Age;
    cout<<endl;
    cout<<"����QQ����:      \t";
    cin>>Tel;
    cout<<endl;
    cout<<"���������ַ:    \t";
    cin>>domitory;
    cout<<endl;
    cout<<"������ϲ���ķ���:\t";
    cin>>canteen;
    cout<<endl;
    cout<<"������ϲ���Ŀ�Ŀ:\t";
    cin>>subject;
    cout<<endl;
    cout<<"������ϲ���������˶�:\t";
    cin>>sports;
    cout<<endl;
    p=new Person(No,Name,Sex,Age,Tel,domitory,QQ,canteen,sports,subject);
    p->next=0;
    //ѧ������������
    if(person) //���Ѿ����ڽ��
    {
        p2=person;
        while(p2->next) //����β���
        {
            p2=p2->next;
        }
        p2->next=p; //����
    }
    else //�������ڽ��(���)
    {
        person=p; //����
    }
    system("cls");
    cout<<"\t\t\t����ϵ���ѳɹ���ӡ�\n"<<endl;
    cout<<"\t\t�Ƿ���������ϵ�ˣ�(Y/N)  "<<endl;
    cin>>c;
    if(toupper(c)=='Y')
            {
                Add();
                return ;
            }
    else
        return ;
}
void Manage::Delete() //ɾ����Ա
{
    system("cls");
    char c;
    string No;
    cout<<"\n\t�� ɾ����Ϣ ��\n";
    cout<<"===================================================";
    cout<<"����Ҫɾ����ѧ��ID:\t";
    cin>>No;
    cout<<endl;
    //����Ҫɾ���Ľ��
    Person *p1,*p2;
    p1=person;
    while(p1)
    {
        if(p1->No==No)
            break;
        else
        {
            p2=p1;
            p1=p1->next;
        }
    }
    //ɾ�����
    if(p1!=NULL)//���ҵ���㣬��ɾ��
    {
        cout<<"��Ҫɾ����ѧ������Ϣ����:\n"<<endl;
        Output(p1);
        cout<<"ȷ���Ƿ�ɾ��(Y/N): ";
        cin>>c;
        if(toupper(c)!='Y')
            return;
    //  system("pause");
        if(p1==person) //��Ҫɾ���Ľ���ǵ�һ�����
        {
            person=p1->next;
            delete p1;
        }
        else //��Ҫɾ���Ľ���Ǻ������
        {
            p2->next=p1->next;
            delete p1;
        }
        cout<<"\t\t����ϵ���ѳɹ�ɾ����\n";
        cout<<"�Ƿ����ɾ��(Y/N)  "<<endl;
        cin>>c;
        if(toupper(c)=='Y')
            {
                Delete();
                return ;
            }
        else
            return ;
    }
    else //δ�ҵ����
        cout<<"\n\t\tOops��ϵͳδ���ҵ���ͬѧ\n";
    getch();//�ȴ��������������
}
void Manage::Modify(string ID)
{
    Person *p1;
    char c;
    p1=person;
    while(p1)
    {
        if(p1->No==ID)
            break;
        else
        {
            p1=p1->next;
        }
    }
    if(p1!=NULL)//���ҵ����
    {
        system("cls");
        cout<<"��Ҫ�޸ĵ�ѧ������Ϣ����:\n"<<endl;
        Output(p1);
        do
        {
            cout<<"1.�޸�����       2.�޸��Ա�       3 �޸�����\n"<<endl;
            cout<<"4.�޸ĵ绰����   5.�޸������ַ   6.�޸�QQ����\n"<<endl;
            cout<<"7.�޸���ϲ������ 8.�޸���ϲ���˶� 9.�޸���ϲ����Ŀ\n"<<endl;
            cout<<"0.�˳��޸�\n"<<endl;
            cout<<"��ѡ��(0-9)Ҫ�޸ĵ���Ϣ:\n"<<endl;
            cin>>c;
            if(c!='0')
            cout<<"�������µ���Ϣ:  ";
            switch(c)
            {
            case '1': cin>>p1->Name; break;
            case '2': cin>>p1->Sex; break;
            case '3': cin>>p1->Age; break;
            case '4': cin>>p1->Tel; break;
            case '5': cin>>p1->domitory; break;
            case '6': cin>>p1->QQ; break;
            case '7': cin>>p1->canteen; break;
            case '8': cin>>p1->sports; break;
            case '9': cin>>p1->subject; break;
            default: break;
            }
        }while(c!='0');
            system("cls");
            cout<<"\t  ����ϵ���ѳɹ��޸ġ�\n"<<endl;
    cout<<"�Ƿ�����޸�(Y/N):  "<<endl;
    cin>>c;
    if(toupper(c)=='Y')
    {
        cout<<"������Ҫ�޸���Ա��ID:  ";
        cin>>ID;
        cout<<endl;
        Modify(ID);
        return ;
    }
    else
        return ;
    }
    else //δ�ҵ����
        cout<<"δ�ҵ���ѧ��!\n";
    getch();//��ͣ(��ȴ��㰴����������ټ���ִ���������䣻)
}
void Manage::Save() //����д�뵽�ļ�
{
    ofstream fPerson("Person.txt",ios::out);
    char c;
    cout<<"\n����Ҫ��������,�Ƿ����?��[Y/N]:";
    cin>>c;
    if(toupper(c)!='Y')
        return;
    Person *p=person;
    while(p)
    {
        fPerson<<p->No<<" "<<p->Name<<" "<<p->Sex<<" "<<p->Age<<" "<<p->Tel<<" "<<p->domitory<<" "<<p->QQ<<" "<<p->canteen<<" "<<p->sports<<" "<<p->subject<<endl;
        p=p->next;
    }
    fPerson.close();
    cout<<"\n���ѳɹ��������ݡ�\n";
    system("pause");
}
void Manage::Load() //���ݶ���
{
    ifstream fPerson;
    Person *p=person;
    string No,Age,Tel,QQ;
    char Name[20],Sex[10],domitory[25],canteen[25],sports[100],subject[50];
    fPerson.open("person.txt",ios::in);
    fPerson>>No>>Name>>Sex>>Age>>Tel>>domitory>>QQ>>canteen>>sports>>subject;

    while(fPerson.good())//�ļ��򿪳ɹ�ʱ
    {
        p=new Person(No,Name,Sex,Age,Tel,domitory,QQ,canteen,sports,subject);
        p->next=0;
        //����������
        if(person) //���Ѿ����ڽ��
        {
            Person *p2;
            p2=person;
            while(p2->next) //����β���
            {
                p2=p2->next;
            }
            p2->next=p; //����
        }
        else //�������ڽ��(���)
        {
            person=p; //����
        }
        fPerson>>No>>Name>>Sex>>Age>>Tel>>domitory>>QQ>>canteen>>sports>>subject;
    }
    fPerson.close();
}
void Manage::Find(string ID)
{
    Person *p1;
    p1=person;
    while(p1)
    {
        if(p1->No==ID)
            break;
        else
        {
            p1=p1->next;
        }
    }
    if(p1!=NULL)
    {
        Output(p1);
    }
    else
        cout<<"\n\t\tOops��ϵͳδ���ҵ���ͬѧ\n"<<endl;
}

void Manage::Find(char Name[20])
{
    Person *p1;
    int count=0;
    p1=person;
    while(p1)
    {
        if(strcmp(p1->Name,Name)==0)
        {
            count++;
            Output(p1);
        }
            p1=p1->next;
    }
    if(count)
    {
        cout<<"\t���ѯ������£���"<<endl;
        cout<<"\nϵͳ��Ϊ���ҵ��� "<<count<<" ������Ϊ ��"<<Name<<"�� ��ͬѧ\n"<<endl;
    }
    else
        cout<<"\n\t\tOops��ϵͳδ���ҵ���ͬѧ\n"<<endl;
}
void Manage::Query()
{
    char c;
    string ID,Tel,QQ;
    char Name[20];
    do{
        cout<<"1.��ѧ�Ų��� 2.�����ֲ��� 3.���绰������� 4.��QQ���� 5.�˳�����"<<endl;
        cin>>c;
    //  system("cls");
        cout<<endl;
        switch(c)
        {
        case '1': {
            cout<<"����ѧ�� ID:  ";
            cin>>ID;
            Find(ID);
                  }; break;
        case '2': {
            cout<<"�������� Name:  ";
            cin>>Name;
            Find(Name);
                  }; break;
        case '3': {
            cout<<"����绰���� Tel:"<<endl;
            cin>>Tel;
            Find(Tel);
            };break;
        case '4': {
            cout<<"����QQ���� QQ:"<<endl;
            cin>>QQ;
            Find(QQ);
            };break;
        case '5':break;
        default:  cout<<"Oops! �������� ����������...\n"<<endl;
        }
    }while(c!='1'&&c!='2'&&c!='3'&&c!='4'&&c!='5');
    cout<<"\t\t\t   �����ҳɹ���\n"<<endl;
    cout<<"�Ƿ�������ң�(Y/N)  "<<endl;
    cin>>c;
    if(toupper(c)=='Y')
            {
                Query();
                return ;
            }
    else
        return ;
        system("pause");
}
void Manage::Look()
{
        //����������ɫ
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
            FOREGROUND_RED | FOREGROUND_BLUE);
    system("cls");
    Person *p1;
    int count=0;
    char c;
    p1=person;
    while(p1)
    {
        cout<<"ѧ��: "<<p1->No<<"\t����: "<<p1->Name<<endl;
        count++;
            p1=p1->next;
    }
    if(count!=0)
    {
        cout<<"\n\t��Ԥ����Ϣ���سɹ����� \n"<<endl;
        cout<<"�Ƿ��ѯ��ϸ��Ϣ��(Y/N): ";
        cin>>c;
            if(toupper(c)=='Y')
            {
                Query();
                return;
            }
            else
                return ;
    }
    else
    {
        cout<<"Oops! ��δ����ͨѶ¼���Ƿ����ڴ�����(Y/N)"<<endl;
        cin>>c;
            if(toupper(c)=='Y')
            {
                Add();
                return;
            }
            else
                return ;
    }
}
void Manage::DesTory()
{   //��������Ϊ��ɫ
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
            FOREGROUND_RED);
    char c;
    system("cls");
    cout<<"\n\t\t\t �������Ϣ�� \n"<<endl;
    cout<<"=============================================================="<<endl;
    cout<<"\t\t\t   �������\n\n\t���ͨѶ¼��Ϣ�ᵼ�������ѱ������Ϣ��ȫ��ʧ!!!\n"<<endl;
    cout<<"���Ƿ�����������ͨѶ¼��Ϣ����(Y/N):  "<<endl;
    cin>>c;
            if(toupper(c)!='Y')
                return;
    cout<<"����ȷ��Ҫ�������ͨѶ¼��Ϣ�𣿡�(Y/N)"<<endl;
    cin>>c;
    if(toupper(c)!='Y')
                return;
    else
    {
        Person *p;
        p=person;
        while(p)
        {
            p=p->next;
            delete person;
            person=p;
        }
        person=0;
    //  ofstream fPerson("person.txt");
    //  fPerson.close();
    }
    system("pause");
}
void Manage::TJ()
{
    Person *p1;
    int count=0,Boy=0,Girl=0;
    p1=person;
    while(p1)
    {
        count++;
        if(strcmp(p1->Sex,"��")==0)
        Boy++;
        if(strcmp(p1->Sex,"Ů")==0)
            Girl++;
        p1=p1->next;
    }
    cout<<"ͨѶ¼�ڹ��� "<<count<<"��\n"<<endl;
    cout<<"����:  "<<Boy<<"��"<<endl<<"Ů��:  "<<Girl<<"��"<<"\n"<<endl;
    system("pause");
}
int main(void)
{
    Manage m;
    int c;
    do
    {
          //��������Ϊ��ɫ
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY |
            FOREGROUND_GREEN);
        system("cls");
        cout<<"                              ��  ͨѶ¼ϵͳ  ��                                "<<endl;
        cout<<"============================================================================="<<endl;
        cout<<"  (��3��)�� ��  1.����ͨѶ¼   ����   ����       ������      ����    ��ʥ��"<<endl;
        cout<<"         ��                      ��  ���﨎     ���﨎��    ���﨎   �ﵮ��"<<endl;
        cout<<"  (�s_�t)�� ��  2.ɾ������     ���� ��������   ����������  ��������  ��ڡ�"<<endl;
        cout<<"         ��                      ������������ ���������������������� ����"<<endl;
        cout<<"  (��_��)�� ��  3.�޸�����     �������||��� ���||���  ���||��� ���֡�"<<endl;
        cout<<"         ��                      ��"<<endl;
        cout<<"  ( -�n-)�� ��  4.��ѯ��ϸ��Ϣ �������ܣߣߨq�q�q�q�q�ߣߣ���"<<endl;
        cout<<"         ��                      ���������������������������� "<<endl;
        cout<<"  (��_��)�� ��  5.��������     ������������������������������  �q�����������r"<<endl;
        cout<<"         ��                      ���������������������������� �� ��ӭʹ��ͨ ��"<<endl;
        cout<<"  (�Ro�Q)�� ��  6.Ԥ����Ϣ     ���������R���������������Q������  Ѷ¼,�밴����"<<endl;
        cout<<"         ��                      �������ԡ��t�ЩЩШs���ԡ��� �� ����ʾ����!��"<<endl;
        cout<<"  (��_��)�� ��  7.�������     ���������������t���s���������� �t�������������s"<<endl;
        cout<<"         ��                      ���t�����Уϩ������ϩЩ����s"<<endl;
        cout<<"  (��_��)�� ��  8.����ͳ��     ����      ��    �p    ��"<<endl;
        cout<<"         ��                      ��      �t�Щ������Шs  ����Made by George.S"<<endl;
        cout<<"  (��o��)�� ��  0.�˳�ϵͳ     ����                           SYSU-CS-Class2"<<endl;
        cout<<"============================================================================="<<endl;
        cout<<"��������Ӧ����ѡ��(1-8): ";
        cin>>c;
        switch(c)
        {
        case 1: m.Add(); break;
        case 2: m.Delete();break;
        case 3: {
            system("cls");
            cout<<"������Ҫ�޸���Ա��ID:  ";
            cin>>ID;
            cout<<endl;
            m.Modify(ID);
                  };break;
        case 4: {
            system("cls");
            m.Query();
                  }; break;
        case 5: m.Save(); break;
        case 6: m.Look(); break;
        case 7: m.DesTory(); break;
        case 8: m.TJ(); break;
        default: break;
        }
    }while(c!=0);
    char s;
    cout<<"\n���Ƿ�Ҫ�����������в�������(Y/N):  "<<endl;
    cin>>s;
    if(toupper(s)=='Y')
        m.Save();
    return 0;
}
