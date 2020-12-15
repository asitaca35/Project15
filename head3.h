#pragma once
#include<string>
using namespace std;

#define TOTAL 5
#define KOR 0
#define ENG 1
#define MATH 2
#define SCI 3
#define GEO 4


string jammintitle[TOTAL] =
{"국어","영어","수학","과학","지리" };

class jaemin
{
private:
	string name;
	int grades[TOTAL];

public:
	jaemin(string _name="") {

		string name = _name;
		memset(grades, 0, sizeof(int) * TOTAL);
	}
	~jaemin(){}

	void setname(string _name) {

		name = _name;

	}

	void intisubstitles() {
		for (int i = 0; i < TOTAL; i++)
		{
			grades[i] = rand() % 101;
		}

	}

	void show() {
		printf("%s", name.c_str());
		for (int i = 0; i < TOTAL; i++)
		{
			printf("%5d",grades[i] );
		}
		printf("\n");
	}

	int* G()
	{
		return grades;
	}
};