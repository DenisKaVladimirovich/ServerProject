#pragma once
#include "includes.h"
class SClient
{
public:
	SClient(SOCKET s, SOCKADDR_IN sock_in);
	~SClient();
	void handle();
private:
	SOCKET c_sock;
	SOCKADDR_IN c_addr;
	char buffer[1024];
};

