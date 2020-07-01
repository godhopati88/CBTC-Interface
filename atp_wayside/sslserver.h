#ifndef SSLSERVER_H
#define SSLSERVER_H

#include <QtNetwork>

class SslServer : public QTcpServer
{
    Q_OBJECT
public:
    SslServer(QObject *parent = 0);
    ~SslServer();

    const QSslCertificate &getSslLocalCertificate() const;
    const QSslCertificate &getSslCaCertificate() const;
    const QSslKey &getSslPrivateKey() const;
    QSsl::SslProtocol getSslProtocol() const;

    void setCaCertificate(const QSslCertificate &certificate);
    bool setCaCertificate(const QString &fileName);
    void setSslLocalCertificate(const QSslCertificate &certificate);
    bool setSslLocalCertificate(const QString &path, QSsl::EncodingFormat format = QSsl::Pem);
    void setSslPrivateKey(const QSslKey &key);
    bool setSslPrivateKey(const QString &fileName, const QByteArray &passPhrase = QByteArray(), QSsl::KeyAlgorithm algorithm = QSsl::Rsa, QSsl::EncodingFormat format = QSsl::Pem);

    void setSslProtocol(QSsl::SslProtocol protocol);

protected:
    void incomingConnection(qintptr socketDescriptor);

private:
    QSslCertificate m_sslCaCertificate;
    QSslCertificate m_sslLocalCertificate;
    QSslKey m_sslPrivateKey;
    QSsl::SslProtocol m_sslProtocol;
    QSslSocket *sslSocket;
};

#endif // SSLSERVER_H
