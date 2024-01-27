#include <base.h>

void kernel_main()
{
	char *src =scr2; //(char *)0x000b8000L;
	
	int x=0;
	int y=0;
	int n=0;
	char *hello[10];
	hello[0]="x86";
	hello[1]="8086";
	hello[2]="80186";
	hello[3]="80286";
	hello[4]="80386";
	hello[5]="80486";
	hello[6]="ARM";
	hello[7]="ARM7";
	clear();
	locate(0,0);
	
	for(n=0;n<8;n++){
		locate(n+1,n+1);
		print(hello[n]);
		
}

	
	
}


