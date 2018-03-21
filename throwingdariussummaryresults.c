
//ripsh zariou 6000000 fores kai synopsh apotelesmatwn se enan pinaka-throwing darius and summary of the results in an array


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 7


  int main(void)


  {//1

    size_t face; //timh tyxaiou zariou 1 ews 6-value of random darius 1 to 6
    unsigned int roll; //metriths dokimwn 1 ews 6000000-tries counter 1 to 6000000
    unsigned int frequency[SIZE]={0}; //mhdenismos metrhtwn-set zero counters

    srand(time(NULL));//trofodothse genhtria-fed generator

    //rikse to zari 6000000 fores-drop the darius 6000000 times


       for(roll=1;roll<=6000000;++roll)

          

         {//2


           
           face=1+rand()%6;
              

           ++frequency[face]; //antikathista oloklhro to switch-replacing whole switch



        }//2



          printf("%s%17s\n","Face","Frequency");



        //emfanise apo 1-6 se morfh pinaka-print 1-6 in ap of array


   

        for(face=1;face<SIZE;++face)

    

       {//3



         printf("%4d%17d\n",face,frequency[face]);





      }//3




   }//1


  

























           
