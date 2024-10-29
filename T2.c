#include <stdio.h>

int arch_type();

int main (){

int x = 1;

int *pointer = &x;

char *checker = (char*)&x;

printf("The starting address of the pointer that points at x=1 is: %p\n", pointer);

if(*checker){
printf("By inspecting the first byte, the system is Little Endian.\n");
}
else {
printf("System is Big Endian.\n");
}


printf("The system is %d-bit\n", arch_type());
return 0;


}


int arch_type() {
int *pointer;
if (sizeof(pointer) == 4){
	return 32;}
else if (sizeof(pointer) ==8){
return 64;}
else {return 0;}
}
