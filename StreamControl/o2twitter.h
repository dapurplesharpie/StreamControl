#ifndef O2TWITTER_H
#define O2TWITTER_H

#include "o2/o2.h"

class O2Twitter: public O2 {
    Q_OBJECT

public:
    explicit O2Twitter(QObject *parent = 0);

    bool linked();

    QString token();
    void setToken(const QString &v);

private:
    QString bearerToken;

public slots:
    Q_INVOKABLE void link();

protected slots:
    /// Handle completion of a token request.
    virtual void onTokenReplyFinished();

    /// Handle failure of a token request.
    virtual void onTokenReplyError(QNetworkReply::NetworkError error);
};

#endif // O2TWITTER_H
