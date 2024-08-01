
#include <iostream>

using namespace std;

template <class T>
class Grade
{
private:
    T score;

public:
    // Constructors
    Grade() {}
    Grade(T);

    void setGrade(T);
    void getGrade() const;
};

int main()
{
    Grade<int> grade;
    grade.setGrade(89);
    grade.getGrade();

    return 0;
}

template <class T>
Grade<T>::Grade(T score)
{
    this->score = score;
}

template <class T>
void Grade<T>::setGrade(T score)
{
    this->score = score;
}

template <class T>
void Grade<T>::getGrade() const
{
    char grade;
    bool validScore = true;
    switch (this->score)
    {
        case 80 ... 100:
            grade = 'A';
            break;
        
        case 60 ... 79:
            grade = 'B';
            break;
        
        case 50 ... 59:
            grade = 'C';
            break;

        case 40 ... 49:
            grade = 'D';
            break;

        case 20 ... 39:
            grade = 'E';
            break;
        
        case 0 ... 19:
            grade = 'F';
            break;
        
        default:
            cout << "Invalid score!";
            validScore = false;
    }

    if (validScore)
    {
        cout << "Grade: " << grade;
    }
}
