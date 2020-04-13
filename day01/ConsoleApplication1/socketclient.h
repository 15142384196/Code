#pragma once
#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus
//第一套接口

  //初始化环境
	int socketclient_init(void** hanle);
  //发送信息
	int socketclient_send(void* hanle, void* buf, int len);
  //接受信息
	int socketclient_recv(void* hanle, void* buf, int* len);
  //释放资源
	int socketclient_destroy(void* hanle);
//第二套接口

  //初始化环境
	int socketclient_init(void** hanle);
	//发送信息
	int socketclient_send(void* hanle, void* buf, int len);
	//接受信息
	int socketclient_recv(void* hanle, void** buf, int* len);
	int socketclient_free(void** buf);
	//释放资源
	int socketclient_destroy(void* hanle);


#ifdef __cplusplus
}
#endif // __cplusplus
