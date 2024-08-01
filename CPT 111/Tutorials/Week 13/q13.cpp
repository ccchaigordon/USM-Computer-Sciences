#include <iostream>

using namespace std;

int *score(int &);
void sort(int *, int);
float average(int *, int);

int main()
{
    float avgScore = 0;
    int scoreSize = 0;
    int *scores = score(scoreSize);
    sort(scores, scoreSize);
    for (int i = 0; i < scoreSize; i++)
    {
        cout << *(scores + i) << " ";
    }
    avgScore = average(scores, scoreSize);
    delete[] scores;
    cout << "\nThe average score is: " << avgScore << endl;

    return 0;
}

int *score(int &size)
{
    cout << "Enter the number of test scores: ";
    cin >> size;
    int *testScore = new int[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter test score " << i + 1 << ": ";
        cin >> *(testScore + i);
        if (*(testScore + i) < 0)
        {
            cout << "Please enter only positive values!\n";
            i--;
        }
    }
    return testScore;
}

void sort(int *unsorted, int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (*(unsorted + j) > *(unsorted + j + 1))
            {
                temp = *(unsorted + j);
                *(unsorted + j) = *(unsorted + j + 1);
                *(unsorted + j + 1) = temp;
            }
        }
    }
}

float average(int *sorted, int size)
{
    float sum = 0.0;
    for (int i = 0; i < size; i++)
    {
        sum += *(sorted + i);
    }
    return sum / size;
}