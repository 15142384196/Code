//第一套接口
  //初始化环境
  int socketclient_init(void** hanle)
   {
	return 0;
   }
  //发送信息
  int socketclient_send(void* hanle, void* buf, int len)
   {
	return 0;
   }
  //接受信息
  int socketclient_recv(void* hanle, void* buf, int* len)
   {
	return 0;
   }
  //释放资源
  int socketclient_destroy(void* hanle)
   {
	return 0;
   }
  //第二套接口
	//初始化环境
  int socketclient_init2(void** hanle)
  {
	  return 0;
  }
  //发送信息
  int socketclient_send2(void* hanle, void* buf, int len)
  {
	  return 0;
  }
  //接受信息
  int socketclient_recv2(void* hanle, void** buf, int* len)
  {
	  return 0;
  }
  int socketclient_free2(void**buf)
  {
	  return 0;
  }
  //释放资源
  int socketclient_destroy2(void* hanle)
  {
	  return 0;
  }

