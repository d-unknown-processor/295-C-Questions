main()
{
	char *p="abc";
	char *q="abc123";
	while(*p==*q)
	{
			printf("%c %c",*p,*q);
			p++;
			q++;
	 }
}