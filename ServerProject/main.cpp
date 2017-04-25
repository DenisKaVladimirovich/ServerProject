#include "SServer.h"

int main()
{
	SServer* server = new SServer();
	server->port = 3487;
	server->startServer();
	return 0;
}