#include "udplistener.h"
#include <QtNetwork>
#include "settings.h"

UdpListener::UdpListener(QObject* parent): QObject(parent)
{
  m_pUdpSocket = new QUdpSocket(this);
  m_pUdpSocket->bind(QHostAddress::Any, Settings::ServerUdpPort);
  connect(m_pUdpSocket, SIGNAL(readyRead()), this, SLOT(ReadPendingDatagrams()));
}

 void UdpListener::ReadPendingDatagrams()
 {
     while (m_pUdpSocket->hasPendingDatagrams()) {
         QByteArray datagram;
         datagram.resize(m_pUdpSocket->pendingDatagramSize());
         QHostAddress sender;
         quint16 senderPort;

         m_pUdpSocket->readDatagram(datagram.data(), datagram.size(),
                                 &sender, &senderPort);

         // processTheDatagram(datagram);
     }
 }
