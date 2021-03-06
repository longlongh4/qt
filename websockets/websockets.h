#pragma once

#ifndef GO_QTWEBSOCKETS_H
#define GO_QTWEBSOCKETS_H

#ifdef __cplusplus
extern "C" {
#endif

int QMaskGenerator_Seed(void* ptr);
void QMaskGenerator_DestroyQMaskGenerator(void* ptr);
void QMaskGenerator_TimerEvent(void* ptr, void* event);
void QMaskGenerator_TimerEventDefault(void* ptr, void* event);
void QMaskGenerator_ChildEvent(void* ptr, void* event);
void QMaskGenerator_ChildEventDefault(void* ptr, void* event);
void QMaskGenerator_CustomEvent(void* ptr, void* event);
void QMaskGenerator_CustomEventDefault(void* ptr, void* event);
void QWebSocket_Abort(void* ptr);
void QWebSocket_ConnectAboutToClose(void* ptr);
void QWebSocket_DisconnectAboutToClose(void* ptr);
void QWebSocket_AboutToClose(void* ptr);
void QWebSocket_ConnectBinaryFrameReceived(void* ptr);
void QWebSocket_DisconnectBinaryFrameReceived(void* ptr);
void QWebSocket_BinaryFrameReceived(void* ptr, void* frame, int isLastFrame);
void QWebSocket_ConnectBinaryMessageReceived(void* ptr);
void QWebSocket_DisconnectBinaryMessageReceived(void* ptr);
void QWebSocket_BinaryMessageReceived(void* ptr, void* message);
void QWebSocket_ConnectBytesWritten(void* ptr);
void QWebSocket_DisconnectBytesWritten(void* ptr);
void QWebSocket_BytesWritten(void* ptr, long long bytes);
char* QWebSocket_CloseReason(void* ptr);
void QWebSocket_ConnectConnected(void* ptr);
void QWebSocket_DisconnectConnected(void* ptr);
void QWebSocket_Connected(void* ptr);
void QWebSocket_ConnectDisconnected(void* ptr);
void QWebSocket_DisconnectDisconnected(void* ptr);
void QWebSocket_Disconnected(void* ptr);
void QWebSocket_ConnectError2(void* ptr);
void QWebSocket_DisconnectError2(void* ptr);
void QWebSocket_Error2(void* ptr, int error);
int QWebSocket_Error(void* ptr);
char* QWebSocket_ErrorString(void* ptr);
int QWebSocket_Flush(void* ptr);
void QWebSocket_IgnoreSslErrors(void* ptr);
int QWebSocket_IsValid(void* ptr);
void* QWebSocket_MaskGenerator(void* ptr);
void QWebSocket_Open(void* ptr, void* url);
char* QWebSocket_Origin(void* ptr);
int QWebSocket_PauseMode(void* ptr);
char* QWebSocket_PeerName(void* ptr);
void QWebSocket_Ping(void* ptr, void* payload);
long long QWebSocket_ReadBufferSize(void* ptr);
void QWebSocket_ConnectReadChannelFinished(void* ptr);
void QWebSocket_DisconnectReadChannelFinished(void* ptr);
void QWebSocket_ReadChannelFinished(void* ptr);
void* QWebSocket_RequestUrl(void* ptr);
char* QWebSocket_ResourceName(void* ptr);
void QWebSocket_Resume(void* ptr);
long long QWebSocket_SendBinaryMessage(void* ptr, void* data);
long long QWebSocket_SendTextMessage(void* ptr, char* message);
void QWebSocket_SetMaskGenerator(void* ptr, void* maskGenerator);
void QWebSocket_SetPauseMode(void* ptr, int pauseMode);
void QWebSocket_SetProxy(void* ptr, void* networkProxy);
void QWebSocket_SetReadBufferSize(void* ptr, long long size);
void QWebSocket_SetSslConfiguration(void* ptr, void* sslConfiguration);
int QWebSocket_State(void* ptr);
void QWebSocket_ConnectStateChanged(void* ptr);
void QWebSocket_DisconnectStateChanged(void* ptr);
void QWebSocket_StateChanged(void* ptr, int state);
void QWebSocket_ConnectTextFrameReceived(void* ptr);
void QWebSocket_DisconnectTextFrameReceived(void* ptr);
void QWebSocket_TextFrameReceived(void* ptr, char* frame, int isLastFrame);
void QWebSocket_ConnectTextMessageReceived(void* ptr);
void QWebSocket_DisconnectTextMessageReceived(void* ptr);
void QWebSocket_TextMessageReceived(void* ptr, char* message);
void QWebSocket_DestroyQWebSocket(void* ptr);
void QWebSocket_TimerEvent(void* ptr, void* event);
void QWebSocket_TimerEventDefault(void* ptr, void* event);
void QWebSocket_ChildEvent(void* ptr, void* event);
void QWebSocket_ChildEventDefault(void* ptr, void* event);
void QWebSocket_CustomEvent(void* ptr, void* event);
void QWebSocket_CustomEventDefault(void* ptr, void* event);
void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator3(void* other);
void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator(char* origin);
void* QWebSocketCorsAuthenticator_NewQWebSocketCorsAuthenticator2(void* other);
int QWebSocketCorsAuthenticator_Allowed(void* ptr);
char* QWebSocketCorsAuthenticator_Origin(void* ptr);
void QWebSocketCorsAuthenticator_SetAllowed(void* ptr, int allowed);
void QWebSocketCorsAuthenticator_Swap(void* ptr, void* other);
void QWebSocketCorsAuthenticator_DestroyQWebSocketCorsAuthenticator(void* ptr);
void* QWebSocketServer_NewQWebSocketServer(char* serverName, int secureMode, void* parent);
void QWebSocketServer_ConnectAcceptError(void* ptr);
void QWebSocketServer_DisconnectAcceptError(void* ptr);
void QWebSocketServer_AcceptError(void* ptr, int socketError);
void QWebSocketServer_Close(void* ptr);
void QWebSocketServer_ConnectClosed(void* ptr);
void QWebSocketServer_DisconnectClosed(void* ptr);
void QWebSocketServer_Closed(void* ptr);
char* QWebSocketServer_ErrorString(void* ptr);
int QWebSocketServer_HasPendingConnections(void* ptr);
int QWebSocketServer_IsListening(void* ptr);
int QWebSocketServer_MaxPendingConnections(void* ptr);
void QWebSocketServer_ConnectNewConnection(void* ptr);
void QWebSocketServer_DisconnectNewConnection(void* ptr);
void QWebSocketServer_NewConnection(void* ptr);
void* QWebSocketServer_NextPendingConnection(void* ptr);
void* QWebSocketServer_NextPendingConnectionDefault(void* ptr);
void QWebSocketServer_ConnectOriginAuthenticationRequired(void* ptr);
void QWebSocketServer_DisconnectOriginAuthenticationRequired(void* ptr);
void QWebSocketServer_OriginAuthenticationRequired(void* ptr, void* authenticator);
void QWebSocketServer_PauseAccepting(void* ptr);
void QWebSocketServer_ResumeAccepting(void* ptr);
int QWebSocketServer_SecureMode(void* ptr);
char* QWebSocketServer_ServerName(void* ptr);
void* QWebSocketServer_ServerUrl(void* ptr);
void QWebSocketServer_SetMaxPendingConnections(void* ptr, int numConnections);
void QWebSocketServer_SetProxy(void* ptr, void* networkProxy);
void QWebSocketServer_SetServerName(void* ptr, char* serverName);
int QWebSocketServer_SetSocketDescriptor(void* ptr, int socketDescriptor);
void QWebSocketServer_SetSslConfiguration(void* ptr, void* sslConfiguration);
int QWebSocketServer_SocketDescriptor(void* ptr);
void QWebSocketServer_DestroyQWebSocketServer(void* ptr);
void QWebSocketServer_TimerEvent(void* ptr, void* event);
void QWebSocketServer_TimerEventDefault(void* ptr, void* event);
void QWebSocketServer_ChildEvent(void* ptr, void* event);
void QWebSocketServer_ChildEventDefault(void* ptr, void* event);
void QWebSocketServer_CustomEvent(void* ptr, void* event);
void QWebSocketServer_CustomEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif