//<����>
//1.�л� ��ü ����
//2.�������� �����Է�(intStudent())
//3.��ü ���� ȭ�� ���(show())

#include "student.h"
#include "time.h"
void printTitle()
{
	printf("%-9s", "Name");
	for (int i = 0; i < CNT; i++)
	{
		printf("%5s", subTitles);
	}
	printf("\n");
}
int Findmin
int main()
{
	srand((unsigned int)time(NULL));
	printTitle();
	/// ///////////////////////////////
	
	{
		Student s[3];
		s[0].setName("ȫ�浿");
		s[0].initStudent();
		s[1].setName("ȫ�ϵ�");
		s[1].initStudent();
		s[2].setName("ȫ�̵�");
		s[2].initStudent();
		
		
		int t = Finemin(s, KOR);
		printf("����  ���� ���� :\n")
	}
	///////////////////////////////////
	//Student* ps = new Student("ȫ�̵�");
	//ps->initStudent();
	//ps->show();
	//delete ps;

	return 0;
}