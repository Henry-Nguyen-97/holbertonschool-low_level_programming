#include <stdio.h>
#include <time.h>

#define DATASET_SIZE 50000
#define SEED_VALUE 42u

static int dataset[DATASET_SIZE];

static unsigned int next_value(unsigned int *state)
{
	*state = (*state * 1103515245u) + 12345u;
	return *state;
}

static void build_dataset(void)
{
	unsigned int state;
	int i;

	state = SEED_VALUE;

	for (i = 0; i < DATASET_SIZE; i++)
        dataset[i] = (int)(next_value(&state) % 100000);
}

static void process_dataset(void)
{
	int i;
	int v;

	for (i = 0; i < DATASET_SIZE; i++)
	{
		v = dataset[i];
		v = (v * 3) + (v / 7) - (v % 11);
		if (v < 0)
		    v = -v;
		dataset[i] = v;
	}
}

static unsigned long reduce_checksum(void)
{
	unsigned long sum;
	int i;

	sum = 0;
	for (i = 0; i < DATASET_SIZE; i++)
        sum = (sum * 131ul) + (unsigned long)dataset[i];

	return sum;
}

int main(void)
{
	unsigned long checksum;

	/* Students must add clock-based timing and print required lines. */

	clock_t start;
	clock_t end;
	double build_time;
	double process_time;
	double reduce_time;
	double total_time;

	/* Get build time */
	start = clock();
	build_dataset();
	end = clock();
	build_time = ((double) (end - start)) / CLOCKS_PER_SEC;

	/* Get process time */
	start = clock();
	process_dataset();
	end = clock();
	process_time = ((double) (end - start)) / CLOCKS_PER_SEC;

	/*Get reduce time */
	start = clock();
	reduce_checksum();
	end = clock();
	reduce_time = ((double) (end - start)) / CLOCKS_PER_SEC;

	total_time = build_time + process_time + reduce_time;
	checksum = reduce_checksum();

	if (checksum == 0ul)
        printf("impossible\n");

	printf
	(
	 "TOTAL seconds: %.6f\nBUILD_DATA seconds: %.6f\nPROCESS seconds: %.6f\nREDUCE seconds: %.6f", total_time, build_time, process_time, reduce_time
	);

	/* Required output (exact format, no extra lines):
	* TOTAL seconds: <float>
	* BUILD_DATA seconds: <float>
	* PROCESS seconds: <float>
	* REDUCE seconds: <float>
	*/

	return 0;
}

