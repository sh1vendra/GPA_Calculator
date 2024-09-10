#include <iostream>
using namespace std;

const int STUDENT = 3;
const int COURSE = 5;

void calculateGPA(const int scores[STUDENT][COURSE]) {
    for (int i = 0; i < STUDENT; i++) {
        float gpa = 0.0;
        for (int j = 0; j < COURSE; j++) {
            if (scores[i][j] > 90)
                gpa += 4.0;
            else if (scores[i][j] > 80)
                gpa += 3.0;
            else if (scores[i][j] > 70)
                gpa += 2.0;
            else if (scores[i][j] > 60)
                gpa += 1.0;
        }
        gpa /= COURSE; // Calculate GPA by dividing by the number of courses
        switch (i) {
            case 0:
                cout << "The GPA of student A is: " << gpa << endl;
                break;
            case 1:
                cout << "The GPA of student B is: " << gpa << endl;
                break;
            case 2:
                cout << "The GPA of student C is: " << gpa << endl;
                break;
        }
    }
}

void calculateAverageCourseScore(const int scores[STUDENT][COURSE]) {
    for (int i = 0; i < COURSE; i++) {
        float total = 0.0;
        for (int j = 0; j < STUDENT; j++) {
            total += scores[j][i];
        }
        float average = total / STUDENT; // Calculate average for each course
        cout << "The average score of course " << i + 1 << " is: " << average << endl;
    }
}

int main() {
    int scores[STUDENT][COURSE] = {0};

    for (int i = 0; i < STUDENT; i++) {
        cout << "Enter scores for student " << char('A' + i) << ": ";
        for (int j = 0; j < COURSE; j++) {
            cin >> scores[i][j];
        }
    }

    cout << endl;
    calculateGPA(scores);
    cout << endl;
    calculateAverageCourseScore(scores);

    return 0;
}
