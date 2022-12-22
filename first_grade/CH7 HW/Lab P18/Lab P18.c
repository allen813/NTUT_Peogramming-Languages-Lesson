#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *in, *out;
	int cnt;
	char str[100];
	fopen_s(&in, "welcome.txt", "r");
	fopen_s(&out, "output.txt", "w");
	while (!feof(in)) {
		cnt=fscanf_s(in, "%s", str);
		if (cnt > 0)
			fprintf(out, "%s\n", str);
	}
	fclose(in);
	fclose(out);

	system("pause");
	return 0;
}