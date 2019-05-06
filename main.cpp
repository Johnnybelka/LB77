#include <iostream>
#include <string>
#include "Human.h"
#include "Boss.h"
#include "Student.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russain");
    Boss a("BB", "Boss", "Bossss", 1, 0);
    a.print();

    Student b("St","STTT", "Study", 3, 1);
    b.print();
}