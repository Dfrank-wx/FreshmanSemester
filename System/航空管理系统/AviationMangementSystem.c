
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<malloc.h>
//�������� 
void banquan();//��Ȩ���� 
void banquan1();//��Ȩ����1 
void interface();//���溯�� 
void menu();//�˵����� 
void registered();//ע�ắ��
void sheshidu ();//�¶ȶ��ձ� 
void game();//��Ϸ���� 
void interface1();//���溯��1 
void select();//ѡ���� 
void select1();//ѡ���� 1
void login();//��½����
void main1();
static i = 0;
static a = 0;
typedef struct node{
	char start_place[20];//���
	char end_place[20];//�յ�
	char start_time[20];//��ʱ��
	char end_time[20];//��ʱ��
	char no[20];//�����
	float price;//Ʊ��
	int number;//Ʊ��
	char name[20];//����
	char card[20];//֤����
	int number1;//��Ʊ����
	struct node * link; //����node�ͽṹָ�� 
}NODE; 

//typedef struct  node NODE;  //���������� 


struct user{
			char username[20];
			char password[20];
			}u[10];
void banquan()  //��Ȩ���� 
{
	printf("�� �� �� ��: �� �� �� �� ϵ ͳ// �� �� �� �� 1.6\n\n");
	printf("�� �� ��: �� �� С �� �� �� �� Ա\t\t\t\t�� Ȩ ��: 20181030107\n\n");
			}


void banquan1() { //��Ȩ���� 1
	printf("�� �� �� ��: �� �� �� �� ϵ ͳ\n\n");
	printf("�� �� ��: �� �� С �� �� �� �� Ա\t\t\t\t�� Ȩ ��: 12581\n\n");
}			


void interface()//���溯�� 
{
	printf("\t\t�� ӭ ʹ �� �� ϵ ͳ �� �� �� �� 1.6\n");
	printf("\t\t\t _________________\n");
	printf("\t\t\t|                 |\n");
	printf("\t\t\t|   1.���û�ע��  |\n");
	printf("\t\t\t|_________________|\n");
	printf("\t\t\t|                 |\n");
	printf("\t\t\t|   2. ��   ½    |\n");
	printf("\t\t\t|_________________|\n");	
	printf("\t\t\t|                 |\n");
	printf("\t\t\t|   0. ��   ��    |\n");
	printf("\t\t\t|_________________|\n");
    printf("\n");
} 


void menu()//�˵����� 
{	printf("\t\t\t*********************\n");
	printf("\t\t\t*    �� �� �� ��    *\n"); 
	printf("\t\t\t*********************\n");
	printf("\t\t*************************************\n");
	printf("\t\t*   �� �¶ȶ��ձ�--------------- 1  *\n");
	printf("\t\t*                                   *\n");
	printf("\t\t*   ��  ��  Ϸ------------------ 2  *\n");
	printf("\t\t*                                   *\n");
	printf("\t\t*   ��  ��  ��------------------ 3  *\n");
	printf("\t\t*                                   *\n");
	printf("\t\t*   ��  �������ϵͳ------------ 4  *\n");
	printf("\t\t*                                   *\n");
	printf("\t\t*   ��  ��   ��----------------- 0  *\n");
    printf("\t\t*************************************\n\n");
	
}


