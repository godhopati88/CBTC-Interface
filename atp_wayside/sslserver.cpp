#include "sslserver.h"



SslServer::SslServer(QObject *parent) : QTcpServer(parent)
{

}

SslServer::~SslServer()
{

}

const QSslCertificate &SslServer::getSslLocalCertificate() const
{
    return m_sslLocalCertificate;
}

const QSslCertificate &SslServer::getSslCaCertificate() const
{
    return m_sslCaCertificate;
}

const QSslKey &SslServer::getSslPrivateKey() const
{
    return m_sslPrivateKey;
}

QSsl::SslProtocol SslServer::getSslProtocol() const
{
    return m_sslProtocol;
}

void SslServer::setCaCertificate(const QSslCertificate &certificate)
{
    m_sslCaCertificate = certificate;
}

bool SslServer::setCaCertificate(const QString &fileName)
{
    QFile certificateFile(fileName);
    if(!certificateFile.open(QIODevice::ReadOnly))
        return false;

    m_sslCaCertificate = QSslCertificate(certificateFile.readAll());
    return true;
}

void SslServer::setSslLocalCertificate(const QSslCertificate &certificate)
{
    m_sslLocalCertificate = certificate;
}

bool SslServer::setSslLocalCertificate(const QString &path, QSsl::EncodingFormat format)
{
    QFile certificateFile(path);

    if (!certificateFile.open(QIODevice::ReadOnly))
        return false;

    m_sslLocalCertificate = QSslCertificate(certificateFile.readAll(), format);
    return true;
}

void SslServer::setSslPrivateKey(const QSslKey &key)
{
    m_sslPrivateKey = key;
}

bool SslServer::setSslPrivateKey(const QString &fileName, const QByteArray &passPhrase, QSsl::KeyAlgorithm algorithm, QSsl::EncodingFormat format)
{
    QFile keyFile(fileName);
    if (!keyFile.open(QIODevice::ReadOnly))
        return false;

    m_sslPrivateKey = QSslKey(keyFile.readAll(), algorithm, format, QSsl::PrivateKey, passPhrase);
    return true;
}

void SslServer::setSslProtocol(QSsl::SslProtocol protocol)
{
    m_sslProtocol = protocol;
}

void SslServer::incomingConnection(qintptr socketDescriptor)
{
    /* Create Socket */
    sslSocket = new QSslSocket(this);

    sslSocket->setPeerVerifyMode(QSslSocket::VerifyPeer);
    sslSocket->setSocketDescriptor(socketDescriptor);
    sslSocket->addCaCertificate(m_sslCaCertificate);
    sslSocket->setLocalCertificate(m_sslLocalCertificate);
    sslSocket->setPrivateKey(m_sslPrivateKey);
    sslSocket->setProtocol(m_sslProtocol);
    sslSocket->startServerEncryption();

    //qDebug() << "socket descriptor" << sslSocket->socketDescriptor();

    /* Add to the internal list of pending connections */
    this->addPendingConnection(sslSocket);

}
