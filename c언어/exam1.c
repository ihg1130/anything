#include <stdio.h>
#define MAX 10000



int main(void) {
   
   char line[MAX];
//   FILE* file = fopen("test5.txt", "w");
//   if(file==NULL){
//      printf("���� ���� ����\n");
//      return 1;
//}
//   
//   fputs("fputs�� ���� ����Կ�\n", file);
//   fputs("�� �������� Ȯ��\n", file);
 
//   fclose(file);
//   printf("File success\n");
//   
   else {
//   printf("file fail");
//}
//}
   
   FILE * file = fopen("test5.txt", "rb");
   if(file==NULL){
      printf("���� ���� ����\n");
      return 1; }
   

   while(fgets(line, MAX, file) !=NULL){
      printf("%s", line);
   }
   
   fclose(file);
}   
   

