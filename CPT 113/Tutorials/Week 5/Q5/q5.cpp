#include "gradedActivity.h"
#include <iostream>

using namespace std;

int main()
{
    Essay essay(30, 20, 20, 30);
    cout << "Your marks: " << essay.getScore() << endl;
    cout << "Your grade: " << essay.getLetterGrade();

    return 0;
}