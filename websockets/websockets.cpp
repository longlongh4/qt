#define protected public

#include "websockets.h"
#include "_cgo_export.h"

#include <QAbstractSocket>
#include <QByteArray>
#include <QChildEvent>
#include <QEvent>
#include <QMaskGenerator>
#include <QMetaObject>
#include <QNetworkProxy>
#include <QObject>
#include <QSslConfiguration>
#include <QString>
#include <QTime>
#include <QTimer>
#include <QTimerEvent>
#include <QUrl>
#include <QWebSocket>
#include <QWebSocketCorsAuthenticator>
#include <QWebSocketServer>

class MyQMaskGenerator: public QMaskGenerator {
public:
	void timerEvent(QTimerEvent * event) { callbackQMaskGeneratorTimerEvent(this, this->objectName().toUtf8().data(), event); };
	void childEvent(QChildEvent * event) { callbackQMaskGeneratorChildEvent(this, this->objectName().toUtf8().data(), event); };
	void customEvent(QEvent * event) { callbackQMaskGeneratorCustomEvent(this, this->objectName().toUtf8().data(), event); };
};

int QMaskGenerator_Seed(void* ptr){
	return static_cast<QMaskGenerator*>(ptr)->seed();
}

void QMaskGenerator_DestroyQMaskGenerator(void* ptr){
	static_cast<QMaskGenerator*>(ptr)->~QMaskGenerator();
}

void QMaskGenerator_TimerEvent(void* ptr, void* event){
	static_cast<MyQMaskGenerator*>(ptr)->timerEvent(static_cast<QTimerEvent*>(event));
}

void QMaskGenerator_TimerEventDefault(void* ptr, void* event){
	static_cast<QMaskGenerator*>(ptr)->QMaskGenerator::timerEvent(static_cast<QTimerEvent*>(event));
}

void QMaskGenerator_ChildEvent(void* ptr, void* event){
	static_cast<MyQMaskGenerator*>(ptr)->childEvent(static_cast<QChildEvent*>(event));
}

void QMaskGenerator_ChildEventDefault(void* ptr, void* event){
	static_cast<QMaskGenerator*>(ptr)->QMaskGenerator::childEvent(static_cast<QChildEvent*>(event));
}

void QMaskGenerator_CustomEvent(void* ptr, void* event){
	static_cast<MyQMaskGenerator*>(ptr)->customEvent(static_cast<QEvent*>(event));
}

void QMaskGenerator_CustomEventDefault(void* ptr, void* event){
	static_cast<QMaskGenerator*>(ptr)->QMaskGenerator::customEvent(static_cast<QEvent*>(event));
}

class MyQWebSocket: public QWebSocket {
public:
	void Signal_AboutToClose() { callbackQWebSocketAboutToClose(this, this->objectName().toUtf8().data()); };
	void Signal_BinaryFrameReceived(const QByteArray & frame, bool isLastFrame) { callbackQWebSocketBinaryFrameReceived(this, this->objectName().toUtf8().data(), new QByteArray(frame), isLastFrame); };
	void Signal_BinaryMessageReceived(const QByteArray & message) { callbackQWebSocketBinaryMessageReceived(this, this->objectName().toUtf8().data(), new QByteArray(message)); };
	void Signal_BytesWritten(qint64 bytes) { callbackQWebSocketBytesWritten(this, this->objectName().toUtf8().data(), static_cast<long long>(bytes)); };
	void Signal_Connected() { callbackQWebSocketConnected(this, this->objectName().toUtf8().data()); };
	void Signal_Disconnected() { callbackQWebSocketDisconnected(this, this->objectName().toUtf8().data()); };
	void Signal_Error2(QAbstractSocket::SocketError error) { callbackQWebSocketError2(this, this->objectName().toUtf8().data(), error); };
	void Signal_ReadChannelFinished() { callbackQWebSocketReadChannelFinished(this, this->objectName().toUtf8().data()); };
	void Signal_StateChanged(QAbstractSocket::SocketState state) { callbackQWebSocketStateChanged(this, this->objectName().toUtf8().data(), state); };
	void Signal_TextFrameReceived(const QString & frame, bool isLastFrame) { callbackQWebSocketTextFrameReceived(this, this->objectName().toUtf8().data(), frame.toUtf8().data(), isLastFrame); };
	void Signal_TextMessageReceived(const QString & message) { callbackQWebSocketTextMessageReceived(this, this->objectName().toUtf8().data(), message.toUtf8().data()); };
	void timerEvent(QTimerEvent * event) { callbackQWebSocketTimerEvent(this, this->objectName().toUtf8().data(), event); };
	void childEvent(QChildEvent * event) { callbackQWebSocketChildEvent(this, this->objectName().toUtf8().data(), event); };
	void customEvent(QEvent * event) { callbackQWebSocketCustomEvent(this, this->objectName().toUtf8().data(), event); };
};

