//<문제>
//1.학생 객체 생성
//2.랜덤으로 성적입력(intStudent())
//3.객체 정보 화면 출력(show())

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
		s[0].setName("홍길동");
		s[0].initStudent();
		s[1].setName("홍일동");
		s[1].initStudent();
		s[2].setName("홍이동");
		s[2].initStudent();
		
		
		int t = Finemin(s, KOR);
		printf("국어  최저 득점 :\n")
	}
	///////////////////////////////////
	//Student* ps = new Student("홍이동");
	//ps->initStudent();
	//ps->show();
	//delete ps;

	return 0;
}