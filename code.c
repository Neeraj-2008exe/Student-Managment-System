#include <stdio.h>

#define MAX 50

// Structure to store student information
struct Student {
    char name[50];
    int rollNo;
    float marks;
    char grade;
};

// Global variables
struct Student students[MAX];
int count = 0;

// Function to calculate grade
char calculateGrade(float marks);

// Function to calculate grade
char calculateGrade(float marks) {
    if(marks >= 90)
        return 'A';
    else if(marks >= 80)
        return 'B';
    else if(marks >= 70)
        return 'C';
    else if(marks >= 60)
        return 'D';
    else if(marks >= 50)
        return 'E';
    else
        return 'F';
}

// Function to add student
void addStudent() {
    if(count >= MAX) {
        printf("\nCannot add more students!\n");
        return;
    }
    
    printf("\nEnter Name: ");
    scanf("%s", students[count].name);
    
    printf("Enter Roll Number: ");
    scanf("%d", &students[count].rollNo);
    
    printf("Enter Marks: ");
    scanf("%f", &students[count].marks);
    
    students[count].grade = calculateGrade(students[count].marks);
    
    count++;
    printf("\nStudent added successfully! Grade: %c\n", students[count-1].grade);
}

// Function to display all students
void displayAll() {
    int i;
    
    if(count == 0) {
        printf("\nNo records found!\n");
        return;
    }
    
    printf("\n--- All Student Records ---\n");
    printf("Name\t\tRoll No\t\tMarks\t\tGrade\n");
    printf("--------------------------------------------------\n");
    
    for(i = 0; i < count; i++) {
        printf("%s\t\t%d\t\t%.2f\t\t%c\n", 
               students[i].name, 
               students[i].rollNo, 
               students[i].marks, 
               students[i].grade);
    }
}

// Function to search student
void searchStudent() {
    int roll, i, found = 0;
    
    printf("\nEnter Roll Number: ");
    scanf("%d", &roll);
    
    for(i = 0; i < count; i++) {
        if(students[i].rollNo == roll) {
            printf("\n--- Student Found ---\n");
            printf("Name: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].rollNo);
            printf("Marks: %.2f\n", students[i].marks);
            printf("Grade: %c\n", students[i].grade);
            found = 1;
            break;
        }
    }
    
    if(found == 0) {
        printf("\nStudent not found!\n");
    }
}

int main() {
    int choice;
    
    printf("--------------------------------------------------------------------------------\n");
    printf("  STUDENT RECORD MANAGEMENT SYSTEM\n");
    printf("--------------------------------------------------------------------------------\n");
    
    while(1) {
        printf("\n1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        
        if(choice == 1) {
            addStudent();
        }
        else if(choice == 2) {
            displayAll();
        }
        else if(choice == 3) {
            searchStudent();
        }
        else if(choice == 4) {
            printf("\nThank you!\n");
            break;
        }
        else {
            printf("\nInvalid choice!\n");
        }
    }
    
    return 0;
}