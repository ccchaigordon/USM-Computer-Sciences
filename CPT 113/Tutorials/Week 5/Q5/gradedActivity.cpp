#include "gradedActivity.h"
#include <iostream>

using namespace std;

char GradedActivity::getLetterGrade() const
{
    char letterGrade; // To hold the letter grade

    if (score > 89)
        letterGrade = 'A';
    else if (score > 79)
        letterGrade = 'B';
    else if (score > 69)
        letterGrade = 'C';
    else if (score > 59)
        letterGrade = 'D';
    else
        letterGrade = 'F';

    return letterGrade;
}

// Essay

Essay::Essay(double g, double s, double l, double c) : GradedActivity()
{
    grammar = g;
    spelling = s;
    length = l;
    content = c;
    total = grammar + spelling + length + content;

    if (total > 100)
    {
        total = 0;
    }

    setScore(total);
}