void registered()//ע�ắ��
{
	char username1[20]; 
	char password1[20];
	char password2[20]; 
	int k; 
	printf("\t\t   �� �� �� ½ �� Ҫ ע �� �� ��\n\n"); 	
	printf("\t\t\tע �� �� ��: ");
	scanf("%s",username1);
	printf("\n"); 
	for(k = 0;k <= i;k++){ 
		if(strcmp (u[k].username,username1) == 0){ 
			printf("\t\t**************************************\n");
		 	printf("\t\t* �� �� �� �� �� ע �� �� �� �� �� ��*\n");
		 	printf("\t\t**************************************\n\n");
			system("pause");
			system("cls");//��������
			break;}} 
		if(k > i) 	
		{
		strcpy(u[i].username,username1); 
		printf("\t\t\t�� �� �� ��: ");
		scanf("%s",password1);
	printf("\n");
while(1){
	printf("\t\t\tȷ �� �� ��: "); 
	scanf("%s",password2);
	printf("\n"); 
		if( strcmp (password1,password2) == 0 ){ 
	 	strcpy(u[i].password,password1); 
	 	printf("\t\t*********************************\n");
		printf("\t\t*       �� �� ע �� �� ��       *\n ");
		printf("\t\t*********************************\n\n");
		system("pause");
		system("cls");//�������� 
	 	i++; 
		break;} 
		else 
		printf("\t\t*******************************************\n");
		printf("\t\t* �� �� ע �� ʧ �� , �� �� �� �� �� �� *\n ");
		printf("\t\t*******************************************\n\n");
		system("pause");
		system("cls");//��������
		break;}}
} 


void sheshidu ()//�¶ȶ��ձ� 
	{ double F,C = 0.0;
		printf("\t\t\t    �����¶��뻪���¶ȶ��ձ�\n");
		printf("\t\t*------------------------------------------------* \n");
while(C <= 100){ 
	printf("\n");	
 	printf("\t\t|    �����¶�Ϊ%3.lfʱ---------->",C);
		F = 9.0 / 5 * C + 32;
	printf("�����¶�Ϊ%3.lf    |    \n",F );
		C = C + 10;
	    printf("\t\t------------------------------------------------ \n");}
	    	system("pause");
	    	system("cls");//���� 
}  


