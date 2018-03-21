#include <stdio.h>
#define STUDENTS 3
#define EXAMS 4

// aythentikopoihsh synarthsewn-protoypes functions

int minimum(int grades[][EXAMS],size_t pupils,size_t tests);
int maximum(int grades[][EXAMS],size_t pupils,size_t tests);
double average(const int setOfGrades[],size_t tests);
void printArray(int grades[][EXAMS],size_t pupils,size_t tests);

   //kentrikh sunarthsh-main fuction

  int main(void) {

      size_t students; //metritis spoudastwn-pupils counter

      //arxikopoihsh vathmous spoudastwn-set zero pupils array

      int studentGrades[STUDENTS][EXAMS]=
      {{77,68,86,73}, {96,87,89,78},{70,90,86,81} };

      //eksigage pinaka studentsGrades-puts out array studentsGrades

      puts("the array is:\n");
      printArray(studentGrades,STUDENTS,EXAMS);

     //vres mikroterh kai megaluterh timh vathmou-find min and max value of grade

     printf("\n\nLowest grade: %d\nHighest grade: %d\n",
     minimum(studentGrades,STUDENTS,EXAMS),
     maximum(studentGrades,STUDENTS,EXAMS) );

    //vres meso oro gia kathe spoudasth-find average for each student
     int student;
    for(student=0;student<STUDENTS;++student){
      printf("the average grade for student %u is %.2f\n", student,average(studentGrades      [student],EXAMS));

                                             }//kleinw gia-close for


                }//kleinw main-close main

//ypoloihsh synarthshs mikroterou vathmou-function for find min grade

 int minimum(int grades[][EXAMS],size_t pupils,size_t tests) //ayta p kouvalaei h synarthsh-for   that this having the function
  {//anoigw synarthsh minimum bracket,open minimum function brackets

    size_t i; //metritis spoudastwn-student counter
    size_t j; //metritis eksetasewn-exams counter

  int lowGrade=100; //arxikopoihsh ypsiloterou dunatou vathmou-set 0 for bigger possible value

     for(i=0;i<pupils;++i){ //epanalhpsh gia-i bracket
       for(j=0;j<tests;++j){ //epanalhpsh gia-j bracket
        if(grades[i][j]<lowGrade){//an-if
         lowGrade=grades[i][j];
                                 }//an-if
                           }//kleinw epanalhpsh gia-j bracket close
                          }//kleinw epanalhpsh gia-j bracket close

return lowGrade;//epistrefw elaxisto-return minimum

   }//kleinw thn synarthsh minimum,close minimum function brackets

   //synarthsh gia na vreis ton ypshlotero vathmo-function to find the biggest value of grade
   int maximum(int grades[][EXAMS],size_t pupils,size_t tests)//ayta p kouvalaei h synarthsh-for that this having the function

   {//anoigw synasthsh maximum bracket,open maximum function brackets
     size_t i;//metritis spoudastwn-student counter
     size_t j;//metritis eksetasewn-exams counter
     int highGrade;
     
     for(i=0;i<pupils;++i){//epanalshpsh gia-i bracket
       for(j=0;j<pupils;j++){//epanalhpsh gia-j bracket
         if(grades[i][j]>highGrade){//an-if
           highGrade=grades[i][j];
                                   }//and-if
                            }//kleinw epanalhpsh gia-j bracket close
                          }//kleinw epanalhpsh gia-j bracket close

     return highGrade; //epistrefw megisto-return maximum
  }//kleinw synasthsh maximum bracket,close maximum function brackets

  //vres to megisto enos sigkektimenou spoudasti-find the minimum of a student
   
   double average(const int setOfGrade[100],size_t tests)

   {//arxh synarthshs average-open average function

     size_t i; //metrhths spoudastwn-student counter
     int total=0; //athrisma vathmwn diagwnismatwn-sum of total tests
     int setOfgrades[100];
      //athrisma twn vathmwn enos spoudasth-sum of grades in a student
      for(i=0;i<tests;++i){//epanalhpsh gia-i bracket
        total +=setOfgrades[i];
                          }//kleinw epanalhpsh gia-close i bracket
        return(double) total/tests; //mesos oros-average

   }//telos synarthshs average-close average function

  //emfanish pinaka-print array
  
  void printArray(int grades[][EXAMS],size_t pupils,size_t tests)

  {//arxh synarthshs printArray-open printArray function

    size_t i; //pupils counter
    size_t j; //exams counter
    float studentGrades[i];
  //eksigage kefalides stoixeiwn-print headers of elements

   printf("%s","         [0] [1] [2] [3]");
   //eksigage vathmous se morfh pinaka-print grades in array
    for(i=0;i<pupils;++i){//gia-for

    //eksigage titlo grammh-print title colum
     printf( " \nstudentGrades[%d] ",i);
    //eksigage vathmus gia enan spoudasth-print grades for a student
     for(j=0;j<tests;++j){//gia-for
      printf("%-5d",grades[i][j]);
                         }//kleinw gia-j close for
                        }//kleinw gia-i close for
  }//telos synarthshs printArray-close printArray function
         

