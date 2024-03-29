#include <stdlib.h>
#include <stdio.h>

char* contents = "#include <stdlib.h>\n#include <stdio.h>\n\n%s\n\n// bfunc\nvoid functionB(char *string) {\n	printf(contents, string);\n}\n\nint main() {\n	// I have to have a comment in the main function\n	functionB(contents);\n	return EXIT_SUCCESS;\n}\n";

// bfunc
void functionB(char* string) {
	printf(contents, string);
}

int main() {
	// I have to have a comment in the main function
	functionB(contents);
	return EXIT_SUCCESS;
}
