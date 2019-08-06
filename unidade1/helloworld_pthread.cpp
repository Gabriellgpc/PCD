#include <pthread.h>
#include <cstdio>

#include <cstring>

void *work(void *id){
	printf("Heelo World:%d\n",(int)id);
}

#define MAX 5

int main(){	
	pthread_t ptr[MAX];
	int a[5];
	memset(a, 0, 100);
	

	for(int i = 0; i < 100; i++)
		printf("%d", a[i]);
/*
	for(int i = 0; i < 2*MAX; i++)
		pthread_create(&ptr[i], NULL, &work, (void*)i);
	

	for(int i = 0; i < 2*MAX; i++)
		pthread_join(ptr[i], NULL);

	return 0;
	*/
	printf("Fim!");

}