void QWebSocket_Abort(void* ptr){
	static_cast<QWebSocket*>(ptr)->abort();
}

void QWebSocket_ConnectAboutToClose(void* ptr){
	QObject::connect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)()>(&QWebSocket::aboutToClose), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)()>(&MyQWebSocket::Signal_AboutToClose));;
}

void QWebSocket_DisconnectAboutToClose(void* ptr){
	QObject::disconnect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)()>(&QWebSocket::aboutToClose), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)()>(&MyQWebSocket::Signal_AboutToClose));;
}

void QWebSocket_AboutToClose(void* ptr){
	static_cast<QWebSocket*>(ptr)->aboutToClose();
}

void QWebSocket_ConnectBinaryFrameReceived(void* ptr){
	QObject::connect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(const QByteArray &, bool)>(&QWebSocket::binaryFrameReceived), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(const QByteArray &, bool)>(&MyQWebSocket::Signal_BinaryFrameReceived));;
}

void QWebSocket_DisconnectBinaryFrameReceived(void* ptr){
	QObject::disconnect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(const QByteArray &, bool)>(&QWebSocket::binaryFrameReceived), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(const QByteArray &, bool)>(&MyQWebSocket::Signal_BinaryFrameReceived));;
}

void QWebSocket_BinaryFrameReceived(void* ptr, void* frame, int isLastFrame){
	static_cast<QWebSocket*>(ptr)->binaryFrameReceived(*static_cast<QByteArray*>(frame), isLastFrame != 0);
}

void QWebSocket_ConnectBinaryMessageReceived(void* ptr){
	QObject::connect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(const QByteArray &)>(&QWebSocket::binaryMessageReceived), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(const QByteArray &)>(&MyQWebSocket::Signal_BinaryMessageReceived));;
}

void QWebSocket_DisconnectBinaryMessageReceived(void* ptr){
	QObject::disconnect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(const QByteArray &)>(&QWebSocket::binaryMessageReceived), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(const QByteArray &)>(&MyQWebSocket::Signal_BinaryMessageReceived));;
}

void QWebSocket_BinaryMessageReceived(void* ptr, void* message){
	static_cast<QWebSocket*>(ptr)->binaryMessageReceived(*static_cast<QByteArray*>(message));
}

void QWebSocket_ConnectBytesWritten(void* ptr){
	QObject::connect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(qint64)>(&QWebSocket::bytesWritten), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(qint64)>(&MyQWebSocket::Signal_BytesWritten));;
}

void QWebSocket_DisconnectBytesWritten(void* ptr){
	QObject::disconnect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(qint64)>(&QWebSocket::bytesWritten), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(qint64)>(&MyQWebSocket::Signal_BytesWritten));;
}

void QWebSocket_BytesWritten(void* ptr, long long bytes){
	static_cast<QWebSocket*>(ptr)->bytesWritten(static_cast<long long>(bytes));
}

char* QWebSocket_CloseReason(void* ptr){
	return static_cast<QWebSocket*>(ptr)->closeReason().toUtf8().data();
}

void QWebSocket_ConnectConnected(void* ptr){
	QObject::connect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)()>(&QWebSocket::connected), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)()>(&MyQWebSocket::Signal_Connected));;
}

void QWebSocket_DisconnectConnected(void* ptr){
	QObject::disconnect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)()>(&QWebSocket::connected), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)()>(&MyQWebSocket::Signal_Connected));;
}

