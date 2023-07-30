#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Student {
    std::string name;
    double grade;
};

int main() {
    int numStudents;

    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    std::vector<Student> students;
    double totalGrades = 0.0;

    for (int i = 0; i < numStudents; ++i) {
        Student student;
        std::cout << "Enter the name of student " << i + 1 << ": ";
        std::cin >> student.name;

        std::cout << "Enter the grade of " << student.name << ": ";
        std::cin >> student.grade;

        totalGrades += student.grade;
        students.push_back(student);
    }

    // Calculate the average grade
    double averageGrade = totalGrades / numStudents;

    // Find the highest and lowest grades
    double highestGrade = students[0].grade;
    double lowestGrade = students[0].grade;

    for (int i = 1; i < numStudents; ++i) {
        highestGrade = std::max(highestGrade, students[i].grade);
        lowestGrade = std::min(lowestGrade, students[i].grade);
    }

    // Display the results
    std::cout << "\nAverage Grade: " << averageGrade << std::endl;
    std::cout << "Highest Grade: " << highestGrade << std::endl;
    std::cout << "Lowest Grade: " << lowestGrade << std::endl;

    return 0;
}