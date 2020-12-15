#include <iostream>
#include "head2.h"
#include <time.h>
using namespace std;

void printTitle()
{
	printf("%-9s", "Name");
	for (int i = 0; i < CNT; i++)
	{
		printf("%5s", subtitles[i].c_str());
	}
	printf("\n");
}

int FindMin(Student s[4], int subj)
{
	int* a = s[0].G();
	int min = a[subj];
	int z=0;
	for (int i = 1; i < 4; i++) {
		if (min > s[i].G()[subj]) { //s[i].G()[subj] == s[i].grades[subj]
			min = s[i].G()[subj];
			z = i;

		}
		//s[i].grades[subj];
	}
	return z;
}
int main()
{
	srand((unsigned int)time(NULL));
	printTitle();
	Student s[4];

	s[0].setName("全辨悼");
	s[0].initStudent();
//	s[0].show();

	s[1].setName("全老悼");
	s[1].initStudent();
	//s[1].show();

	s[2].setName("全捞悼");
	s[2].initStudent();
	//s[2].show();

	s[3].setName("全伙悼");
	s[3].initStudent();
	//s[3].show();

	int t = FindMin(s, KOR);
	
	s[t].show();
}
