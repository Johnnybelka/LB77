#include "Human.h"
#include <string>
#include <iostream>

using namespace std;

class Student : public Human
{
private:
    bool on_lesson;
public:
    Student();
    Student(string name, string surname, string midname, int age, bool on_lesson);
    void print()override;
    ~Student() {};
};
