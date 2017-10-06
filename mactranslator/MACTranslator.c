// MAC address translator 
#include <stdio.h>

int main() {
	char* MAC_str[20];
	scanf("%s", MAC_str);
	unsigned char MAC[6] = {0};
	sscanf(MAC_str, "%02x:%02x:%02x:%02x:%02x:%02x", &MAC[0], &MAC[1], &MAC[2], &MAC[3], &MAC[4], &MAC[5]); 
	printf("0x%02x%02x%02x%02x%02x%02x\n", MAC[5], MAC[4], MAC[3], MAC[2], MAC[1], MAC[0]);
}
