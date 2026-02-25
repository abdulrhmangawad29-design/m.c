#include <unistd.h>
#include <stdio.h>
// دالة فحص عدد الاحرف
int A(char password[]){
    int B=0;
    while(password[B] != '\0'){
        B++;
    }
    if (B>=8){
        return 1;
    }
        return 0;
    }

// دالة تحقق اذا كان موجود حرف كبير واحد
int B(char password[]){
    int A=0;
    while(password[A] != '\0' ){
         if(password[A]>= 'A' && password[A]<='Z'){
            return 1;
        }
        A++;
    }
    
            return 0;
        }
    



//  دالة تحقق اذا كان موجود حرف صغير واحد
int C(char password[]){
    int A=0;
    while(password[A] != '\0' ){
         if(password[A]>= 'a' && password[A]<='z'){
            return 1;

            
        }
        A++;
    }
       
            return 0;
        }
    



//تحتوي على رقم واحد على الاقل
int D(char password[]){
    int A=0;
     while(password[A] != '\0'){
        if(password[A] >= '0' && password[A] <= '9'){
            return 1;
        }
        A++;
    }
    return 0;
}
    


int main(){
    char password[100];
    write(1 ,"Enter your password: " ,21 );
    scanf(" %s " , password);
    while(password[] != '\0'){
      if(A(password) && B(password) && C(password) && D(password) ){
        write(1 , " Your password is valid" , 21);
      }else{
        write(1, "Your password is invalid", 23 );
      }
    
  
   return 0;
  
}
}