void QWebSocket_Connected(void* ptr){
	static_cast<QWebSocket*>(ptr)->connected();
}

void QWebSocket_ConnectDisconnected(void* ptr){
	QObject::connect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)()>(&QWebSocket::disconnected), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)()>(&MyQWebSocket::Signal_Disconnected));;
}

void QWebSocket_DisconnectDisconnected(void* ptr){
	QObject::disconnect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)()>(&QWebSocket::disconnected), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)()>(&MyQWebSocket::Signal_Disconnected));;
}

void QWebSocket_Disconnected(void* ptr){
	static_cast<QWebSocket*>(ptr)->disconnected();
}

void QWebSocket_ConnectError2(void* ptr){
	QObject::connect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(QAbstractSocket::SocketError)>(&QWebSocket::error), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(QAbstractSocket::SocketError)>(&MyQWebSocket::Signal_Error2));;
}

void QWebSocket_DisconnectError2(void* ptr){
	QObject::disconnect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(QAbstractSocket::SocketError)>(&QWebSocket::error), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(QAbstractSocket::SocketError)>(&MyQWebSocket::Signal_Error2));;
}

void QWebSocket_Error2(void* ptr, int error){
	static_cast<QWebSocket*>(ptr)->error(static_cast<QAbstractSocket::SocketError>(error));
}

int QWebSocket_Error(void* ptr){
	return static_cast<QWebSocket*>(ptr)->error();
}

char* QWebSocket_ErrorString(void* ptr){
	return static_cast<QWebSocket*>(ptr)->errorString().toUtf8().data();
}

int QWebSocket_Flush(void* ptr){
	return static_cast<QWebSocket*>(ptr)->flush();
}

void QWebSocket_IgnoreSslErrors(void* ptr){
	QMetaObject::invokeMethod(static_cast<QWebSocket*>(ptr), "ignoreSslErrors");
}

int QWebSocket_IsValid(void* ptr){
	return static_cast<QWebSocket*>(ptr)->isValid();
}

void* QWebSocket_MaskGenerator(void* ptr){
	return const_cast<QMaskGenerator*>(static_cast<QWebSocket*>(ptr)->maskGenerator());
}

void QWebSocket_Open(void* ptr, void* url){
	QMetaObject::invokeMethod(static_cast<QWebSocket*>(ptr), "open", Q_ARG(QUrl, *static_cast<QUrl*>(url)));
}

char* QWebSocket_Origin(void* ptr){
	return static_cast<QWebSocket*>(ptr)->origin().toUtf8().data();
}

int QWebSocket_PauseMode(void* ptr){
	return static_cast<QWebSocket*>(ptr)->pauseMode();
}

char* QWebSocket_PeerName(void* ptr){
	return static_cast<QWebSocket*>(ptr)->peerName().toUtf8().data();
}

void QWebSocket_Ping(void* ptr, void* payload){
	QMetaObject::invokeMethod(static_cast<QWebSocket*>(ptr), "ping", Q_ARG(QByteArray, *static_cast<QByteArray*>(payload)));
}

long long QWebSocket_ReadBufferSize(void* ptr){
	return static_cast<long long>(static_cast<QWebSocket*>(ptr)->readBufferSize());
}

void QWebSocket_ConnectReadChannelFinished(void* ptr){
	QObject::connect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)()>(&QWebSocket::readChannelFinished), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)()>(&MyQWebSocket::Signal_ReadChannelFinished));;
}

void QWebSocket_DisconnectReadChannelFinished(void* ptr){
	QObject::disconnect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)()>(&QWebSocket::readChannelFinished), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)()>(&MyQWebSocket::Signal_ReadChannelFinished));;
}

void QWebSocket_ReadChannelFinished(void* ptr){
	static_cast<QWebSocket*>(ptr)->readChannelFinished();
}

void* QWebSocket_RequestUrl(void* ptr){
	return new QUrl(static_cast<QWebSocket*>(ptr)->requestUrl());
}

char* QWebSocket_ResourceName(void* ptr){
	return static_cast<QWebSocket*>(ptr)->resourceName().toUtf8().data();
}

void QWebSocket_Resume(void* ptr){
	static_cast<QWebSocket*>(ptr)->resume();
}

