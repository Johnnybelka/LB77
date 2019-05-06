#include "Boss.h"
#include "Human.h"
#include "Student.h"
#include <iostream>


Human::Human(string name, string surname, string midname, int age)
{
    this->name = name;
    this->surname = surname;
    this->midname = midname;
    this->age = age;
}

Boss::Boss() : Human()
{
    number_of_workers = 0;
}

Boss::Boss(string name, string surname, string midname, int age, int number_of_workers) : Human(name, surname, midname, age)
{
    this->number_of_workers = number_of_workers;
}

void Boss ::print()
{
    cout << name << endl;
    cout << surname << endl;
    cout << midname << endl;
    cout << age << endl;
    cout << number_of_workers << endl;
}

Student::Student() : Human()
{
    on_lesson = true;
}

Student::Student(string name, string surname, string midname, int age, bool on_lesson) : Human(name, surname, midname, age)
{
    this->on_lesson = on_lesson;
}

void Student::print()
{
    cout << name << endl;
    cout << surname << endl;
    cout << midname << endl;
    cout << age << endl;
    cout << on_lesson << endl;
}



