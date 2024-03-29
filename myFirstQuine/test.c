#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *s1 = "#include <stdio.h>%c#include <stdlib.h>%c%cint main(void) {%c";
	char *s2 = "	char *s%c = %c%s%c;%c	char *s%c = %c%s%c;%c";
	char *s3 = "	char n = '%cn', q = '%c', b = '%c%c';%c";
	char *sp = "printf(";
	char *s4 = "	%ss1, n, n, n, n);%c";
	char *s5 = "	%ss2, '1', q, s1, q, n, '2', q, s2, q, n);%c	%ss2, '3', q, s3, q, n, 'p', q, sp, q, n);%c";
	char *s6 = "	%ss2, '4', q, s4, q, n, '5', q, s5, q, n);%c	%ss2, '6', q, s6, q, n, '7', q, s7, q, n);%c";
	char *s7 = "	%ss3, b, q, b, b, n);%c	%ss4, sp, n, sp, n);%c	%ss5, sp, n, sp, n);%c	%ss6, sp, n, sp, n);%c	%ss7, sp, n, sp, n, sp, n, sp, n, sp, n, n, n);%c	return EXIT_SUCCESS;%c}%c";
	char n = '\n', q = '"', b = '\\';
	printf(s1, n, n, n, n);
	printf(s2, '1', q, s1, q, n, '2', q, s2, q, n);
	printf(s2, '3', q, s3, q, n, 'p', q, sp, q, n);
	printf(s2, '4', q, s4, q, n, '5', q, s5, q, n);
	printf(s2, '6', q, s6, q, n, '7', q, s7, q, n);
	printf(s3, b, q, b, b, n);
	printf(s4, sp, n, sp, n);
	printf(s5, sp, n, sp, n);
	printf(s6, sp, n, sp, n);
	printf(s7, sp, n, sp, n, sp, n, sp, n, sp, n, n, n);
	return EXIT_SUCCESS;
}
