#include <iostream>
#include <string>
#include <time.h>

using namespace std;
#define CNT 5
#define KOR 0
#define ENG 1
#define MAT 2   
#define SI 1
#define GEO 2


string subTitles[CNT] =
{"KOR", "ENG", "MAT", "SI" "GEO" };


class Student
{
private:
    string name;
    int grades[CNT];

public:
    Student(string _name)
    {
        name = _name;
        memset(grades, 0, sizeof(int) * 3); //�迭���� �ʱ�ȭ�ϴ°ǵ� �޸𸮷� �ʱ�ȭ�Ѱ���. �� ���ٷ� =0�ϴ°Ŷ� ����.
    }

    ~Student() {}

    void initStudent1()
    {
        srand(time(NULL));// null�Լ� ������ i���� 3���� 1�� ���������� 101�� ���� ��

        for (int i = 0; i < 3; i++)
        {
            grades[i] = rand() % 101;
            

           
        }
    }
    void initStudent2()
    {
        srand(time(NULL));// null�Լ� ������ i���� 3���� 1�� ���������� 101�� ���� ��

        for (int i = 0; i < 3; i++)
        {
            grades[i] = rand() % 101;



        }
    }
    void initStudent3()
    {
        srand(time(NULL));// null�Լ� ������ i���� 3���� 1�� ���������� 101�� ���� ��

        for (int i = 0; i < 3; i++)
        {
            grades[i] = rand() % 101;



        }
    }
    void show()
    {
        cout << "��������: " << grades[KOR] << "��" << endl;
        cout << "��������: " << grades[ENG] << "��" << endl;
        cout << "��������: " << grades[MAT] << "��" << endl;
        cout << "��������: " << grades[SI] <<  "��" << endl;
    }

};