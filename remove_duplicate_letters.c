//#include<stdio.h>
int shift(char *arr)
{
	while(*arr!= '\0')
	{
		*arr = *(arr+1);
		++arr;
	}
	return 0;
}
int cmp(char *temp , char *arr)
{
	
	while(*arr != '\0')
	{
		if(*temp == *arr)
		shift(arr);
		++arr;
	}
	return 0;
}
int remove_duplicate(char *arr)
{
	char temp;
	while(*arr != '\0')
	{
		
		temp = *arr;
		do{
			cmp(&temp , arr+1);
		}
		while(temp == *(arr+1));
		++arr;
	}
	return 0;
}
/*
int main()
{
	char a[100];
	scanf("%s",a);
	remove_duplicate(a);
	printf("%s",a);
	return 0;
}
*/
