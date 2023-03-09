#include <stdio.h>
#define MAX 10000



int main(void) {
   
   char line[MAX];
//   FILE* file = fopen("test5.txt", "w");
//   if(file==NULL){
//      printf("파일 열기 실패\n");
//      return 1;
//}
//   
//   fputs("fputs로 글을 적어볼게요\n", file);
//   fputs("잘 적히는지 확인\n", file);
 
//   fclose(file);
//   printf("File success\n");
//   
   else {
//   printf("file fail");
//}
//}
   
   FILE * file = fopen("test5.txt", "rb");
   if(file==NULL){
      printf("파일 열기 실패\n");
      return 1; }
   

   while(fgets(line, MAX, file) !=NULL){
      printf("%s", line);
   }
   
   fclose(file);
}   
   

