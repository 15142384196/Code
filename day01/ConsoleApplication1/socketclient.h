#pragma once
#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus
//��һ�׽ӿ�

  //��ʼ������
	int socketclient_init(void** hanle);
  //������Ϣ
	int socketclient_send(void* hanle, void* buf, int len);
  //������Ϣ
	int socketclient_recv(void* hanle, void* buf, int* len);
  //�ͷ���Դ
	int socketclient_destroy(void* hanle);
//�ڶ��׽ӿ�

  //��ʼ������
	int socketclient_init(void** hanle);
	//������Ϣ
	int socketclient_send(void* hanle, void* buf, int len);
	//������Ϣ
	int socketclient_recv(void* hanle, void** buf, int* len);
	int socketclient_free(void** buf);
	//�ͷ���Դ
	int socketclient_destroy(void* hanle);


#ifdef __cplusplus
}
#endif // __cplusplus
