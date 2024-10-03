# GPA and Course Average Calculator

This is a C++ program that calculates the GPA of three students based on their scores in five courses and computes the average score for each course. 

## Features
- Calculates GPA for each student based on their course scores.
- Computes the average score for each of the five courses.
- Uses a simple grading system where:
  - Scores above 90 equate to a 4.0 GPA.
  - Scores between 81-90 equate to a 3.0 GPA.
  - Scores between 71-80 equate to a 2.0 GPA.
  - Scores between 61-70 equate to a 1.0 GPA.

## Program Structure

The program consists of the following key components:
- **`calculateGPA(const int scores[STUDENT][COURSE])`**: This function calculates and prints the GPA for each student based on their scores in five courses.
- **`calculateAverageCourseScore(const int scores[STUDENT][COURSE])`**: This function calculates and prints the average score for each course based on all students' scores.

## How to Run

### Requirements
- A C++ compiler (e.g., `g++`)

### Steps to Compile and Run

1. Clone or download the repository.
2. Open a terminal or command prompt.
3. Navigate to the directory where the file is located.
4. Compile the code using a C++ compiler, for example:
   ```bash
   g++ -o gpa_calculator gpa_calculator.cpp
   
Run the program: ./gpa_calculator

Example: 
Enter scores for student A: 85 90 78 92 88
Enter scores for student B: 70 80 65 75 60
Enter scores for student C: 95 98 91 87 93

The GPA of student A is: 3.2
The GPA of student B is: 1.6
The GPA of student C is: 3.8

The average score of course 1 is: 83.3333
The average score of course 2 is: 89.3333
The average score of course 3 is: 78.0
The average score of course 4 is: 84.6667
The average score of course 5 is: 80.3333

