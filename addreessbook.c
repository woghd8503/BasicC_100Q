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
		printf("\n ���ο� ����ó�� �߰����ּ���\n");
		printf("1. �̸� : ");
		scanf_s("%s", p_friend -> name);
		printf("2. ���� : ");
		scanf_s("%hu", &p_friend -> age);
		printf("3. �ڵ�����ȣ : ");
	    scanf_s("%c", &p_friend -> phonenumber);
		printf("�Է��Ͻô��� ����ϼ̽��ϴ�. \n\n");
		return 1;
	} else {
		printf("100���� ģ������ 10���� ������ ģ���� ���� \n");
		printf("�׷��� �ִ� %d������� ���� �սô�. \n\n", MAX_COUNT);
	}
	return 0;
}

void ShowFriendList(person *p_friend, int count)
{
	int i;
	if (count > 0) {
		printf("\n����� Best friends\n");
		printf("======================================\n");
		for (i = 0; i < count; i++) {
			printf("%-10s, %3d, %6.2f, %6.2f\n", p_friend -> name, p_friend -> age, p_friend->phonenumber);
				p_friend++;
		}
		printf("======================================\n\n");
	} else {
		printf("\n �� ������?\n\n");
	}
}

void main()
{
person friends[MAX_COUNT];
int count = 0, num;

    while(1) {

	printf("   [�޴�]   \n");
	printf("===============\n");
	printf("1. ��¥ ���� ģ�� �߰�  \n");
	printf("2. ������ ģ�� ����\n");
	printf("3. ����           \n");
	printf("===============\n");
	printf("��ȣ ���� : ");
	scanf_s("%d", &num);
	if (num == 1) {
		if (1 == AddFriend(friends, count)) count++;
	    }   else if (num == 2) {
		ShowFriendList(friends, count);
		} else if (num == 3) {
		break;
		} else {
		printf("1~3 ��ȣ�� ������ �� �ֽ��ϴ�!!\n\n");
	    }
    }

}