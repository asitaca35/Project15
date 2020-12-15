using namespace std;
#include <string>

#define CNT 5
#define KOR 1
#define ENG 2
#define MATH 3
#define SCI 4
#define GEO 5


string subtitles[CNT] = 
{ "����","����","����","����","����" };

class Student
{
private:
	string name;
	int grades[CNT];

public:
	Student(string  _name = "")
	{
		string name = _name;
		memset(grades, 0, sizeof(int) * CNT);

	}
	~Student() {}

	void setName(string _name)
	{
		name = _name;
	}


	void initStudent(string name)
	{	
		printf("%s", name.c_str());
		for (int i = 0; i < CNT; i++)
		{
			grades[i] = rand() % 101;
		}


	}

	void show()
	{
		
		printf("%s \n\n", name.c_str());
		for (int i = 0; i < CNT; i++)
		{
			
			printf("%2s %d\n", subtitles[i].c_str(), grades[i]);
		}
		printf("========================\n");
	}

	int* G()
	{
		return grades;
	}

};