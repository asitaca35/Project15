// Student *s[10]; Arrays of pointer�� �̿��� show ���
#include <iostream>
#include <time.h>
#include <vector>
#include "head1.h"

using namespace std;

string name[3]{
	"ȫ�浿","ȫ�ϵ�","ȫ�̵�"
};

int FindMin(Student* s[3], int n)
{
	int ret = 0;
	for (int i = 0; i < 3; i++)
	{
		if (s[ret]->getGrade(KOR) > s[i]->getGrade(KOR))
			ret = i;
	}
	return ret;
}

int main()
{

	
	srand((unsigned int)time(NULL));
	Student* s[3];
	s[0] = new Student("������");
	s[1] = new Student("�����");
	s[2] = new Student("�ֳ���");
	s[0]->initStudent();
	s[1]->initStudent();
	s[2]->initStudent();
	int i = FindMin(s, KOR);
	printf("���� ���� ���� �л�\n");
	
	


	for (auto t : s) delete t;


}