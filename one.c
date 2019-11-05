#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
	void main ()
	{
	static int fda,fdb;
	static char buf[20];
	fda = open("ironman", O_RDONLY);
	read(fda,buf,4);
	printf("read data is in %s\n", buf);
	printf("FDA = %d\n",fda);
	read(fda,buf,6);
	printf("read data is in %s\n", buf);
	close(fda);
	fdb = open("hulk", O_WRONLY | O_CREAT,0644);
	printf("fdb = %d\n",fdb);
//	write(fdb,buf,3);
	write(1,buf,3);
	close(fdb);
	}

//stdin 0
//stdout 1
//stderr 2
//ironman 3

