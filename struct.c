#include<stdio.h>
struct employee
{
	char name[20];
	int age;
	int pno;
	int sal;
}e1,e2,e3;
main()
{
 struct employee e1={"Chirag",24,1234556789,200000
	};
	struct employee e2={"Arnav",31,1234556678,20000000
	};
	struct employee e3={"Shivam",45,1281101111,30000000
	};
	printf("\nName\tAge\tPhoneNumber\tSalary");
	printf("\n%s\t%d\t%d\t%d",e1.name,e1.age,e1.pno,e1.sal);
	printf("\n%s\t%d\t%d\t%d",e2.name,e2.age,e2.pno,e2.sal);
	printf("\n%s\t%d\t%d\t%d",e3.name,e3.age,e3.pno,e3.sal);
}
