//programma anakatematos kai moirasmatos trapoulas paixnidi-program for strirring and sharing cards game
  #include<stdio.h>
  #include<stdlib.h>
  #include<time.h>

  #define SUITS 4
  #define FACES 13
  #define CARDS 52

//prototypa synarthsewn dhlwsh-protocols of functions

  void shuffle(unsigned int wDeck[][FACES]); //to anakatema tropopoiei to wDECK-strirring modifies the wDECK
  void deal(unsigned int wDeck[][FACES],const char *wFACE[],const char *wSuit[]); //to moirasma den tropopiei tous pinakes-stirring not modifies the arrays

  



  int main(void)

{//arxh vasikhs synarthshs-start basic function main

   //arxikopoihsh pinaka suit-initialization array suit

   const char *suit[SUITS] = { "Hearts","Diamonds","Clubs","Spades" };
  
   //arxikopoihsh pinaka face-initialization array face

   const char *face[FACES]= { "Ace","Deuce","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };

  //arxikopoihsh pinaka deck-initialization array deck
   unsigned int deck[SUITS][FACES]={0}; //anti gia {0,0,0}-for not {0,0,0}
   srand(time(NULL)); //trofodotise genitria tyxaiwn arithmwn-fed generator of random number
   shuffle(deck); //anakatepse trapoula-shuffle deck
   deal( deck,face,suit); //moirase trapoula-share deck

}//telos vasikhs synarthshs-close basic function main

  //anakatepse ta xartia ths trapoulas-shuffle cards of deck

  void shuffle(unsigned int wDeck[][FACES])

 {//anoigw synarthsh shuffle-open shuffle function

  size_t row; //arithmos grammhs-number of row
  size_t column; //arithmos sthlhs-number of column
  size_t card; //metrhths-counter

 //gia kathena apta 52 xartia epelsekse thesh trapoulas-for each of 52 cards choose deck's position

 for(card=1;card<CARDS;++card)
  {//anoigw gia-open for
   //epelsekse nea thesh mexri na vrethei thesh p den katalavenei-choose new position while find a position dont undrestand

   do {
     
     row=rand()%SUITS;
     column=rand()%FACES;
  }while(wDeck[row][column]!=0); //telos do while-close do while

  //topothetise arithmo xartiou sthn epilegmenh thesh trapoulas-posit number of card in choosen position of deck
  
   wDeck[row][column]=card;

 }//kleinw gia-close for

 }//kleinw synarthsh shuffle-close shuffle function

//anakatepse xartia trapoulas-shuffle cards of deck
void deal(unsigned int wDeck[][FACES],const char *wFace[],const char *wSuit[])

{//arxh synarthshs deal-open deal function

  size_t card; //metrhths xartiwn-cards counter
  size_t row; //metrhths grammwn-rows counter
  size_t column; //metrhths steilwn-columns counter

 //anakatepse kathena apta 52 xartia-shuffle for each of 52 cards

  for(card=1;card<=CARDS;++card)

   {//1

    //epanalave stis grammes tou deck-repeat in rows of deck

     for(row=0;row<SUITS;++row)

     {//2

     //epanalave stis stiles tou wDeck gia thn trexousa grammh-repeat in columns of wDeck for each in running row

       for(column=0;column<FACES;++column)


         {//3

       //ean ∋ yparxei h thesi gia to trexwn grammh emfanise to xarti-if ∋ exist the position of this running row print the card

           if(wDeck[row][column]==card)

              {//4

           printf("%5s of %-8s%c",wFace[column],wSuit[row],card %2 == 0 ? '\n' : '\t' ); //morfh 2 stilwn-appearance for 2 columns
    
                   }//4


                }//3


             }//2


          }//1



  }//telos synarthshs deal-close  deal function

  
  




   

  

    
   
