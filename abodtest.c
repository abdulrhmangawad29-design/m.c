#include <unistd.h>
#include <stdio.h>
//دالة التحقق اذا كان عدد الاحرف ثمانية او اكبر
int check_password_length(char password[]){
    int length = 0;
    while(password[length] != '\0'){
    length++;
    
}
return length>=8;
}

//دالة تفحص حرف كبير واحد على الاقل
int check_upperletter(char password[]){
    
    int character = 0;
    int count = 0;
    while(password[character] != '\0'){
        count+=(password[character]>='A'&&password[character]<='Z');
        character++;
       
    }
     return count>0;
  }


//دالة تفحص حرف صغير واحد عبى الاقل
int check_lowerletter(char password[]){
    int character = 0;
    int count = 0;
    while(password[character] != '\0'){
        count+=(password[character] >= 'a' && password[character]<= 'z');
        character++;
        
    }
    return count>0;
    }


//دالة تفحص رقم واحد على الاقل
int check_digit(char password[]){
    int character =0;
    int count =0;
    while(password[character] != '\0'){
        count+=(password[character]>='0'&& password[character]<='9');
        character++;
       
    }
     return count>0;
}


//الدالة الرئيسية
int main(){
    char user_password[]= "Aboded1";
    write(1,"need at least 8 character.\n",(sizeof("need at least 8 character.\n")-1)*(1-check_password_length(user_password)));
    write(1, "need at least one uppercase letter.\n",(sizeof("need at least one uppercase letter.\n")-1)*(1-check_upperletter(user_password)));
    write(1, "need at least one lowercase letter.\n",(sizeof("need at least one lowercase letter.\n")-1)*(1-check_lowerletter(user_password)));
    write(1, "need at least one digit.\n",(sizeof("need at least one digit.\n")-1)*(1-check_digit(user_password)));
    int result = (check_password_length(user_password)&&check_upperletter(user_password)&&check_lowerletter(user_password)&&check_digit(user_password));
    write(1, "password is correct.\n",(sizeof("password is correct.\n")-1)*result);
    write(1, "password is incorrect.\n",(sizeof("password is incorrect.\n")-1)*(1-result));
    return 0;
  }
