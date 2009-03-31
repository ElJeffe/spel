#ifndef UDPLISTENER_H
#define UDPLISTENER_H

#include <QObject>

class QUdpSocket;

class UdpListener : public QObject
{
  Q_OBJECT

public:
    UdpListener(QObject* parent = 0);

public slots:
  void ReadPendingDatagrams();


private:
    QUdpSocket* m_pUdpSocket;
};

#endif // UDPLISTENER_H
