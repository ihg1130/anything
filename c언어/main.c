#include <stdio.h>
#include <stdlib.h>
struct gameinfo{
   char * name;
   int year;
   int price;
   char * company;
   
   struct gameinfo *friendgame; //����ü �ȿ� ����ü 
}; 

typedef struct gameinformation{
   char * name;
   int year;
   int price;
   char * company;
   
   struct gameinfo *friendgame; //����ü �ȿ� ����ü 
} game_info; // ���� ����ü�� �̰ɷ� ġȯ 
int main(void) {
   
   char * name = "��������";
   int year = 2017;
   int price = 50;
   char * company = "����ȸ��";
   
     //����ü ��� 
     struct gameinfo gameinfo1;
     gameinfo1.name = "��������";
     gameinfo1.year = 2017;
     gameinfo1.price = 50;
    gameinfo1.company = "����ȸ��";
    
    //����ü ��� 
   printf("���Ӹ� : %s\n", gameinfo1.name);
   printf("�߸ſ��� : %d\n", gameinfo1.year);
   printf("���� : %d\n", gameinfo1.price);
   printf("���ۻ� : %s\n", gameinfo1.company);
   
   //����ü�� �迭ó�� �ʱ�ȭ 
   struct gameinfo gameinfo2 = {"�ʵ�����", 2017, 100 ,"�ʵ�ȸ��"
   };
   
   printf("���Ӹ� : %s\n", gameinfo2.name);
   printf("�߸ſ��� : %d\n", gameinfo2.year);
   printf("���� : %d\n", gameinfo2.price);
   printf("���ۻ� : %s\n", gameinfo2.company);
   
   //����ü �迭 
   struct gameinfo gamearray[2] ={
      {"��������", 2017, 50 ,"����ȸ��"},
      {"�ʵ�����", 2017, 100 ,"�ʵ�ȸ��"}
   }; 
   
    //����ü ������ 
   struct gameinfo * gameptr;  
   gameptr = &gameinfo1;
   printf("\n\n���Ӹ� : %s\n", (*gameptr).name);
   printf("�߸ſ��� : %d\n", (*gameptr).year);
   printf("���� : %d\n", (*gameptr).price);
   printf("���ۻ� : %s\n", (*gameptr).company);
   
   printf("\n\n���Ӹ� : %s\n", gameptr->name);
   printf("�߸ſ��� : %d\n", gameptr->year);
   printf("���� : %d\n", gameptr->price);
   printf("���ۻ� : %s\n", gameptr->company);
   
   //����ü �ȿ� ����ü 
   gameinfo1.friendgame = &gameinfo2; 
   
   printf("\n\n���Ӹ� : %s\n", (*gameinfo1.friendgame).name);
   printf("�߸ſ��� : %d\n", gameinfo1.friendgame->year);
   printf("���� : %d\n", gameinfo1.friendgame->price);
   printf("���ۻ� : %s\n", gameinfo1.friendgame->company);
   
   //typedef
   //�ڷ����� ���� ���� 
   int i =1 ;
   typedef int as;
   typedef float cs;
   as asd = 3;
   cs csd = 3.23f;
   printf("\n\n��������: %d, �Ǽ�����: %.2f\n", asd, csd); 
   
   game_info game2;
   game2.name = "�ѱ۰���2";
   game2.year = 2014;
   printf("\n\n���Ӹ� : %s\n", game2.name);
   printf("�߸ſ��� : %d\n", game2.year);
   return 0;
}
