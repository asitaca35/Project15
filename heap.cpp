// Student *s = new Student;  Heap�� �����ؼ� show�� ���
#include <iostream>
#include "head2.h"

int main()
{
	Student* s1 = new Student;
	s1->initStudent("������");
	s1->show();
	delete(s1);

	Student* s2 = new Student;
	s2->initStudent("�����");
	s2->show();
	delete(s2);

	Student* s3 = new Student;
	s3->initStudent("�����");
	s3->show();
	delete(s3);

	Student* s4 = new Student;
	s4->initStudent("������");
	s4->show();
	delete(s4);

	return 0;
}
