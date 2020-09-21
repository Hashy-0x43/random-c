#include <stdio.h>

int check();

int check(int input) {
          int pin = 27960 / 15;
          
          if(input != pin) {
                    printf("Wrong\n");
          }
          
          if(input == pin) {
                    printf("Correct!\n");
          }
}

int main(int argc,char **argv[1]) {
          int x = argv[1];
          
          if(argc != 2) {
                    printf("pin_check <pin>\n");
          }
          
          if(argc == 2) {
                    check(x);
          }
}