long long QWebSocket_SendBinaryMessage(void* ptr, void* data){
	return static_cast<long long>(static_cast<QWebSocket*>(ptr)->sendBinaryMessage(*static_cast<QByteArray*>(data)));
}

long long QWebSocket_SendTextMessage(void* ptr, char* message){
	return static_cast<long long>(static_cast<QWebSocket*>(ptr)->sendTextMessage(QString(message)));
}

void QWebSocket_SetMaskGenerator(void* ptr, void* maskGenerator){
	static_cast<QWebSocket*>(ptr)->setMaskGenerator(static_cast<QMaskGenerator*>(maskGenerator));
}

void QWebSocket_SetPauseMode(void* ptr, int pauseMode){
	static_cast<QWebSocket*>(ptr)->setPauseMode(static_cast<QAbstractSocket::PauseMode>(pauseMode));
}

void QWebSocket_SetProxy(void* ptr, void* networkProxy){
	static_cast<QWebSocket*>(ptr)->setProxy(*static_cast<QNetworkProxy*>(networkProxy));
}

void QWebSocket_SetReadBufferSize(void* ptr, long long size){
	static_cast<QWebSocket*>(ptr)->setReadBufferSize(static_cast<long long>(size));
}

void QWebSocket_SetSslConfiguration(void* ptr, void* sslConfiguration){
	static_cast<QWebSocket*>(ptr)->setSslConfiguration(*static_cast<QSslConfiguration*>(sslConfiguration));
}

int QWebSocket_State(void* ptr){
	return static_cast<QWebSocket*>(ptr)->state();
}

void QWebSocket_ConnectStateChanged(void* ptr){
	QObject::connect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(QAbstractSocket::SocketState)>(&QWebSocket::stateChanged), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(QAbstractSocket::SocketState)>(&MyQWebSocket::Signal_StateChanged));;
}

void QWebSocket_DisconnectStateChanged(void* ptr){
	QObject::disconnect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(QAbstractSocket::SocketState)>(&QWebSocket::stateChanged), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(QAbstractSocket::SocketState)>(&MyQWebSocket::Signal_StateChanged));;
}

void QWebSocket_StateChanged(void* ptr, int state){
	static_cast<QWebSocket*>(ptr)->stateChanged(static_cast<QAbstractSocket::SocketState>(state));
}

void QWebSocket_ConnectTextFrameReceived(void* ptr){
	QObject::connect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(const QString &, bool)>(&QWebSocket::textFrameReceived), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(const QString &, bool)>(&MyQWebSocket::Signal_TextFrameReceived));;
}

void QWebSocket_DisconnectTextFrameReceived(void* ptr){
	QObject::disconnect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(const QString &, bool)>(&QWebSocket::textFrameReceived), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(const QString &, bool)>(&MyQWebSocket::Signal_TextFrameReceived));;
}

void QWebSocket_TextFrameReceived(void* ptr, char* frame, int isLastFrame){
	static_cast<QWebSocket*>(ptr)->textFrameReceived(QString(frame), isLastFrame != 0);
}

void QWebSocket_ConnectTextMessageReceived(void* ptr){
	QObject::connect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(const QString &)>(&QWebSocket::textMessageReceived), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(const QString &)>(&MyQWebSocket::Signal_TextMessageReceived));;
}

void QWebSocket_DisconnectTextMessageReceived(void* ptr){
	QObject::disconnect(static_cast<QWebSocket*>(ptr), static_cast<void (QWebSocket::*)(const QString &)>(&QWebSocket::textMessageReceived), static_cast<MyQWebSocket*>(ptr), static_cast<void (MyQWebSocket::*)(const QString &)>(&MyQWebSocket::Signal_TextMessageReceived));;
}

void QWebSocket_TextMessageReceived(void* ptr, char* message){
	static_cast<QWebSocket*>(ptr)->textMessageReceived(QString(message));
}

void QWebSocket_DestroyQWebSocket(void* ptr){
	static_cast<QWebSocket*>(ptr)->~QWebSocket();
}

void QWebSocket_TimerEvent(void* ptr, void* event){
	static_cast<MyQWebSocket*>(ptr)->timerEvent(static_cast<QTimerEvent*>(event));
}

