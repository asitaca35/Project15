#include "head3.h"
#include <iostream>
using namespace std;
#include <string>
#include <time.h>

void printtitles() {

	printf("%-7s", "name");
	for (int i = 0; i < TOTAL; i++)
	{
		printf("%5s", jammintitle[i].c_str());
	}
	printf("\n");
}

int MIN(jaemin s[4], int subj)
{

	int* a = s[0].G();
	int min = a[subj];
	int z = 0;
	for (int i = 0; i < 4; i++)
	{
		if (min > s[i].G()[subj]) 
		{
			min = s[i].G()[subj];
			z = i;
		}
		
	}
	return z;
}

	int main() 
	{
		srand((unsigned int)time(NULL));
		printtitles();
		
		jaemin s[4];
		s[0].setname("������");
		s[0].intisubstitles();
		s[1].setname("�����");
		s[1].intisubstitles();
		s[2].setname("�����");
		s[2].intisubstitles();
		s[3].setname("�ֳ���");
		s[3].intisubstitles();

		int t = MIN(s, KOR);
		s[t].show();
	}
