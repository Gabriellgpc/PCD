#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXSIZE 10000000

double* allocvec(long size){
	return (double*)malloc(sizeof(double)*size);
}

void initvec(double vec[], long size){
	for(long i = 0; i < size; i++)
		vec[i] = (double)rand()/RAND_MAX;
}

double computvec(double a[], double b[], long size){
	double res = 0;
	for(long i = 0; i < size; i++)
		res += a[i]*b[i];
	return res;	
}

int main(){
	double* a;
	double* b;
	double res = 0;

	srand(time(NULL));

	a = allocvec(MAXSIZE);
	b = allocvec(MAXSIZE);
	
	initvec(a,MAXSIZE);
	initvec(b,MAXSIZE);
	
	computvec(a,b,MAXSIZE);

	
	res = computvec(a,b,MAXSIZE);
//	std::cout << "result:" << res << '\n';
	printf("result: %lf\n", res);
	
	free(a);
	free(b);

	return 0;
}