void QWebSocket_TimerEventDefault(void* ptr, void* event){
	static_cast<QWebSocket*>(ptr)->QWebSocket::timerEvent(static_cast<QTimerEvent*>(event));
}

void QWebSocket_ChildEvent(void* ptr, void* event){
	static_cast<MyQWebSocket*>(ptr)->childEvent(static_cast<QChildEvent*>(event));
}

void QWebSocket_ChildEventDefault(void* ptr, void* event){
	static_cast<QWebSocket*>(ptr)->QWebSocket::childEvent(static_cast<QChildEvent*>(event));
}

void QWebSocket_CustomEvent(void* ptr, void* event){
	static_cast<MyQWebSocket*>(ptr)->customEvent(static_cast<QEvent*>(event));
}

void QWebSocket_CustomEventDefault(void* ptr, void* event){
	static_cast<QWebSocket*>(ptr)->QWebSocket::customEvent(static_cast<QEvent*>(event));
}

void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator3(void* other){
	return new QWebSocketCorsAuthenticator(*static_cast<QWebSocketCorsAuthenticator*>(other));
}

void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator(char* origin){
	return new QWebSocketCorsAuthenticator(QString(origin));
}

void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator2(void* other){
	return new QWebSocketCorsAuthenticator(*static_cast<QWebSocketCorsAuthenticator*>(other));
}

int QWebSocketCorsAuthenticator_Allowed(void* ptr){
	return static_cast<QWebSocketCorsAuthenticator*>(ptr)->allowed();
}

char* QWebSocketCorsAuthenticator_Origin(void* ptr){
	return static_cast<QWebSocketCorsAuthenticator*>(ptr)->origin().toUtf8().data();
}

void QWebSocketCorsAuthenticator_SetAllowed(void* ptr, int allowed){
	static_cast<QWebSocketCorsAuthenticator*>(ptr)->setAllowed(allowed != 0);
}

void QWebSocketCorsAuthenticator_Swap(void* ptr, void* other){
	static_cast<QWebSocketCorsAuthenticator*>(ptr)->swap(*static_cast<QWebSocketCorsAuthenticator*>(other));
}

void QWebSocketCorsAuthenticator_DestroyQWebSocketCorsAuthenticator(void* ptr){
	static_cast<QWebSocketCorsAuthenticator*>(ptr)->~QWebSocketCorsAuthenticator();
}

class MyQWebSocketServer: public QWebSocketServer {
public:
	MyQWebSocketServer(const QString &serverName, SslMode secureMode, QObject *parent) : QWebSocketServer(serverName, secureMode, parent) {};
	void Signal_AcceptError(QAbstractSocket::SocketError socketError) { callbackQWebSocketServerAcceptError(this, this->objectName().toUtf8().data(), socketError); };
	void Signal_Closed() { callbackQWebSocketServerClosed(this, this->objectName().toUtf8().data()); };
	void Signal_NewConnection() { callbackQWebSocketServerNewConnection(this, this->objectName().toUtf8().data()); };
	void Signal_OriginAuthenticationRequired(QWebSocketCorsAuthenticator * authenticator) { callbackQWebSocketServerOriginAuthenticationRequired(this, this->objectName().toUtf8().data(), authenticator); };
	void timerEvent(QTimerEvent * event) { callbackQWebSocketServerTimerEvent(this, this->objectName().toUtf8().data(), event); };
	void childEvent(QChildEvent * event) { callbackQWebSocketServerChildEvent(this, this->objectName().toUtf8().data(), event); };
	void customEvent(QEvent * event) { callbackQWebSocketServerCustomEvent(this, this->objectName().toUtf8().data(), event); };
};

void* QWebSocketServer_NewQWebSocketServer(char* serverName, int secureMode, void* parent){
	return new MyQWebSocketServer(QString(serverName), static_cast<QWebSocketServer::SslMode>(secureMode), static_cast<QObject*>(parent));
}

