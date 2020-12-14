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
        memset(grades, 0, sizeof(int) * 3); //배열들을 초기화하는건데 메모리로 초기화한거임. 걍 세줄로 =0하는거랑 같음.
    }

    ~Student() {}

    void initStudent1()
    {
        srand(time(NULL));// null함수 지정값 i부터 3까지 1씩 증가했을때 101를 나눈 값

        for (int i = 0; i < 3; i++)
        {
            grades[i] = rand() % 101;
            

           
        }
    }
    void initStudent2()
    {
        srand(time(NULL));// null함수 지정값 i부터 3까지 1씩 증가했을때 101를 나눈 값

        for (int i = 0; i < 3; i++)
        {
            grades[i] = rand() % 101;



        }
    }
    void initStudent3()
    {
        srand(time(NULL));// null함수 지정값 i부터 3까지 1씩 증가했을때 101를 나눈 값

        for (int i = 0; i < 3; i++)
        {
            grades[i] = rand() % 101;



        }
    }
    void show()
    {
        cout << "국어점수: " << grades[KOR] << "점" << endl;
        cout << "영어점수: " << grades[ENG] << "점" << endl;
        cout << "수학점수: " << grades[MAT] << "점" << endl;
        cout << "과학점수: " << grades[SI] <<  "점" << endl;
    }

};