void game()
{
	int x,y,w = 0,s = 0,p = 0,sum1 = 0,sum2 = 0;
	int w1 = 0,s1 = 0;
	char z[10];
	printf("\t\t**********************************\n");
	printf("\t\t*         ��  ȭ  ��  Ϸ         *\n");
	printf("\t\t*                                *\n");
	printf("\t\t*    �� �� Ϸ �� ��              *\n");
	printf("\t\t*                                *\n");
	printf("\t\t*    �� Ӯһ�ּ�10��             *\n");
	printf("\t\t*                                *\n");
	printf("\t\t*    �� ��һ�ֿ�10��             *\n");
	printf("\t\t*                                *\n");
	printf("\t\t*    �� ƽ�ֲ��ӷֲ��۷�         *\n");
	printf("\t\t*                                *\n");
	printf("\t\t*        1: �� ʼ �� Ϸ          *\n");
	printf("\t\t*                                *\n");
	printf("\t\t*        0: �� �� �� Ϸ          *\n");
	printf("\t\t**********************************\n\n");
	printf("�� ʼ �� �� �� �� Ϸ: ");
		scanf("%d",&x);
	printf("\n");
		if(x == 1){
		printf("\t\t******************************\n");
		printf("\t\t*       ��  Ϸ  ��  ʼ       *\n");
		printf("\t\t*                            *\n");
		printf("\t\t* 1: ʯͷ    2: ����    3:�� *\n");
		printf("\t\t*                            *\n");
		printf("\t\t*     0: ��  ��  ��  Ϸ      *\n");   
		printf("\t\t******************************\n\n");
		}
    	else {
    			printf("\t\t*********************************\n");
				printf("\t\t*        ��  Ϸ  ��  ��         *\n");
				printf("\t\t*                               *\n");
				printf("\t\t*  ʤ ��: %3d      �� ��: %3d   *\n",w,w*10);
				printf("\t\t*                               *\n");
				printf("\t\t*  ʧ ��: %3d      �� ��: %3d   *\n",s,s*10);
				printf("\t\t*                               *\n");
				printf("\t\t*  ƽ ��: %3d      �� ��:   0   *\n",p);
				printf("\t\t*                               *\n");
				printf("\t\t*********************************\n\n");
				system("pause");}
    		
	while(x != 0 ){
		printf("�� ʼ �� ��: ");
		scanf("%d",&x);
		printf("\n");
		y = rand()%3;
	switch(x){
			case 1:
			switch(y){
			case 0:	
				printf("\t\t�� ѡ �� �� ��: ʯ ͷ\n\n");
				printf("\t\t�� �� ѡ �� ��: ʯ ͷ\n\n");
				printf("\t\t\t[ƽ   ��]\n\n");
				p++;break;
			case 1:
				printf("\t\t�� ѡ �� �� ��: ʯ ͷ\n\n");	
				printf("\t\t�� �� ѡ �� ��: �� ��\n\n");
				printf("\t\t\t[�� Ӯ ��]\n\n");
				w++;s1++;break;
			case 2:
				printf("\t\t�� ѡ �� �� ��: ʯ ͷ\n\n");	
				printf("\t\t�� �� ѡ �� ��:  ��\n\n");
				printf("\t\t\t[�� �� ��]\n\n");
				s++;w1++;break;}break;
		case 2:
			switch(y){
				case 0:	
				printf("\t\t�� ѡ �� �� ��: �� ��\n\n");
				printf("\t\t�� �� ѡ �� ��: �� ��\n\n");
				printf("\t\t\t[ƽ   ��]\n\n");
				p++;break;
				case 1:
				printf("\t\t�� ѡ �� �� ��: �� ��\n\n");	
				printf("\t\t�� �� ѡ �� ��: �� ��\n\n");
				printf("\t\t\t[ƽ  ��]\n\n");
				p++;break;
				case 2:
				printf("\t\t�� ѡ �� �� ��: ����\n\n");	
				printf("\t\t�� �� ѡ �� ��:  ��\n\n");
				printf("\t\t\t[�� Ӯ��]\n\n");
				w++;s1++;break;}break; 
			case 3:
				switch(y){
					case 0:	
				printf("\t\t�� ѡ �� �� ��: ��\n\n");
				printf("\t\t�� �� ѡ �� ��: ��\n\n");
				printf("\t\t\t[ƽ   ��]\n\n");
				p++;break;
			case 1:
				printf("\t\t�� ѡ �� �� ��: ��\n\n");	
				printf("\t\t�� �� ѡ �� ��: �� ��\n\n");
				printf("\t\t\t[�� �� ��]\n\n");
				s++;w1++;break;
			case 2:
				printf("\t\t�� ѡ �� �� ��:  ��\n\n");	
				printf("\t\t�� �� ѡ �� ��:  ��\n\n");
				printf("\t\t\t[ƽ  ��]\n\n");
				p++;break;} break;
			case 0:
				sum1 = w  * 10 -  s * 10;
				sum2 = w1 * 10 - s1 * 10;
				if(sum1 > sum2)
					 strcpy(z,"�� Ӯ ��");
				else if(sum2 > sum1)
					 strcpy(z,"�� �� ��");
				else 
				 	 strcpy(z,"ƽ    ��"); 
				printf("\t\t**********************************\n");
				printf("\t\t*         ��  Ϸ  ��  ��         *\n");
				printf("\t\t*                                *\n");
				printf("\t\t*   ʤ ��: %3d      �� ��: %3d   *\n",w,w * 10);
				printf("\t\t*                                *\n");
				printf("\t\t*   ʧ ��: %3d      �� ��: %3d   *\n",s,s * 10);
				printf("\t\t*                                *\n");
				printf("\t\t*   ƽ ��: %3d      �� ��:  0    *\n",p);
				printf("\t\t*                                *\n");
				printf("\t\t*   ��: %3d��       �� ��: %3d�� *\n",sum1,sum2);
				printf("\t\t*                                *\n");
				printf("\t\t*            %s            *\n",z);
				printf("\t\t**********************************\n\n");
			 system("pause");system("cls");break;}}
 } 
 
 void interface1()//���溯�� 
{
	printf("\t\t***************************************\n");
	printf("\t\t*    �� ӭ ʹ �� �� �� �� �� ϵ ͳ    *\n");
	printf("\t\t***************************************\n\n");
	printf("\t\t***************************************\n");
	printf("\t\t*   �� ¼�뺽����Ϣ--------------- 1  *\n");
	printf("\t\t*                                     *\n");
	printf("\t\t*   �� ɾ��������Ϣ--------------- 2  *\n");
	printf("\t\t*                                     *\n");
	printf("\t\t*   �� ��ѯ������Ϣ--------------- 3  *\n");
	printf("\t\t*                                     *\n");
	printf("\t\t*   �� ȫ��������Ϣ--------------- 4  *\n");
	printf("\t\t*                                     *\n");
	printf("\t\t*   ��   ��    Ʊ  --------------- 5  *\n");
	printf("\t\t*                                     *\n");
	printf("\t\t*   ��   ��    Ʊ  --------------- 6  *\n");
	printf("\t\t*                                     *\n");
	printf("\t\t*   ��   ��    ��  --------------- 0  *\n");
  	printf("\t\t***************************************\n\n");
}
 
 void select()//ѡ���� 
{
	int x;
do{
	menu();
	printf("�� �� �� �� �� ѡ ��: ");
    scanf("%d",&x); 
    printf("\n\n");
     switch(x){
     	case 1: sheshidu();break;
     	case 2: system("cls"); 
		 		game();break;
    	case 3: lvhexiang(); break;
   		case 4: banquan1(); //����1���� 
				select1();
				break;
     	case 0: 
		printf("\t\t*******************************************\n");
		printf("\t\t* �� !  ��   ӭ   ��   ��   ��   ��   ѽ  *\n");
		printf("\t\t*******************************************\n\n");
		system("pause");
		system("cls");//���� 
		printf("\n\n");
		break;
		default :
		printf("\t\t*********************************************\n");
		printf("\t\t*    û �� �� ѡ �� !  �� �� �� �� �� !     *\n");
		printf("\t\t*********************************************\n\n");
		system("pause");
		system("cls"); //���� 
		break;
		}	}while(x != 0);
}	

