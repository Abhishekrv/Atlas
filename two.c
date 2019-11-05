#include<stdio.h>
#include<unistd.h>
#include<pthread.h>
void funca()
	{
	int i = 0;
	for (i=9 ; i>0 ; i--)
		{
		printf("A will end in %d secs\n", i );
		sleep(1);
		}
	}
void funcb()
	{
	int i = 0;
	for (i=3 ; i<6 ; i++)
		{
		printf("B will end in %d secs\n", i );
		sleep(1);
		}
	}
void main()
	{
	int i =0;
	pthread_t ta,tb;
	pthread_create(&ta, NULL, (void*)funca , NULL);
	pthread_create(&tb, NULL, (void*)funcb , NULL);
	for (i=6;i>0;i--)
		{
		printf("main will end in %d secs\n",i);
		sleep(1);
		}
	pthread_join(ta,NULL);
	pthread_join(tb,NULL);
	printf("Last line of main function");
	}

