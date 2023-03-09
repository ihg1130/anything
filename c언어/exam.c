#include <stdio.h>
#include <stdlib.h>
#define MAX 3
#define OB 4

char grade(float favg);

void main() {
//   int ikor1 =10, ikor2 =20;
//   
//   int ikor[2];
//   ikor[0]=30;
//   ikor[1]=50;
//   
//   printf("[%d] : %d\n", &ikor1, ikor1);
//   printf("[%d] : %d\n", &ikor2, ikor2);
//   
//   printf("[%d] : %d\n", &ikor[0], ikor[0]);
//   printf("[%d] : %d\n", &ikor[1], ikor[1]);
   
   int istd[MAX][OB];
   float favg[MAX];
   int i;
   char cgrade[MAX];
   for(i=0; i<MAX; i++){
      printf("[%d]국어 영어 수학 : ", i+1);
      scanf("%d %d %d", &istd[i][0], &istd[i][1], &istd[i][2]);
      
      istd[i][3] = istd[i][0] + istd[i][1] + istd[i][2];
      favg[i] = (float)istd[i][3]/3;
      
      cgrade[i] = grade(favg[i]);
   }
   
   printf("============성적표==============\n");
   printf("번호\t 국어\t 영어\t 수학\t 합계\t 평균\t 학점\n");
    
    for(i=0; i<MAX; i++){
       printf("%d\t %d\t %d\t %d\t %d\t %.2f\t %c\n", i+1, istd[i][0], istd[i][1], istd[i][2], istd[i][3], favg[i], cgrade[i]);
   }
}
   char grade(float favg){
      char temp;
      if(favg >= 90)
           temp ='A';
       else if(favg >= 80)
           temp ='B';
       else if(favg >= 70)
           temp ='C';
       else if(favg >= 60)
            temp ='D';
       else
            temp ='F';
       
      return temp;
   }
   
   
   
   
   
   

