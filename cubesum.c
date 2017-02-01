#include <stdio.h>
#include <math.h>
#define even(n) (((n / 2) * 2) == n)

int map(int n);
int cubesum(int x, int y, int z);
int main(void)
{
	int index[3];
	index[0] = index[1] = index[2] = 0;
	int next[2];
	next[0] = next[1] = 0;
	int x, y, z;
	do {
/*		printf("%d\t%d\t%d\n", index[2], index[0], index[1]); */
		x = map(index[2]);
		y = map(index[0]);
		z = map(index[1]);
		printf("f(%d,%d,%d) = %d\n", x, y, z, cubesum(x,y,z));

		/* if wall is hit, go back to roof */
		if (index[0] == 0 && index[1] == 0) {
			/* extend roof */
			if (next[1] == 0) {
				next[1] = next[0];
				next[1]++;
				next[0] = 0;
			} else {
				next[0]++;
				next[1]--;
			}
			index[0] = next[0];
			index[1] = next[1];
			index[2] = 0;
		} else {
			/* slide down */
			if (index[0] == 0) {
				index[0] = index[1];
				index[1] = 0;
			} else {
				index[1]++;
			}
			index[0]--;
			index[2]++;
		}
	} while (1);
}

int cubesum(int x, int y, int z)
{
	return pow(x, 3) + pow(y, 3) + pow(z, 3);
}

int map(int n)
{
	if(even(n))
		return (-n / 2);
	return (n / 2) + 1;
}