int create ( NODE *head)
{
	NODE *p;
	char c;
while(c != 'n' && c!= 'N' ){
		p = (NODE *) malloc (sizeof (NODE));//���������ݽ�� 
		system("cls");
		printf("\t\t***********************************************\n");
		printf("\t\t*    ��   ��   ¼   ��   ��   ��   ��   Ϣ    *\n");
		printf("\t\t***********************************************\n\n");
		
	printf("\t\t�� �� �� ַ: ");
	scanf("%s",p -> start_place);
			printf("\n");
	printf("\t\tĿ �� �� ַ: ");
	scanf("%s",p -> end_place);
		printf("\n");
	printf("\t\t�� �� ʱ ��: ");
	scanf("%s",p -> start_time);
		printf("\n");
	printf("\t\t�� �� ʱ ��: ");
	scanf("%s",p -> end_time);
		printf("\n");
	printf("\t\t�� �� �� ��: ");
	scanf("%s",p -> no);
		printf("\n");
	printf("\t\t�� Ʊ �� ��: ");
	scanf("%f",&p -> price);
	    printf("\n");
	printf("\t\t�� Ʊ �� ��: ");
	scanf("%d",&p -> number);
	    printf("\n");
	p -> link = head -> link; //��NULL����p��link�� 
	head -> link = p;//�����ݽ��p���ڱ�ͷ���֮��
	
		printf("\t\t\t*************************************\n");
		printf("\t\t\t*    ¼   ��   ��   Ϣ   ��   ��    * \n");
		printf("\t\t\t*************************************\n\n");
	printf("\t\t\t�� �� �� ��( Y / N):");
	scanf("%s",&c);
	//system("pause");
	}
	system("cls");
	return 0;
}


