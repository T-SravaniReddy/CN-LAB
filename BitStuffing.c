#include <stdio.h>
#include <string.h>

int main() {
	char flag[] = "01111110";
	char ch[1000];
	int k = -1,count = 0;
	char out[1000];
	printf("Enter Input:");
	scanf("%s", ch);
	
	for(int i = 0; i < strlen(ch); i++) {
    		if(ch[i] == '1') {
        		count++;
		}
    		else {
        		count = 0;
		}
		k++;
		out[k] = ch[i];
    		if (count == 5) {
			k++;
			out[k] = '0';
        		count = 0;
		}
	}
	out[++k] = '\0';
	strcat(out, flag);
	strcat(flag, out);
	printf("The output is : %s\n", flag); 
	return 0;
}
