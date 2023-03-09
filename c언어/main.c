#include <stdio.h>
#include <stdlib.h>
struct gameinfo{
   char * name;
   int year;
   int price;
   char * company;
   
   struct gameinfo *friendgame; //구조체 안에 구조체 
}; 

typedef struct gameinformation{
   char * name;
   int year;
   int price;
   char * company;
   
   struct gameinfo *friendgame; //구조체 안에 구조체 
} game_info; // 위에 구조체를 이걸로 치환 
int main(void) {
   
   char * name = "나도게임";
   int year = 2017;
   int price = 50;
   char * company = "나도회사";
   
     //구조체 사용 
     struct gameinfo gameinfo1;
     gameinfo1.name = "나도게임";
     gameinfo1.year = 2017;
     gameinfo1.price = 50;
    gameinfo1.company = "나도회사";
    
    //구조체 출력 
   printf("게임명 : %s\n", gameinfo1.name);
   printf("발매연도 : %d\n", gameinfo1.year);
   printf("가격 : %d\n", gameinfo1.price);
   printf("제작사 : %s\n", gameinfo1.company);
   
   //구조체를 배열처럼 초기화 
   struct gameinfo gameinfo2 = {"너도게임", 2017, 100 ,"너도회사"
   };
   
   printf("게임명 : %s\n", gameinfo2.name);
   printf("발매연도 : %d\n", gameinfo2.year);
   printf("가격 : %d\n", gameinfo2.price);
   printf("제작사 : %s\n", gameinfo2.company);
   
   //구조체 배열 
   struct gameinfo gamearray[2] ={
      {"나도게임", 2017, 50 ,"나도회사"},
      {"너도게임", 2017, 100 ,"너도회사"}
   }; 
   
    //구조체 포인터 
   struct gameinfo * gameptr;  
   gameptr = &gameinfo1;
   printf("\n\n게임명 : %s\n", (*gameptr).name);
   printf("발매연도 : %d\n", (*gameptr).year);
   printf("가격 : %d\n", (*gameptr).price);
   printf("제작사 : %s\n", (*gameptr).company);
   
   printf("\n\n게임명 : %s\n", gameptr->name);
   printf("발매연도 : %d\n", gameptr->year);
   printf("가격 : %d\n", gameptr->price);
   printf("제작사 : %s\n", gameptr->company);
   
   //구조체 안에 구조체 
   gameinfo1.friendgame = &gameinfo2; 
   
   printf("\n\n게임명 : %s\n", (*gameinfo1.friendgame).name);
   printf("발매연도 : %d\n", gameinfo1.friendgame->year);
   printf("가격 : %d\n", gameinfo1.friendgame->price);
   printf("제작사 : %s\n", gameinfo1.friendgame->company);
   
   //typedef
   //자료형에 별명 지정 
   int i =1 ;
   typedef int as;
   typedef float cs;
   as asd = 3;
   cs csd = 3.23f;
   printf("\n\n정수변수: %d, 실수변수: %.2f\n", asd, csd); 
   
   game_info game2;
   game2.name = "한글게임2";
   game2.year = 2014;
   printf("\n\n게임명 : %s\n", game2.name);
   printf("발매연도 : %d\n", game2.year);
   return 0;
}
