#include <stdio.h>

     

int main(void) {
	    

	    char m[] ="mother = phone:01045402885 birthday:690815";
        printf("%s\n\n", m);

		char f[] = "father = phone:01034432885 birthday:620315";
		printf("%s\n\n", f);

		char b[] = "brother = phone:01034432885 birthday:920315";
		printf("%s\n\n", b);

		char bf[] = "bestfriend = phone:01023232875 birthday:900815";
		printf("%s\n\n", bf);

		return 0;
}

//	int main2(){
//			int father[3] = { 38868503, 703421, 66666};
//			
//			for (int i = 0; i < sizeof(father) / sizeof(int); i++)\n
//		{
//			printf("%d ", father[i]);
//		}
//	}
//
//
//
//	int main3() {
//		int brother[3] = { 12456543, 923521, 55555 };
//	for (int i = 0; i < sizeof(brother) / sizeof(int); i++)
//	{
//		printf("\n%d ", brother[i]);
//	}
//
//	return 0;
//}