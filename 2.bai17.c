#include <stdio.h>
void main()
{
	int num[5], ctr, sum = 0;
	int tinhtong(int num_arr[]);

	for (ctr = 0; ctr < 5; ctr++) 
	{
		printf("\nNhap so %d: ", ctr + 1);

		scanf("%d", &num[ctr]);
	}
	sum = tinhtong(num);
	printf("\nTrung binh cong cua cac so la is %d", sum);

}
int tinhtong(int num_arr[])
{
	int i, total, trungbinh;
	for (i = 0, total = 0; i < 5; i++) 
		total += num_arr[i];
	trungbinh = total / 5;
	return trungbinh;
}