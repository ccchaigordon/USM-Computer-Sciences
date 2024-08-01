#ifndef GRADEDACTIVITY_H
#define GRADEDACTIVITY_H

// GradedActivity class declaration

class GradedActivity
{
private:
    double score; // To hold the numeric score
public:
    // Default constructor
    GradedActivity()
    {
        score = 0.0;
    }

    // Constructor
    GradedActivity(double s)
    {
        score = s;
    }

    // Mutator function
    void setScore(double s)
    {
        score = s;
    }

    // Accessor functions
    double getScore() const
    {
        return score;
    }

    char getLetterGrade() const;
};

class Essay : public GradedActivity
{
private:
    double grammar, spelling, length, content, total = 0;

public:
    Essay() { grammar = spelling = length = content = total = 0; }
    Essay(double, double, double, double);
    ~Essay() {}
};

#endif