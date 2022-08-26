#include <stdio.h>
#include "../include/mbase64.h"

int main(int argc, char** argv) {

	puts("\tmaddsua's base64 demo program");
	puts("\t https://github.com/maddsua\n");

	const char* srcstr = "This is a simple test string";

	//	"convert" data types, it's both 8 bit integers anyways
	char* encoded = mad_b64Enc((const unsigned char*)srcstr, strlen(srcstr));
	char* decoded = (char*)mad_b64Dec(encoded, NULL);

	printf("Original:\t%s\n", srcstr);
	printf("Encoded:\t%s\n", encoded);
	printf("Decoded:\t%s\n\n", decoded);

	if(mad_b64Valid(encoded)) {
		puts("Generated valid base64 string");
	} else {
		puts("The base64 string is not valid. WHAT THE...");
	}

	if(!strcmp(srcstr, decoded)) {
		puts("Done with no errors");
	} else {
		puts("Something went wrong");
	}

	free(encoded);
	free(decoded);

	return 0;
}
