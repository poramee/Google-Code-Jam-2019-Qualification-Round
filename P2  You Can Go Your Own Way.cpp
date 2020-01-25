#include <stdio.h>

char inputPath[50010];

int main(){
	int t;
	scanf("%d",&t);
	for(int a = 1;a <= t;++a){
		int input;
		scanf("%d",&input);
		for(int i = 0;i < 2*input;++i) inputPath[i] = '\0';
		scanf("%s",inputPath);
		printf("Case #%d: ",a);
		for(int i = 0;i < 2*input;++i){
			if(inputPath[i] == 'E') printf("S");
			else if(inputPath[i] == 'S') printf("E");
		}
		printf("\n");
	}
}