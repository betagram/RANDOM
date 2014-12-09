#undef NDEBUG
#include <assert.h>
#include <stdio.h>
#include <time.h>

#include <stdlib.h>

int main()
{
	static const struct tm *ts_work;
	time_t tt_ct;

	FILE *fp;

	if((fp = fopen("test.c", "rw")) == NULL){
		fputs("file can'ot open.\n", stdout);
		return (-1);
	}	

	while(1){
		time(&tt_ct);
		//fputs(ctime(&tt_ct), stdout);
		ctime(&tt_ct);
		ts_work = localtime(&tt_ct);
		//printf("%d\n", ts_work->tm_min);
		if(ts_work->tm_min == 43){
			printf("%d\n", ts_work->tm_min);
			return (0);
		}
	}
	return (0);
}