int dingpiao ( NODE *head)//��Ʊ 
{
	NODE *p;
		p = (NODE *) malloc (sizeof (NODE));//���������ݽ�� 
		system("cls");
		printf("\t\t******************************\n");
		printf("\t\t*    ��    Ʊ    ��    ��    *\n");
		printf("\t\t******************************\n\n");
		
	printf("\t\t�� �� Ҫ �� �� �� �� �� �� �� ��: ");
	scanf("%s",p -> no);
			printf("\n");
	printf("\t\t�� �� �� ��: ");
	scanf("%s",p -> name);
		printf("\n");
	printf("\t\t�� �� ֤ �� ��: ");
	scanf("%s",p -> card);
		printf("\n");
	printf("\t\t�� �� �� �� �� Ʊ ��: ");
	scanf("%d",&p -> number1);
		printf("\n");
//	p -> link = head -> link; //��NULL����p��link�� 
//	head -> link = p;//�����ݽ��p���ڱ�ͷ���֮��
		printf("\t\t\t            *************************************\n");
		printf("\t\t\t            *   �� �� �� �� �� �� �� ��......   *\n");
		printf("\t\t\t            *************************************\n\n");
		sleep(3);
		printf("\t\t\t*******************************************************************\n");
		printf("\t\t\t*    ��   Ʊ   ��   ��   ��   �� , ף   ��   ��   ;   ��    ��   * \n");
		printf("\t\t\t*******************************************************************\n\n");
		a = a + (p -> number1);
	system("pause");
	system("cls");
	return 0;
}


int tuipiao ( NODE *head)//��Ʊ 
{
	NODE *p;
		p = (NODE *) malloc (sizeof (NODE));//���������ݽ�� 
		system("cls");
		printf("\t\t******************************\n");
		printf("\t\t*    ��    Ʊ    ��    ��    *\n");
		printf("\t\t******************************\n\n");
		
	printf("\t\t�� �� Ҫ �� �� �� �� �� �� �� ��: ");
	scanf("%s",p -> no);
			printf("\n");
	printf("\t\t�� �� �� ��: ");
	scanf("%s",p -> name);
		printf("\n");
	printf("\t\t�� �� ֤ �� ��: ");
	scanf("%s",p -> card);
		printf("\n");
	printf("\t\t�� �� �� �� �� Ʊ ��: ");
	scanf("%d",&p -> number1);
		printf("\n");
	p -> link = head -> link; //��NULL����p��link�� 
	head -> link = p;//�����ݽ��p���ڱ�ͷ���֮��
		printf("\t\t\t*************************************\n");
		printf("\t\t\t*   �� �� �� �� �� �� �� ��......   *\n");
		printf("\t\t\t*************************************\n\n");
		sleep(3);
		printf("\t\t\t*************************************\n");
		printf("\t\t\t*    ��   Ʊ   ��   ��   ��   ��    * \n");
		printf("\t\t\t*************************************\n\n");
		a = a - (p -> number1);
	system("pause");
	system("cls");
	return 0;
}


int output (NODE *head)
{
	system("cls");
	NODE *p;
	p = head -> link;
		printf("\t\t\t\t*******************************************\n");
		printf("\t\t\t\t*  ��  ��  ��  ʾ  ȫ  ��  ��  ��  ��  Ϣ *\n");
		printf("\t\t\t\t*******************************************\n\n");
		printf(" ========================================================================================================================== \n\n");
	while (p != NULL){
		printf("   �����: %s     ������ַ: %s     Ŀ�ĵ�ַ:%s     ����ʱ��: %s     ����ʱ��: %s     ��Ʊ�۸�: %4.2fԪ     ��Ʊ����:%d��    \n",p -> no,p -> start_place,p -> end_place,p -> start_time,p -> end_time,p -> price,(p -> number ) -  a);
		printf(" ========================================================================================================================== \n\n");
		p = p -> link ;
	}	
		printf("\t\t\t\t    *************************************\n");
		printf("\t\t\t\t    *   ��  ��  ��  Ϣ  ��  ʾ  ��  ��  *\n");
		printf("\t\t\t\t    *************************************\n\n");
		system("pause");
		system("cls");
	return 0;
}

