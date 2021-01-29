#include <stdio.h>
#include <stdlib.h>
#define BSIZE 1
int main(int argc, char const *argv[])
{
	FILE *srF, *dsF; 
	char buffer[BSIZE]; 
	srF = fopen(argv[1], "rb");
	dsF = fopen(argv[2], "wb");
	if(argc < 3){ 
		return 2;
	}
	while(fread(buffer, sizeof(buffer), 1, srF)){
		fwrite(buffer, sizeof(buffer), 1, dsF);
	}
	fclose(srF);
	fclose(dsF);
}