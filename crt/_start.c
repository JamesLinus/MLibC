extern int main(void);

void _start(void)
{
	main();
#ifdef __DOS__
	__asm __volatile__
	(
		"mov $0x4C, %ah\n"
		"int $0x21\n"
	);
#else
	while (1)
		__asm__ __volatile__ ("hlt\n");
#endif
}