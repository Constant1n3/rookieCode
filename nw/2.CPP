#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<string.h>
#include<sys/time.h>

int power(int n)
{
    int res = 1, i;
    for (i = 0; i < n; i++) {
	res *= 2;
    }

    return res;
}

int x = 0;
void capture()
{
    exit(0);
}

int get()
{
    return x;
}

void put()
{
    x++;
}

void node(char *p)
{
    int name, nCol = 0, r, r1;
    int seq1, seq2, i = 0;
    int in, ans = 1;
    long int t;

    name = atoi(p);
    while (1) {
	seq1 = get();
	seq2 = get();

	if (seq1 == seq2) {

	    put();
	    seq1 = get();
	    printf("station %d transmitting frame %d\n", name, ++i);
	    sleep(6);		//transmission time
	    seq2 = get();
	    if (seq1 != seq2) {
		nCol++;
		printf("station %d collision occured for frame %d \n",
		       name, i--);

		if (nCol > 15) {
		    break;
		}

		r = (rand() % power(nCol)) + 1;
		sleep(r);
	    } else {
		nCol = 0;
		printf("station %d complete\n", name);
	    }
	}
	sleep(0);		//waiting time
    }
}

int main()
{
    pthread_t t1, t2, t3, t4, t5, t6;

    pthread_create(&t1, 0, (void *) node, "1");
    pthread_create(&t2, 0, (void *) node, "2");
    pthread_create(&t3, 0, (void *) node, "3");
    pthread_create(&t4, 0, (void *) node, "4");
    pthread_create(&t5, 0, (void *) node, "5");
    pthread_create(&t6, 0, (void *) node, "6");
    while (1);

    return 0;
}