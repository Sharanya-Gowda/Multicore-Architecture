#include<stdio.h>
#include<omp.h>

int main(){
	omp_set_num_threads(8);
	#pragma omp parallel
	printf("Hello Sharanya!!The thread is %d of %d\n",omp_get_thread_num(),omp_get_num_threads());
}