void QWebSocketServer_ConnectAcceptError(void* ptr){
	QObject::connect(static_cast<QWebSocketServer*>(ptr), static_cast<void (QWebSocketServer::*)(QAbstractSocket::SocketError)>(&QWebSocketServer::acceptError), static_cast<MyQWebSocketServer*>(ptr), static_cast<void (MyQWebSocketServer::*)(QAbstractSocket::SocketError)>(&MyQWebSocketServer::Signal_AcceptError));;
}

void QWebSocketServer_DisconnectAcceptError(void* ptr){
	QObject::disconnect(static_cast<QWebSocketServer*>(ptr), static_cast<void (QWebSocketServer::*)(QAbstractSocket::SocketError)>(&QWebSocketServer::acceptError), static_cast<MyQWebSocketServer*>(ptr), static_cast<void (MyQWebSocketServer::*)(QAbstractSocket::SocketError)>(&MyQWebSocketServer::Signal_AcceptError));;
}

void QWebSocketServer_AcceptError(void* ptr, int socketError){
	static_cast<QWebSocketServer*>(ptr)->acceptError(static_cast<QAbstractSocket::SocketError>(socketError));
}

void QWebSocketServer_Close(void* ptr){
	static_cast<QWebSocketServer*>(ptr)->close();
}

void QWebSocketServer_ConnectClosed(void* ptr){
	QObject::connect(static_cast<QWebSocketServer*>(ptr), static_cast<void (QWebSocketServer::*)()>(&QWebSocketServer::closed), static_cast<MyQWebSocketServer*>(ptr), static_cast<void (MyQWebSocketServer::*)()>(&MyQWebSocketServer::Signal_Closed));;
}

void QWebSocketServer_DisconnectClosed(void* ptr){
	QObject::disconnect(static_cast<QWebSocketServer*>(ptr), static_cast<void (QWebSocketServer::*)()>(&QWebSocketServer::closed), static_cast<MyQWebSocketServer*>(ptr), static_cast<void (MyQWebSocketServer::*)()>(&MyQWebSocketServer::Signal_Closed));;
}

void QWebSocketServer_Closed(void* ptr){
	static_cast<QWebSocketServer*>(ptr)->closed();
}

char* QWebSocketServer_ErrorString(void* ptr){
	return static_cast<QWebSocketServer*>(ptr)->errorString().toUtf8().data();
}

int QWebSocketServer_HasPendingConnections(void* ptr){
	return static_cast<QWebSocketServer*>(ptr)->hasPendingConnections();
}

int QWebSocketServer_IsListening(void* ptr){
	return static_cast<QWebSocketServer*>(ptr)->isListening();
}

int QWebSocketServer_MaxPendingConnections(void* ptr){
	return static_cast<QWebSocketServer*>(ptr)->maxPendingConnections();
}

void QWebSocketServer_ConnectNewConnection(void* ptr){
	QObject::connect(static_cast<QWebSocketServer*>(ptr), static_cast<void (QWebSocketServer::*)()>(&QWebSocketServer::newConnection), static_cast<MyQWebSocketServer*>(ptr), static_cast<void (MyQWebSocketServer::*)()>(&MyQWebSocketServer::Signal_NewConnection));;
}

void QWebSocketServer_DisconnectNewConnection(void* ptr){
	QObject::disconnect(static_cast<QWebSocketServer*>(ptr), static_cast<void (QWebSocketServer::*)()>(&QWebSocketServer::newConnection), static_cast<MyQWebSocketServer*>(ptr), static_cast<void (MyQWebSocketServer::*)()>(&MyQWebSocketServer::Signal_NewConnection));;
}

void QWebSocketServer_NewConnection(void* ptr){
	static_cast<QWebSocketServer*>(ptr)->newConnection();
}

void* QWebSocketServer_NextPendingConnection(void* ptr){
	return static_cast<QWebSocketServer*>(ptr)->nextPendingConnection();
}

void QWebSocketServer_ConnectOriginAuthenticationRequired(void* ptr){
	QObject::connect(static_cast<QWebSocketServer*>(ptr), static_cast<void (QWebSocketServer::*)(QWebSocketCorsAuthenticator *)>(&QWebSocketServer::originAuthenticationRequired), static_cast<MyQWebSocketServer*>(ptr), static_cast<void (MyQWebSocketServer::*)(QWebSocketCorsAuthenticator *)>(&MyQWebSocketServer::Signal_OriginAuthenticationRequired));;
}