int delete (NODE *head){
	system("cls");
	NODE *q,*p;
	int n,i = 0;
		printf("\t\t\t\t*******************************************\n");
		printf("\t\t\t\t*  ��   ��   ɾ   ��   ��   ��   ��   Ϣ  *\n");
		printf("\t\t\t\t*******************************************\n\n");
		printf("�� �� �� Ҫ ɾ �� �� �� �� �� �� ��: ");
		scanf("%d",&i);
		printf("\n");
		printf("\t\t\t\t    **************************************\n");
		printf("\t\t\t\t    *     ��  Ҫ  ɾ  ��  ��  ��  Ϣ     *\n");
		printf("\t\t\t\t    **************************************\n\n");
		sleep(1); 
		printf(" ========================================================================================================================== \n\n");
	for(n = 0,q = head;n < i - 1 && q -> link != NULL ; ++n)
		q = q -> link;
	if (i > 0 && q -> link != NULL){
		p = q -> link;
		q -> link = p -> link;
	printf("   �����: %s     ������ַ: %s     Ŀ�ĵ�ַ:%s     ����ʱ��: %s     ����ʱ��: %s     ��Ʊ�۸�: %4.2fԪ     ��Ʊ����:%d��        \n",p -> no,p -> start_place,p -> end_place,p -> start_time,p -> end_time,p -> price,(p -> number ) -  a);
		printf(" ========================================================================================================================== \n\n");
		free(p);
	}
		printf("\t\t\t\t    *************************************\n");
		printf("\t\t\t\t    *   �� Ϣ ɾ �� �� �� �� ��.......  *\n");
		printf("\t\t\t\t    *************************************\n\n");
		sleep(3);
		printf("\t\t\t\t    *************************************\n");
		printf("\t\t\t\t    *   ��  ��  ��  Ϣ  ɾ  ��  ��  ��  *\n");
		printf("\t\t\t\t    *************************************\n");
		system("pause");
		system("cls");
}

int found (NODE *head){
	system("cls");
	NODE *q,*p;
	int n,i = 0;
		printf("\t\t\t\t*******************************************\n");
		printf("\t\t\t\t*  ��   ��   ��  ��   ��   ��   ��   Ϣ   *\n");
		printf("\t\t\t\t*******************************************\n\n");
		printf("�� �� �� Ҫ �� �� �� �� �� �� �� ��: ");
		scanf("%d",&i);
		printf("\n");
		printf("\t\t\t\t    *************************************\n");
		printf("\t\t\t\t    *   �� Ϣ �� �� �� �� �� ��.......  *\n");
		printf("\t\t\t\t    *************************************\n\n");
		sleep(3);
		printf(" ========================================================================================================================== \n\n");
	for(n = 0,q = head;n < i - 1 && q -> link != NULL ; ++n)
		q = q -> link;
	if (i > 0 && q -> link != NULL){
		p = q -> link;
		q -> link = p -> link;
		printf("   �����: %s     ������ַ: %s     Ŀ�ĵ�ַ:%s     ����ʱ��: %s     ����ʱ��: %s     ��Ʊ�۸�: %4.2fԪ     ��Ʊ����:%d��                                     \n",p -> no,p -> start_place,p -> end_place,p -> start_time,p -> end_time,p -> price,(p -> number ) -  a);
		printf(" ========================================================================================================================== \n\n");
}
		printf("\t\t\t\t    *************************************\n");
		printf("\t\t\t\t    *   ��  ��  ��  Ϣ  �� ��  ��  ��   *\n");
		printf("\t\t\t\t    *************************************\n");
		system("pause");
		system("cls");
}


