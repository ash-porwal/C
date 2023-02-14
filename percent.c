#include <stdio.h>

int getPercent(int p, int c, int m) {
    return (p + c + m)/3;
}

int checkValidMarks(char *type);

const char* grade(int p, int c, int m) {
    int percent = getPercent(p, c, m);
    char *grade;
    if (percent >= 90){
        grade = "Grade A";
    } else if (percent < 90 && percent > 75) {
        grade = "Grade B";
    } else {
        grade = "Grade C";
    }
    return grade;
}

void main() {
    for (int i = 0; i < 6; i++){
        char *name;
        printf("Please enter your name\n");
        gets(name);
        int p, c, m;
        p = checkValidMarks("Physics");
        c = checkValidMarks("Chemistry");
        m = checkValidMarks("Math");
        printf("Grade of %s is : %s \n", name, grade(p, c, m));
    }
}

int checkValidMarks(char *type) {
    char *again = "";
    int marks;
        do {
            printf("Enter%s %s marks:\n", again, type);
            scanf("%d", &marks);
            again = " again";
        } while (marks > 101);

    return marks;
}