void QWebSocketServer_DisconnectOriginAuthenticationRequired(void* ptr){
	QObject::disconnect(static_cast<QWebSocketServer*>(ptr), static_cast<void (QWebSocketServer::*)(QWebSocketCorsAuthenticator *)>(&QWebSocketServer::originAuthenticationRequired), static_cast<MyQWebSocketServer*>(ptr), static_cast<void (MyQWebSocketServer::*)(QWebSocketCorsAuthenticator *)>(&MyQWebSocketServer::Signal_OriginAuthenticationRequired));;
}

void QWebSocketServer_OriginAuthenticationRequired(void* ptr, void* authenticator){
	static_cast<QWebSocketServer*>(ptr)->originAuthenticationRequired(static_cast<QWebSocketCorsAuthenticator*>(authenticator));
}

void QWebSocketServer_PauseAccepting(void* ptr){
	static_cast<QWebSocketServer*>(ptr)->pauseAccepting();
}

void QWebSocketServer_ResumeAccepting(void* ptr){
	static_cast<QWebSocketServer*>(ptr)->resumeAccepting();
}

int QWebSocketServer_SecureMode(void* ptr){
	return static_cast<QWebSocketServer*>(ptr)->secureMode();
}

char* QWebSocketServer_ServerName(void* ptr){
	return static_cast<QWebSocketServer*>(ptr)->serverName().toUtf8().data();
}

void* QWebSocketServer_ServerUrl(void* ptr){
	return new QUrl(static_cast<QWebSocketServer*>(ptr)->serverUrl());
}

void QWebSocketServer_SetMaxPendingConnections(void* ptr, int numConnections){
	static_cast<QWebSocketServer*>(ptr)->setMaxPendingConnections(numConnections);
}

void QWebSocketServer_SetProxy(void* ptr, void* networkProxy){
	static_cast<QWebSocketServer*>(ptr)->setProxy(*static_cast<QNetworkProxy*>(networkProxy));
}

void QWebSocketServer_SetServerName(void* ptr, char* serverName){
	static_cast<QWebSocketServer*>(ptr)->setServerName(QString(serverName));
}

int QWebSocketServer_SetSocketDescriptor(void* ptr, int socketDescriptor){
	return static_cast<QWebSocketServer*>(ptr)->setSocketDescriptor(socketDescriptor);
}

void QWebSocketServer_SetSslConfiguration(void* ptr, void* sslConfiguration){
	static_cast<QWebSocketServer*>(ptr)->setSslConfiguration(*static_cast<QSslConfiguration*>(sslConfiguration));
}

int QWebSocketServer_SocketDescriptor(void* ptr){
	return static_cast<QWebSocketServer*>(ptr)->socketDescriptor();
}

void QWebSocketServer_DestroyQWebSocketServer(void* ptr){
	static_cast<QWebSocketServer*>(ptr)->~QWebSocketServer();
}

void QWebSocketServer_TimerEvent(void* ptr, void* event){
	static_cast<MyQWebSocketServer*>(ptr)->timerEvent(static_cast<QTimerEvent*>(event));
}

void QWebSocketServer_TimerEventDefault(void* ptr, void* event){
	static_cast<QWebSocketServer*>(ptr)->QWebSocketServer::timerEvent(static_cast<QTimerEvent*>(event));
}

void QWebSocketServer_ChildEvent(void* ptr, void* event){
	static_cast<MyQWebSocketServer*>(ptr)->childEvent(static_cast<QChildEvent*>(event));
}

void QWebSocketServer_ChildEventDefault(void* ptr, void* event){
	static_cast<QWebSocketServer*>(ptr)->QWebSocketServer::childEvent(static_cast<QChildEvent*>(event));
}

void QWebSocketServer_CustomEvent(void* ptr, void* event){
	static_cast<MyQWebSocketServer*>(ptr)->customEvent(static_cast<QEvent*>(event));
}

void QWebSocketServer_CustomEventDefault(void* ptr, void* event){
	static_cast<QWebSocketServer*>(ptr)->QWebSocketServer::customEvent(static_cast<QEvent*>(event));
}

