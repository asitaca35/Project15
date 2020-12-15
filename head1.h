// Student s[10] �迭�� �̿��� show ��� �������
#include <string>
using namespace std;

#define CNT 5   // �����

#define KOR   0   // ��
#define ENG   1   // ��
#define MAT   2   // ��
#define SCI   3   // ��
#define GEO   4   // ��

string subjTitles[CNT] =
{ "����", "����", "����", "����", "����" };

class Student
{
private:
	string name;
	int grades[CNT];

public:
	Student(string _name = "")
	{
		name = _name;
		memset(grades, 0, sizeof(int) * CNT);
	}
	~Student() {}

	void setName(string _name)
	{
		name = _name;
	}
	void initStudent()
	{
		for (int i = 0; i < CNT; i++)
		{
			grades[i] = rand() % 101;
		}
	}
	int getGrade(int i) 
	{ 
		return grades[i]; 
	}

	void show()
	{
		printf("%s : ", name.c_str());
		for (int i = 0; i < CNT; i++)
		{
			printf("%5d", grades[i]);
		}
		printf("\n");
	}
}; #pragma once
