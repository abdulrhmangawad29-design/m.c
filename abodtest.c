#include <unistd.h>
#include <stdio.h>

// فحص هل كلمة المرور تحتوي على ثمانية احرف على الاقل
int check_password(char password[]){
  int length = 0;
  while (password[length] != '\0'){
  length++;
  }  return length >= 8;
}


//فحص هل كلمة المرور تحتوي على حرف ةاحد كبير على الاقل
int check_uppercaracter(char password[]){
    int carcter = 0;
    int count = 0;
    while (password[carcter] != '\0'){
        count+= (password[carcter] >= 'A' && password[carcter] <= 'Z');
        carcter++;
    }
    return count > 0;
}



//فحص هل كلمة المرور تحتوي على حرف واحد صغير على الاقل
int check_lowercaracter(char password[]){
    int carcter = 0;
    int count = 0;
    while (password[carcter] != '\0'){
        count+= (password[carcter] >= 'a' && password[carcter] <= 'z');
        carcter++;
    }
    return count > 0;
}



//فحص هل كلمة المرور تحتوي على رقم واحد على الاقل
  int check_number(char password[]){
    int carcter = 0;
    int count = 0;
    while (password[carcter] != '\0'){
        count+= (password[carcter] >= '0' && password[carcter] <= '9');
        carcter++;
    }
    return count > 0;
  }


  
// الدالة الرئيسية (بداية الكود) 
  int main() {
    char my_password[] = "Abod123";
    int result = (check_password(my_password) && check_uppercaracter(my_password) && check_lowercaracter(my_password ) && check_number(my_password));
    

    write(1, "Password is correct.\n", 19 * result);
    write(1, "Password is incorrect.\n", 21 * (1 - result));
    
    return 0;
}


