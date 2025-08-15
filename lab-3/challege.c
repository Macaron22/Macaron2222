#include <stdio.h>
char getLetterGrade (int score) {
if (score >= 90)
return 'A';
else if (score >= 80 && score<90)
return 'B';
else if (score>= 70 && score<80)
return 'C';
 else if (score >= 60 && score<70)

return 'D';
else
return 'F';
 }
 float getNumericGrade (char grade) {
 switch (grade) {
 case 'A': return 4.0;
 case 'B': return 3.0;
 case 'C': return 2.0;
 case 'D': return 1.0;

default: return 0.0;
 }
}

int main() {
 int calScore, phyScore, compScore;
 char calGrade, phyGrade, compGrade;