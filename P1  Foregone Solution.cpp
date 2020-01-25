#include <stdio.h>
#include <string.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int i = 1;i <= t;++i){
		char in[110];
		char ans[110];
		for(int a = 0;a < 110;++a) in[a] = ans[a] = '\0';
		scanf("%s",in);
		const int length = strlen(in);
		int ansCnt = 0;
		for(int a = 0;a < length;++a){
			if(in[a] == '4'){
				in[a] = '3';
				ans[ansCnt++] = '1';
			}
			else if(ansCnt > 0) ans[ansCnt++] = '0';
		}
		printf("Case #%d: %s %s\n",i,in,ans);
	}
}