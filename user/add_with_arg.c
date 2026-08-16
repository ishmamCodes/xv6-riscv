// user/add_with_arg.c
#include "kernel/types.h"
#include "user/user.h"
int main(int argc, char *argv[]){
if(argc < 3){
printf("Addition failed_____No arguments given_____\n");
}
else if(argc == 3){
int a = atoi(argv[1]);
int b = atoi(argv[2]);
int add = a + b;
printf("addition of 2 inputs %d and %d = %d\n",a,b,add);
}
else{
printf("Addition failed_____Too many arguments given_____\n");
}
return 0;
}