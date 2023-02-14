// multidimension array - an array can be 2D, 3D, ... nD
// in 2D array we have rows and column
// example of 2D -
#include <stdio.h>

int main(){
    int n_students = 3;
    int n_subjects = 5;

    int marks[3][5];
    for (int i = 0; i < n_students; i++){
        for (int j = 0; j < n_subjects; j++){
            printf("Enter the marks of student %d in subject %d\n", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
            if (marks[i][j] > 100 || marks[i][j] < 0){
                printf("Please enter your marks between 0 to 100\n");
                do{
                    printf("Enter the marks of student %d in subject %d\n", i + 1, j + 1);
                    scanf("%d", &marks[i][j]);
                } while (marks[i][j] < 0 || marks[i][j] > 100);
            }
        }
    }

    for (int i = 0; i < n_students; i++)
    {
        for (int j = 0; j < n_subjects; j++)
        {
            printf("The marks of student %d in subject %d is: %d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}