//ayto to programma eksetazei to thema analyshs dedomenwn ereynas(ypologizei meso oro,mesh timh kai epikratousa timh dedomenwn)-this program is considering analysis theme of data's research(calculate average score,average value and prevailing data)



   #include <stdio.h>

   #define SIZE 99


   //prototypa synarthshwn-prototypes of functions

//*
 void mean(const unsigned int answer[]);
 void median(unsigned int answer[]);
 void mode(unsigned int freq[],unsigned const int answer[]);
 void bubblesort(int a[]);
 void printArray(unsigned const int a[]);
//*


 int main(void)


 {//1


   unsigned int frequency[10]={0}; //arxikopoihsh pinaka frequency-set zero frequency array
   //arxikopoihsh pinaka response-set zero respone array

   unsigned int response[SIZE]={6,7,8,9,8,7,8,9,8,9,
                                7,8,9,5,9,8,7,8,7,8,
                                6,7,8,9,3,9,2,7,8,7,
                                7,8,9,8,1,8,9,7,8,9,
                                6,7,8,7,8,7,9,8,9,2,
                                6,7,8,9,8,7,8,9,8,9,
                                1,8,9,5,2,8,7,8,7,6,
                                6,7,8,9,3,9,8,7,8,7,
                                7,8,9,8,3,4,3,7,1,9,
                                5,7,8,4,8,7,9,8,9}


//epeksergasou apanthseis-edit answers

  mean(response);
  median(response);
  mode(frequency,response);

  }//1

//*

void mean(const unsigned int answer[])

  {//2 anoigma synarthshs mean-open function mean

   size_t j; //metrhths gia athroisma stixoiwn pinaka-counter for summary of array's elements
   unsigned int total=0; //metavlhth pou diatirei to athroisma twn stixoiwn tou pinaka-variable for having the summary of array's elements

   printf("%s\n%s\n%s\n", "********","Mean","********");

 

  //synolikes times apanthsewn-total value of answers

  for(j=0;j<SIZE;++j){//3
   total+=answer[j];
                     }//3


printf("The mean is the average value of the data\n"
       "items.The mean is equal to the total of\n"
       "all of the data items devided by the number\n"
       "of data items(%u).The mean value for\n"
       "this run is:%u/%u=%.4f\n\n"
       SIZE,total,SIZE,(double)total/SIZE);


   }//2 telos synarthshs mean-close function mean

//taksinomhse pinaka kai vres stoixeio meshs timhs-classificate array and find element's average value

  void median(unsigned int answer[])

  {//3 arxh synarthshs median-open median function


   printf("\n%s\n%s\n%s\n%s", "********","Median","********","The unsorted array of responses is");

   
   printArray(answer);//eksigage ataksinomhto pinaka-print no classificated array


   bubbleSort(answer);//taksinomhse pinaka-classificate array


   printf("%s","\n\nThe sorted array is");


   printArray(answer);//eksigage taksinomhmeno pinaka-print classificated array
   

   //emfanise stoixeio meshs timhs-print average value of element

   printf("\n\nThe median is element %u of \n"
          "the sorted %u element array.\n"
          "For this run the median is %u\n\n",
           SIZE/2,SIZE,answer[SIZE/2]);


   }//3 kleinw synarthsh median-close median function


//vres thn pio syxnh apanthsh-find the most common answer

  void mode (unsigned int freq[],const unsigned int answer[])

  {//4 anoigw synarthsh mode-open mode's function


   size_t rating; //metrhths gia prosvash stoixeiwn 1 ews 9 tou pinaka freq-counter for access elements 1 to 9 in freq array
   size_t j; //metrhths gia synopsh stoixeiwn 0ews 98 tou pinaka answer-counter for summary elements 0 to 98 in answer's array
   unsigned int h; //metrhths gia emfanish istogrammatwn stoixeiwn tou pinaka freq-counter to print elements of freq array
   unsigned int largest=0; //anaparista th megaluterh syxnothta-represeting the biggest frequency
   unsigned int modeValue=0; //anaparista thn pio syxnh apanthsh=representing the most strong answer

  printf("\n%s\n%s\n%s\n","********","Mode","********");

 //mhdenise syxnothtes-set zero frequencies

   for(rating=1;rating<=9;++rating)

    {//5

     freq[rating]=0;

    }//5

   //synopsise syxnothtes-summary frequencies

   for(j=0;j<SIZE;++j)

    {//6

     ++freq[answer[j]];

   }//6


  //eksigage epikefaldes gia steiles apotelesmatwn-print headers of column's results


   printf("%s%11s%19s\n\n%54s\n%54s\n\n","Response","Frequency","Histogram","1 1 2 2","5 0 5 0 5");


   //eksigage apotelesmata-print results


   for(rating=1;rating<=9;++rating){//7

    printf("%8u%11u      ",rating,freq[rating]);


   //kategrapse thn epikratousa timh kai thn timh ths megaluterhs syxnothtes-print the biggest value and the value of biggest frequency

     if(freq[rating]>largest){//8
       largest=freq[rating];
       modeValue=rating;
                             }//8
 
  //eksigage ravdo istogrammatos pou anaparista timh syxnothtas-print rod of histogram that represents value of frequency


      for(h=1;h<=freq[rating];++h){//9
        printf("%s","*");
                                  }//9


       puts(" ");//nea grammh eksodou-new line of exit


                                   }//7

   //emfanise epikratousa timh-print prevailing value

     printf("\nThe mode is the most frequent value.\n"
            "For this run the mode is %u which occured"
            "%u times.\n",modeValue,largest);


  }//4 kleinw synarthsh mode-close mode function

  //synarthsh pou taksinomei ton pinaka me ton algorithmo bubble sort-function that classificate the array with the algorith of bubble sort

  void bubbleSort(unsigned int a[])

   {//10 anoigw synarthsh bubbleSort-open bubbleSort's function


    unsigned int pass; //metrhths perasmatwn-pass counter
    size_t j; //metrhths sygkrisewn-comparison's counter
    unsigned int hold; //proswrinh thesh poy xrhsimopoieitai gia antimetathesh stixeiwn-temporary position that used for swearing of elements

  //gia.arithmos perasmatwn-for.pass counter

    for(pass=1;pass<SIZE;++pass){//11

    //gia.arithmos sygkrisewn ana perasma-for.number of comparison for each passage

     for(j=0;j<SIZE-1;++j){//12

     //antimetathese stoixeia an einai ektos seiras-swearing elements if there not in same serie

      if(a[j]>a[j+1]){//13

       hold=a[j];
       a[j]=a[j+1];    //antimetathesh-swear
       a[j+1]=hold;

                      }//13


                  }//12


             }//11


        }//10 kleinw synarthsh bubbleSort-close bubbleSort function


//eksigage periexomena pinaka-print that incuding in the array


   void printArray(const unsigned int a[])

     {//14 anoigw synarthsh printArray-open printArray's function


       size_t j; //metrhths-counter

       //eksigage periexomena pinaka-print that incuding in the array

       for(j=0;j<SIZE;++j){//15

        if(j%20 == 0) {//16

          puts(" ");

                      }//16


                   }//15


                }//14 kleinw synarthsh printArray-close printArray's function










































































































































































 




































   


































  






   
