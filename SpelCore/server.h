#ifndef SERVER_H
#define SERVER_H

#include <QObject>

class UdpListener;

class Server : public QObject
{
public:
    Server(QObject* parent = 0);
private:
    UdpListener* m_pUdpListener;
};

#endif // SERVER_H
