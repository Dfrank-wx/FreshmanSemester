#include<stdio.h>
#include <malloc.h>
#include<stdlib.h>
#include<string.h>
#define LEN sizeof(struct teacher)
int n=0;
struct teacher
{
long num;
char name[20];
char sex[5];
int age;
char edu[20];
char title[20];
long wage;

char addr[100];
char telep[15];
struct teacher*next;
}*head=NULL;
void key()
{
	int i;
	long a;
	for(i=0;i<3;i++)
	{
	printf("���������(��������%d��)��\n",3-i);
	scanf("%d",&a);
	if(a==123456){
		printf("��ӭ����ϵͳ\n");
		break;
		}
	else printf("�������\n");
} 
if(i==3)//�жϿ����������Ĵ����Ƿ�����
{
printf("��ʹ�õĿ����������������,���Զ��˳���\n");
exit(0);
}
}
void save()//�����ݴ����ļ��ĺ���
{
FILE *fp;
int i;
char filename[20];
struct teacher *p;
printf("\n�Ƿ�Ѵ˴ε�¼ϵͳ¼����޸ĺ�Ľ�ʦ��Ϣ���浽�ļ���\n");
printf("1��         ���ǡ�         0��       ����\n��ѡ��");
scanf("%d",&i);
while((i!=0)&&(i!=1))//�ж������ѡ���Ƿ���Ч
{
printf("ѡ����Ч,������������ȷѡ�");
scanf("%d",&i);
}
if(i==1)//�ж��Ƿ�ѡ����Ҫ����
{
printf("\n������Ҫ�������ݵ��ļ�����");
scanf("%s",filename);
if((fp=fopen(filename,"wb"))=NULL)
{
	printf("\n�޷����ļ�\n");
	exit(0);
}
for(p=head;p!=NULL;p=p->next)
if(fwrite(p,sizeof(struct teacher),1,fp)!=1)
printf("\n�˴���������\n");
fclose(fp);
}
exit(0);
}
void read()
{
	struct teacher teach[299],temp;
	int i=0;FILE*fp;char filename[20];
	printf("\n��������н�ʦ��Ϣ���ļ�����");
	 scanf("%s",filename);
	 if((fp=fopen(filename,"rb"))==NULL)
{
printf("\n�޷����ļ�\n");
exit(0);
}
fseek(fp,sizeof(struct teacher),2);/*��λ��ָ����ļ�ĩβ����һ���ṹ����ֽ���*/
fread(&temp,sizeof(struct teacher),1,fp);/*����ָ����ļ��ж������ݴ洢���ṹ�����temp��*/
fseek(fp,0,0);//��λ��ָ���Ƶ��ļ��Ŀ�ͷ
if(fread(&teach[i],sizeof(struct teacher),1,fp)==1)/*���ļ���ͷ����������Ƿ�Ϊ��*/
{
printf("\n���еĽ�ʦ��Ϣ���£�An");
while(teach[i].num!=temp.num)//����ѭ����ȡ�ļ�
{
printf("��ʦ�ţ�%1d,������%s,�Ա�%s,���䣺%d,ѧ����%s,",teach[i].num,teach[i].name,teach[i].sex,teach[i].age,teach[i].edu);
printf("ְ�ƣ�%s\n��н��%ld,סַ��%s,�绰��%s\n",teach[i].title,teach[i].wage,teach[i].addr,teach[i].telep);
i=i+1;
fread(&teach[i],sizeof(struct teacher),1,fp);//���ļ��ж������ݴ洢���ṹ�����teach��i����

}
//����ļ��е����һ����Ϣ
printf("��ʦ�ţ�%ld,������%s,�Ա�%s,���䣺90d,ѧ����%s,",teach[i].num,teach[i].name,teach[i].sex,teach[i].age,teach[i].edu);

printf("ְ�ƣ�%s\n��н��%ld,סַ��%s,�绰%s\n",teach[i].title,teach[i].wage,teach[i].addr,teach[i].telep);
fclose(fp);
}
else printf("���ļ����޽�ʦ��Ϣn");//�ļ�Ϊ��ʱ����˴�
}
void creat()//¼���ʦ��Ϣ�ĺ���
{
	
struct teacher *p1,*p2,*p3;
p1=p2=(struct teacher*)malloc(LEN);/*����һ���ṹ���ֽ����Ŀռ������洢һ����ʦ����Ϣ*/
printf("������һλ��ʦ�Ľ�ʦ��(����¼��������0)��");
scanf("%ld",&p1->num);
if(p1->num!=0)//�ж��û���Ҫ����¼�뻹��Ҫ�洢��Ϣ*/
if(head==NULL)head=p1;//�ж������Ƿ�Ϊ��,��������ͷָ��p1*/
else//����Ϊ��������βָ��p1
{
	p3=head;//p3������¼�����β��while(p3->next��=NULL)/*��p3��������β��p3ָ����һ�����*��
p3=p3->next;
p3->next=p1;//�����һ�����ָ��p1
}
while(p1->num!=0)//�ж��û��Ƿ����¼�빦��
{//¼��ý�ʦ�ŵĽ�ʦ��Ӧ����Ϣ
printf("������");
scanf("%s",p1->name);
printf("�Ա�");
scanf("%s",p1->sex);
printf("���䣺");
scanf("%d",&p1->age);
printf("ѧ����");
scanf("%s",p1->edu);
printf("ְ�ƣ�");
scanf("%s",p1->title);
printf("��н��");
scanf("%ld",&p1->wage);
printf("סַ��");
scanf("%s",p1->addr);
printf("�绰��");
scanf("%s",p1->telep);
n=n+1;//��ͳ��¼��Ľ�ʦ��n��һ
/*�ж��Ƿ�Ϊ��һ��¼�����Ϣ,��������ͷָ��p1,����p2ָ��p1*/
if(n==1)head=p1;
else p2->next=p1;p2=p1;
//p2������¼��������һ�����
p1=(struct teacher*)malloc(LEN);//��������ռ�
printf("������һλ��ʦ�Ľ�ʦ��(����¼��������0)��");
scanf("%ld",&p1->num);
}
p2->next=NULL;//�����һ�����ָ�ʿ�
}
void print()//�����ʦ��Ϣ�ĺ���
{
	
struct teacher *p;
int i;p=head;
if(head!=NULL)//�ж������Ƿ�Ϊ��
{
printf("\n��%dλ��ʦ����ϢΪ��\n",n);
do
{
	printf("��ʦ�ţ�%ld,������%s,�Ա�%s,���䣺%d,ѧ����%s,ְ�ƣ�%s\n",p->num,p->name,p->sex,p->age,p->edu,p->title);
	printf("��н��%ld,סַ��%s,�绰��%s\n",p->wage,p->addr,p->telep);
	p=p->next;//����һ�������׵�ַ����p
	
}while(p!=NULL);//������βʱ����ѭ��
}
else//����Ϊ��ʱִ�����²���
{
printf("\n��˴ε�¼ϵͳ��û��¼���ʦ��Ϣ,�ɽ������²�����\n");
printf("1���������ǰ�������ļ��еĽ�ʦ��Ϣ��2������ʼ¼���ʦ��Ϣ��\n");
printf("3�����˳�ϵͳ��4�������ز˵���\n");
printf("��ѡ��");
scanf("%d",&i);
while((i<1)&&(i>4))
{
	printf("ѡ����Ч,������������ȷѡ�");
	scanf("%d",&i);
}
if(i==1)read();//���ô��ļ���ȡ���ݵĺ���
if(i==2)creat();//����¼����Ϣ�ĺ���
if(i==3)exit(0);//�˳�ϵͳ
}
}
void del()//ɾ����ʦ��Ϣ�ĺ���
{
	struct teacher *p1,*p2;long i;
	if(head==NULL)//�ж������Ƿ�Ϊ��
{
printf("n��δ¼�����ʦ��Ϣn");//����Ϊ��ʱ���
return;printf("������Ҫɾ����ʦ��Ϣ�Ľ�ʦ�ţ�");
scanf("%1d",&i);
p1=head;
while(i!=p1->num)//ֱ��p1ָ��Ľ����Ҫɾ������Ϣλ��
{
if(p1->next==NULL)
break;//p1���¸����Ϊ�����˳�ѭ��
p2=p1;//p2������¼p1��ǰһ�����
p1=p1->next;//p1ָ����һ�����
}

if(i==p1->num)//�ж�p1�Ƿ�ΪҪɾ������Ϣif
{
if(p1==head)head=p1->next;//��p1Ϊͷ�����ͷָ��ָ��p1����һ�����*��
else p2->next=p1->next;//p1��ͷ�����p1����Ľ�����ӵ�p1ǰһ�����ĺ�����
printf("\n��ɾ����ʦ��Ϊ%1d�Ľ�ʦ��Ϣn",i);
n=n-1;//��¼��ʦ����nҪ��һ
}
//p1����Ҫɾ������Ϣ���ʾҪɾ������Ϣ����������
else printf("\n��¼��Ľ�ʦ��Ϣ��û�н�ʦ��Ϊ%1d��\n",i);
return;
}
}
void sort1()//����ʦ�Ž�������ĺ���
{
struct teacher *p1,*p2,*p3,*p4;
int i,j;
if(head==NULL)
{
printf("\n��δ¼�����ʦ��Ϣn");
return;}
if(head->next!=NULL)//�ж��Ƿ�ֻ��һ����Ϣ
{//��ð�ݷ�����
p1=head;///p1��¼�����Ƚϵ���������е�ǰ��һ��
p2=head->next;//p2��¼�Ƚϵ���������еĺ����
for(i=1;i<n;i++)//ʵ��n-1�˱Ƚϵ���ѭ��
{
	for(j=0;j<n-i;j++)//��ÿһ���н���n-i�αȽϵ���ѭ��
	{
	if(p1->num>p2->num)/*�Ƚ�������������н�ʦ�Ŵ�С*/
{
//��p1�Ľ�ʦ�Ŵ�ʱ��Ե���������λ��
if(p1==head)head=p2;
else p3->next=p2;//p1Ϊͷ���ʱ��ͷָ��ָ��p2;����ͽ�p2���ӵ�������¼p1ǰһ������p3�ĺ���*��
p4=p2->next;
//p4������¼p2����Ľ��
p2->next=p1;//p1�Ľ�㻻��ԭ��p2��λ��
p1->next=p4;//ԭ��p2����Ľ�����ӵ�p1
 p3=p2;//p3��¼��p2��λ��
p2=p4;//p2ָ��ԭ��λ�õ���һ�����
}
else//p1�н�ʦ��û�д��p2�н�ʦ��;��p1;p2��ָ�����Ǹ���λ�õ���һ�����*��
{
	p3=p1;//��¼p1����һλ����ǰ������λ��
	p1=p2;
	p2=p2->next;
}
}
	p1=head;//p1ָ������ͷ;��ʼ��һ����ѭ����׼��
	p2=p1->next;//p2ָ������ڶ������

}
}
printf("\n����ʦ�������Ľ�ʦ��Ϣ���£�n");
print();//���ý�ʦ��Ϣ�������
}
void sort2()//����н����ĺ���;�㷨������ʦ�������һ��
{
	struct teacher*p1,*p2,*p3,*p4;int i,j;
	if(head==NULL)
	{
printf("\n��δ¼�����ʦ��Ϣn");
return;
}
if(head->next!=NULL)
{
p1=head;
p2=head->next;
for(i=1;i<n;i++)
{
	for(j=0;j<n-i;j++)
	{
if(p1->wage>p2->wage)
{
if(p1==head)head=p2;
 else p3->next=p2;
  p4=p2->next;
  p2->next=p1;
  p1->next=p4;
   p3=p2;
   p2=p4;
}
else
{
	p3=p1;
	p1=p2;
 p2=p2->next;
}
}
p1=head; 
p2=p1->next;
}
}
printf("\n����н�����Ľ�ʦ��Ϣ���£�\n");
print();
}
void sort3()//����������ĺ���,�㷨������ʦ�������һ��
{
	struct teacher*p1,*p2,*p3,*p4;
int i,j;
if(head==NULL)
{
printf("\n��δ¼�����ʦ��Ϣn");
return;
}
if(head->next!=NULL)
{
p1=head; 
p2=head->next;
 for(i=1;i<n;i++){
 
for(j=0;j<n-i;j++){
if(p1->age>p2->age){

if(p1==head)head=p2; 
else p3->next=p2; 
p4=p2->next;
p2->next=p1;
p1->next=p4;
p3=p2;
p2=p4;
}
else
{
	p3=p1;
	p1=p2;
	 p2=p2->next;
}
}
p1=head; 
p2=p1->next;
}
}
printf("\n �����������Ľ�ʦ��Ϣ���£�\n");
print();
}
void choose1()//ѡ������ʽ�ĺ���
{
int i;
printf("����ʽn");
printf("1��������ʦ������2��������������\n");
printf("3��������н����\n");
printf("��ѡ��");
scanf("%d",&i);
while((i<1)||(i>3))
{
	printf("ѡ����Ч,������������ȷѡ�");
	scanf("%d",&i);
}
switch(i)
{
case 1:
sort1();
break;
case 2:
sort3();
break;
case 3:
sort2();
break;
}
}
void search1()//����ʦ�Ų��ҵĺ���
{
struct teacher *p;long i;//�洢�û��������Ҫɾ���Ľ�ʦ��
if(head==NULL)
{
printf("\n��δ¼�����ʦ��Ϣn��");
return;
}
printf("������Ҫ���ҵĽ�ʦ��Ϣ�Ľ�ʦ�ţ�");
scanf("%ld",&i);
for(p=head;p!=NULL;p=p->next)
//p˳��ָ������i�Ƚ�,�ҳ���i�����ݵĽ�㲢���
if(p->num==i)
{
	printf("��ʦ�ţ�%ld,������%s,�Ա�%s,���䣺%d,ѧ����%s,ְ�ƣ�%s\n",p->num,p->name,p->sex,p->age,p->edu,p->title);
	printf("��н��%ld,סַ��%s,�绰��%s\n",p->wage,p->addr,p->telep);
	return;
}
printf("��¼��Ľ�ʦ��Ϣ�в����ڸý�ʦ��\n");
}
void search2()//���������ҵĺ���
{
	struct teacher*p;
	char i[20];//��¼�û��������Ҫɾ��������
	int j=0;//j������¼�ҵ��˶��ٸ���Ϣ
	if(head==NULL)
{
printf("\n��δ¼�����ʦ��Ϣn");
return;
}
printf("������Ҫ���ҵ���Ϣ�Ľ�ʦ������");
scanf("%s",i);
for(p=head;p!=NULL;p=p->next)
if(strcmp(p->name,i)==0)//�Ƚ�pָ��Ľ���е�������i���Ƿ�һ��,�������
{
	printf("��ʦ�ţ�%1d,������%s,�Ա�%s,���䣺%d,ѧ����%s,ְ�ƣ�%s\n",p->num,p->name,p->sex,p->age,p->edu,p->title);
	printf("��н��%ld,סַ��%s,�绰��%s\n",p->wage,p->addr,p->telep);
	j=j+1;//ÿ���һ����ʦ����Ϣ��j��һ
}
}
void search3()//��ְ�Ʋ��ҵĺ���,�㷨�밴�������ҵ�һ��
{
	struct teacher*p;
	char i[20];int j=0;
	if(head==NULL)
	{
	
printf("\n��δ¼�����ʦ��Ϣ\n");
return;
}
printf("������Ҫ���ҵ���Ϣ�Ľ�ʦְ�ƣ�");
scanf("%s",i);
for(p=head;p!=NULL;p=p->next)
if(strcmp(p->title,i)==0)
{
	printf("��ʦ�ţ�%1d,������%s,�Ա�%s,���䣺%d,ѧ����%s,ְ�ƣ�%s\n",p->num,p->name,p->sex,p->age,p->edu,p->title);
	printf("��н��%ld,סַ��%s,�绰��%s\n",p->wage,p->addr,p->telep);
	j=j+1;
}
if(j==0)
printf("��¼��Ľ�ʦ��Ϣ�в����ڸ�ְ�ƵĽ�ʦ\n");
}
void search4()//��������ҵĺ���,�㷨�밴��ʦ�Ų��ҵ�һ��
{
	struct teacher *p;
	 int i,j=0;
if(head==NULL)
{
	printf("\n��δ¼�����ʦ��Ϣ\n");
	return;}
	printf("������Ҫ���ҵ���Ϣ�Ľ�ʦ���䣺");
	scanf("%d",&i);
	for(p=head;p!=NULL;p=p->next)
if(p->age==i)
{
	printf("��ʦ�ţ�%1d,������%s,�Ա�%s,���䣺0d,ѧ����%s,ְ�ƣ�%s\n",p->num,p->name,p->sex,p->age,p->edu,p->title);
	printf("��н��%ld,סַ��%s,�绰��%s\n",p->wage,p->addr,p->telep);
	j=j+1;
}
if(j==0)
printf("��¼��Ľ�ʦ��Ϣ�в����ڸ�����Ľ�ʦn");
}
void choose2()//ѡ����ҷ�ʽ�ĺ���
{
	int i;
	printf("1��������ʦ�Ų�ѯ��2������������ѯ��\n");
	printf("3������ְ�Ʋ�ѯ��4�����������ѯ��\n");
	printf("��ѡ��");
	scanf("%d",&i);
	while((i<1)||(i>4))
{
	printf("ѡ����Ч��������������ȷѡ�");
	scanf("%d",&i);
}
switch(i)
{
case 1:search1();break;
case 2:search2();break;
case 3:search3();break;
case 4:search4();break;
}
}
void menu()//�˵�������
{
int i;
printf("�˵�\n");
printf("   ===== 1������ʦ��Ϣ¼�롿   =======  2������ʦ��Ϣ�����\n");
printf("   ===== 3������ʦ��Ϣɾ����   =======  4������ѯ������Ϣ��\n");
printf("   ===== 5��������           =======  6�����˳�ϵͳ��\n");
printf("��ѡ��");
scanf("%d",&i);
while((i<1)||(i>6))
{
	printf("ѡ����Ч��������������ȷѡ�");
	scanf("%d",&i);
	
}

switch(i)
{
case 1:creat();break;
case 2:print();break;
 case 3:del();break; 
 case 4:choose2();break;
  case 5:choose1();break;
   case 6:save();
}
menu();
}

main()//������
{
	key();
	menu();
	
}





