void select1()//ѡ���� 1
{
	NODE * head;        //˵��ͷָ��head*
	NODE *p;
	p = (NODE *) malloc (sizeof (NODE)); //�����´洢���������ͷ��� 
	p -> link = NULL;//*����ͷ����link��ΪNULL 
	head = p;  //*head ָ��ͷ���p*
	system("cls");
	int x;
do{
	interface1(); 
	printf("�� �� �� �� �� ѡ ��: ");
    scanf("%d",&x); 
    printf("\n\n");
     switch(x){
     	case 1:	
		 		system("cls");
				create ( head );break;
     	case 2:
     			system("cls");
		 	 	delete( head);break;
    	case 3: 
    			system("cls");
    			found (head);break;
   		case 4:	system("cls");
		   		output (head);break;
   		case 5:
   			system("cls");
   			dingpiao (head);break;
   		case 6:system("cls");
		   tuipiao (head);break;
     	case 0: 
		printf("\t\t*********************************************\n");
		printf("\t\t*    �� ӭ �� �� ʹ �� �� �� �� �� ϵ ͳ    *\n");
		printf("\t\t*********************************************\n\n");
		system("pause");
		system("cls");//���� 
		printf("\n\n");	break;
	default :
		printf("\t\t*********************************************\n");
		printf("\t\t*    û �� �� ѡ �� !  �� �� �� �� �� !     *\n");
		printf("\t\t*********************************************\n\n");
		system("pause");
		system("cls"); //���� 
		break;
		}	}while(x != 0);
}	

void login()//��½����  
{
	int j = 0; 
	char username[20]; 
	char password[20];
	printf("\t\t\t*********************\n");
	printf("\t\t\t* ��   ½   ��   �� *\n");
	printf("\t\t\t*********************\n\n");
	printf("\t\t\t �� ��: ");
		 scanf("%s",username);
	printf("\n"); 
	printf("\t\t\t �� ��: ");
		scanf("%s",password);
	printf("\n");
while(j < i){
	 	if( (strcmp (u[j].username,username) == 0) && (strcmp (u[j].password,password) == 0) ){ 
	 		printf("\t\t\t*********************\n");
	 		printf("\t\t\t* �� �� �� ½ �� �� *\n");
	 		printf("\t\t\t*********************\n\n\n");
	 		printf("\t\t�� �� �� > > > > > > > >");
	 		system("pause");
	 		system("cls");//�������� 
	 		printf("\n");
	 		select(); 
			break;} 
			j++;} 
		if(j >= i){
		printf("\t\t**************************************\n");
		printf("\t\t* �� ½ ʧ �� ! �� �� �� �� �� �� �� *\n");
		printf("\t\t**************************************\n\n"); 
		system("pause");
	 	system("cls");//��������  
		printf("\n");} 
} 


int lvhexiang()//���ֺ���
{	
	 		printf("\t\t***************          ****************          ****************                    \n"); 
		    printf("\t\t              *          *              *                         *                    \n"); 
		    printf("\t\t              *          *              *                         *                    \n");
		    printf("\t\t***************          *              *          ****************                    \n");
		    printf("\t\t*                        *              *                         *                    \n"); 
		    printf("\t\t*                        *              *                         *                    \n"); 
		    printf("\t\t***************          ****************          ****************                    \n");
		    printf("\n"); 
		    printf("\t\t\t\t\t[ 2  0  3 ]\n\n\n"); 
		    system("pause");
		    system("cls"); //���� 
}         



void main1()
{
	int x;
    banquan();
do{
	interface(); //���溯�� 
	printf("�� �� �� �� �� ѡ ��: ");
    scanf("%d",&x); 
    printf("\n\n");
     switch (x){
     	case 1: registered();break;
     	case 2: login(); break;
     	case 0:
		printf("\t\t\t******************************\n");
	 	printf("\t\t\t* �� ӭ �� �� ʹ �� �� ϵ ͳ *\n");
	 	printf("\t\t\t******************************\n");break;
	default :
		printf("\t\t*********************************************\n");
		printf("\t\t*    û �� �� ѡ �� !  �� �� �� �� �� !     *\n");
		printf("\t\t*********************************************\n\n");
		system("pause");
		system("cls"); //���� 
		break;
		}
}while(x != 0);
     	system("pause");
}  
 main()
{
	main1();
	int create ( NODE *head);	
	int output (NODE *head);
	int delete( NODE *head ); 
	int found (NODE *head); 
	int dingpiao ( NODE *head);
	int tuipiao ( NODE *head); 
	getch();
}
