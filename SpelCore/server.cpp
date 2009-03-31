#include "server.h"
#include "udplistener.h"

Server::Server(QObject* parent): QObject(parent)
{
  m_pUdpListener = new UdpListener();
}
