#include <stdio.h>
#include <string.h>

void stringExampleOne()
{
 char name[]="student";
 printf("name = %p\n", name);
 printf("&name[0] = %p\n", &name[0]);
 printf("name printed as %%s is %s\n",name);
 printf("*name = %c\n",*name);
 printf("name[0] = %c\n", name[0]);
}

void stringExampleTwo() {
	char farmer[7];
	farmer[0] = 'F';
	farmer[1] = 'a';
	farmer[2] = 'r';
	farmer[3] = 'm';
  farmer[4] = 'e';
  farmer[5] = 'r';
	farmer[6] = '\0';
	printf("The string %s is %lu characters long\n", farmer, strlen(farmer)); // Does strlen include the null character in its calculation?

	// Another way of creating a string.
	char student_name[5] = "name";
  getchar();
	// What does this do?
	char *ptr = student_name;
  printf("ptr before: %p\n", ptr);
	ptr++;
  printf("ptr after: %p\n", ptr);
	*ptr = '!';
	printf("His name is %s\n", student_name);

	// Why does the following code cause an error?
	// const char sally[6] = "Sally";
  // char* sally_ptr = (char*) &sally[3]
	// // sally[0] = 's';
  // *sally_ptr = 'M';
}

void buggyOne() {
	// What is the issue with joyce and Sally?
	char joyce[5] = "joyce";
	char sally[5] = "Sally";
	// What do you expect to be printed here? Think about the stack!
	printf("%s\n", joyce);
	printf("%s\n", sally);
}

void buggyTwo() {
	int sum = 0;
	int arr[3] = {1, 2, 3}; // 0, 1, 2
	for (int i = 0; i <= 3; i++) { // 0, 1, 2, 3
		sum += arr[i];
	}
	printf("The sum = %d\n", sum);
}

void changeLiteral() {
  char* lit = "CIT593"; // this is a string literal. Where is this saved in memory?
  char str[] = "CIT593"; // this is a regular character array as a string. Where is this saved in memory?
  printf("literal: %s, string: %s\n", lit, str);
  str[0] = '.';
  getchar();
  printf("literal: %s, string: %s\n", lit, str);
  getchar();
  lit[0] = '.';
  printf("literal: %s, string: %s\n", lit, str);
}

//I out getchar() in there so that you can control the outputs
int main() {
	stringExampleOne();
  getchar();
	stringExampleTwo();
  getchar();
	buggyOne();
  getchar();
	buggyTwo();
  getchar();
  changeLiteral();
}


// This below is just to show how arguments are read into main from the command line
//syntax will be ./strings arg1 arg2 arg3
//remember that ./strings will be the first argument in argv
// int main(int argc, char** argv) {
//    printf ("# of arguments passed: %d\n", argc) ;
//    for (int i=0; i< argc ; i++) {
//      printf ("argv[%d] = %s\n", i, argv[i]) ;
//    }
// }
