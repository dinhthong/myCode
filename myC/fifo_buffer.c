/*
Compile command:
$gcc [filename].c -o a
Buffer with buff_size N
*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#define N 20
#define M 7
char push_buffer(int push_value, int* buffer_address, unsigned int *buff_index, unsigned int buff_size);
char pop_buffer(int* buffer_address, unsigned int *buff_index, unsigned int buff_size, int *pop_value);
void print_buffer(int *int_buff, const unsigned int buff_size);

int buffer[N];
unsigned int index_buff;
int main()
{
	int temp_pop_value;
	for (int m = 0; m<N+5;m++) {
		push_buffer(m+5, buffer, &index_buff, N);
	}
	print_buffer(buffer, N);
	for (int m = 0; m<M+4;m++) {
		if (pop_buffer(buffer, &index_buff, N, &temp_pop_value)) {
			printf("pop value: %d, ", temp_pop_value);
		}
		else {
			printf("pop failed\n");
		}
		printf("index = %d\n", index_buff);
	}
	print_buffer(buffer, N);
	return 0;
}

/*
	return 0: buffer full, can't pop anymore
	in case user wants to implement auto remove buffer -> implement differently
*/
char push_buffer(int push_value, int* buffer_address, unsigned int *buff_index, unsigned int buff_size) {
	if (*buff_index==buff_size) {
		return 0;
	}
	else {
		printf("%d, push value= %d\n", *buff_index, push_value);
		buffer_address[*buff_index] = push_value;
		*buff_index=*buff_index+1;
		return 1;
	}
}
/*
	return 0: pop fail, there's none in buffer
	return 1: pop success
*/
char pop_buffer(int* buffer_address, unsigned int *buff_index, unsigned int buff_size, int *pop_value) {
	/* nothing in buffer */
	if (*buff_index==0)  {
		return 0;
	}
	*pop_value = buffer_address[0];
	*buff_index=*buff_index-1;
	/*
		there's one value left
	*/
	if (*buff_index==0)  {
		/* reset this element */
		buffer_address[0] = 0;
	}
	else {
		/* shift buffer left 1 and reset other elements*/
		for (char k=0;k<index_buff;k++) {
		buffer_address[k]=buffer_address[k+1];
		buffer_address[k+1] = 0;
	}
	}
	return 1;
}

void print_buffer(int *int_buff, const unsigned int buff_size) {
	printf("print buffer \n");
	for (int m = 0; m<buff_size;m++) {
		printf("%d, ",*(int_buff+m));
	}
	printf("\n");
}

