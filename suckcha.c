#include <stdio.h>

typedef struct suckcha {
    int score;
    int grade;
} Grade;

int main() {
    Grade student[200] = {0};

    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++) {
        scanf("%d",&student[i].score);
    }

    for(int i = 0; i < n; i++){
        student[i].grade = 1;
        for(int j = 0; j < n; j++){
            if(student[i].score < student[j].score){
                student[i].grade++;
            }
            else if (student[i].score == student[j].score)
                continue;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d %d\n",student[i].score, student[i].grade);
    }
}