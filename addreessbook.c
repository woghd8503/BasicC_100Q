#include <stdio.h>
#define MAX_COUNT   5

typedef struct people
{
	char name[10];
	unsigned short int age;
	char phonenumber;
	//char birthday;
} person;
int Addaddress(person *p_friend, int count)
{
	if (count < MAX_COUNT) {
		p_friend = p_friend + count;
		printf("\n 새로운 연락처를 추가해주세요\n");
		printf("1. 이름 : ");
		scanf_s("%s", p_friend -> name);
		printf("2. 나이 : ");
		scanf_s("%hu", &p_friend -> age);
		printf("3. 핸드폰번호 : ");
	    scanf_s("%c", &p_friend -> phonenumber);
		printf("입력하시느라 고생하셨습니다. \n\n");
		return 1;
	} else {
		printf("100명의 친구보다 10명의 진정한 친구가 낫다 \n");
		printf("그래서 최대 %d명까지만 관리 합시다. \n\n", MAX_COUNT);
	}
	return 0;
}

void ShowFriendList(person *p_friend, int count)
{
	int i;
	if (count > 0) {
		printf("\n저장된 Best friends\n");
		printf("======================================\n");
		for (i = 0; i < count; i++) {
			printf("%-10s, %3d, %6.2f, %6.2f\n", p_friend -> name, p_friend -> age, p_friend->phonenumber);
				p_friend++;
		}
		printf("======================================\n\n");
	} else {
		printf("\n 넌 누구냐?\n\n");
	}
}

void main()
{
person friends[MAX_COUNT];
int count = 0, num;

    while(1) {

	printf("   [메뉴]   \n");
	printf("===============\n");
	printf("1. 진짜 좋은 친구 추가  \n");
	printf("2. 최정예 친구 보기\n");
	printf("3. 종료           \n");
	printf("===============\n");
	printf("번호 선택 : ");
	scanf_s("%d", &num);
	if (num == 1) {
		if (1 == AddFriend(friends, count)) count++;
	    }   else if (num == 2) {
		ShowFriendList(friends, count);
		} else if (num == 3) {
		break;
		} else {
		printf("1~3 번호만 선택할 수 있습니다!!\n\n");
	    }
    }

}