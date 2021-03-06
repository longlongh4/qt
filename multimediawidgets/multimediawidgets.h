#pragma once

#ifndef GO_QTMULTIMEDIAWIDGETS_H
#define GO_QTMULTIMEDIAWIDGETS_H

#ifdef __cplusplus
extern "C" {
#endif

void* QCameraViewfinder_NewQCameraViewfinder(void* parent);
void* QCameraViewfinder_MediaObject(void* ptr);
void* QCameraViewfinder_MediaObjectDefault(void* ptr);
int QCameraViewfinder_SetMediaObject(void* ptr, void* object);
int QCameraViewfinder_SetMediaObjectDefault(void* ptr, void* object);
void QCameraViewfinder_DestroyQCameraViewfinder(void* ptr);
void QCameraViewfinder_HideEvent(void* ptr, void* event);
void QCameraViewfinder_HideEventDefault(void* ptr, void* event);
void QCameraViewfinder_MoveEvent(void* ptr, void* event);
void QCameraViewfinder_MoveEventDefault(void* ptr, void* event);
void QCameraViewfinder_PaintEvent(void* ptr, void* event);
void QCameraViewfinder_PaintEventDefault(void* ptr, void* event);
void QCameraViewfinder_ResizeEvent(void* ptr, void* event);
void QCameraViewfinder_ResizeEventDefault(void* ptr, void* event);
void QCameraViewfinder_ShowEvent(void* ptr, void* event);
void QCameraViewfinder_ShowEventDefault(void* ptr, void* event);
void QCameraViewfinder_ActionEvent(void* ptr, void* event);
void QCameraViewfinder_ActionEventDefault(void* ptr, void* event);
void QCameraViewfinder_DragEnterEvent(void* ptr, void* event);
void QCameraViewfinder_DragEnterEventDefault(void* ptr, void* event);
void QCameraViewfinder_DragLeaveEvent(void* ptr, void* event);
void QCameraViewfinder_DragLeaveEventDefault(void* ptr, void* event);
void QCameraViewfinder_DragMoveEvent(void* ptr, void* event);
void QCameraViewfinder_DragMoveEventDefault(void* ptr, void* event);
void QCameraViewfinder_DropEvent(void* ptr, void* event);
void QCameraViewfinder_DropEventDefault(void* ptr, void* event);
void QCameraViewfinder_EnterEvent(void* ptr, void* event);
void QCameraViewfinder_EnterEventDefault(void* ptr, void* event);
void QCameraViewfinder_FocusInEvent(void* ptr, void* event);
void QCameraViewfinder_FocusInEventDefault(void* ptr, void* event);
void QCameraViewfinder_FocusOutEvent(void* ptr, void* event);
void QCameraViewfinder_FocusOutEventDefault(void* ptr, void* event);
void QCameraViewfinder_LeaveEvent(void* ptr, void* event);
void QCameraViewfinder_LeaveEventDefault(void* ptr, void* event);
void QCameraViewfinder_SetVisible(void* ptr, int visible);
void QCameraViewfinder_SetVisibleDefault(void* ptr, int visible);
void QCameraViewfinder_ChangeEvent(void* ptr, void* event);
void QCameraViewfinder_ChangeEventDefault(void* ptr, void* event);
void QCameraViewfinder_CloseEvent(void* ptr, void* event);
void QCameraViewfinder_CloseEventDefault(void* ptr, void* event);
void QCameraViewfinder_ContextMenuEvent(void* ptr, void* event);
void QCameraViewfinder_ContextMenuEventDefault(void* ptr, void* event);
void QCameraViewfinder_InitPainter(void* ptr, void* painter);
void QCameraViewfinder_InitPainterDefault(void* ptr, void* painter);
void QCameraViewfinder_InputMethodEvent(void* ptr, void* event);
void QCameraViewfinder_InputMethodEventDefault(void* ptr, void* event);
void QCameraViewfinder_KeyPressEvent(void* ptr, void* event);
void QCameraViewfinder_KeyPressEventDefault(void* ptr, void* event);
void QCameraViewfinder_KeyReleaseEvent(void* ptr, void* event);
void QCameraViewfinder_KeyReleaseEventDefault(void* ptr, void* event);
void QCameraViewfinder_MouseDoubleClickEvent(void* ptr, void* event);
void QCameraViewfinder_MouseDoubleClickEventDefault(void* ptr, void* event);
void QCameraViewfinder_MouseMoveEvent(void* ptr, void* event);
void QCameraViewfinder_MouseMoveEventDefault(void* ptr, void* event);
void QCameraViewfinder_MousePressEvent(void* ptr, void* event);
void QCameraViewfinder_MousePressEventDefault(void* ptr, void* event);
void QCameraViewfinder_MouseReleaseEvent(void* ptr, void* event);
void QCameraViewfinder_MouseReleaseEventDefault(void* ptr, void* event);
void QCameraViewfinder_TabletEvent(void* ptr, void* event);
void QCameraViewfinder_TabletEventDefault(void* ptr, void* event);
void QCameraViewfinder_WheelEvent(void* ptr, void* event);
void QCameraViewfinder_WheelEventDefault(void* ptr, void* event);
void QCameraViewfinder_TimerEvent(void* ptr, void* event);
void QCameraViewfinder_TimerEventDefault(void* ptr, void* event);
void QCameraViewfinder_ChildEvent(void* ptr, void* event);
void QCameraViewfinder_ChildEventDefault(void* ptr, void* event);
void QCameraViewfinder_CustomEvent(void* ptr, void* event);
void QCameraViewfinder_CustomEventDefault(void* ptr, void* event);
void* QGraphicsVideoItem_NewQGraphicsVideoItem(void* parent);
int QGraphicsVideoItem_AspectRatioMode(void* ptr);
void* QGraphicsVideoItem_MediaObject(void* ptr);
void* QGraphicsVideoItem_MediaObjectDefault(void* ptr);
void QGraphicsVideoItem_Paint(void* ptr, void* painter, void* option, void* widget);
void QGraphicsVideoItem_PaintDefault(void* ptr, void* painter, void* option, void* widget);
void QGraphicsVideoItem_SetAspectRatioMode(void* ptr, int mode);
void QGraphicsVideoItem_SetOffset(void* ptr, void* offset);
void QGraphicsVideoItem_SetSize(void* ptr, void* size);
void QGraphicsVideoItem_DestroyQGraphicsVideoItem(void* ptr);
void QGraphicsVideoItem_TimerEvent(void* ptr, void* event);
void QGraphicsVideoItem_TimerEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_ChildEvent(void* ptr, void* event);
void QGraphicsVideoItem_ChildEventDefault(void* ptr, void* event);
void QGraphicsVideoItem_CustomEvent(void* ptr, void* event);
void QGraphicsVideoItem_CustomEventDefault(void* ptr, void* event);
int QVideoWidget_AspectRatioMode(void* ptr);
int QVideoWidget_Brightness(void* ptr);
int QVideoWidget_Contrast(void* ptr);
int QVideoWidget_Hue(void* ptr);
void* QVideoWidget_MediaObject(void* ptr);
void* QVideoWidget_MediaObjectDefault(void* ptr);
int QVideoWidget_Saturation(void* ptr);
void QVideoWidget_SetAspectRatioMode(void* ptr, int mode);
void QVideoWidget_SetBrightness(void* ptr, int brightness);
void QVideoWidget_SetContrast(void* ptr, int contrast);
void QVideoWidget_SetFullScreen(void* ptr, int fullScreen);
void QVideoWidget_SetHue(void* ptr, int hue);
void QVideoWidget_SetSaturation(void* ptr, int saturation);
void* QVideoWidget_NewQVideoWidget(void* parent);
void QVideoWidget_ConnectBrightnessChanged(void* ptr);
void QVideoWidget_DisconnectBrightnessChanged(void* ptr);
void QVideoWidget_BrightnessChanged(void* ptr, int brightness);
void QVideoWidget_ConnectContrastChanged(void* ptr);
void QVideoWidget_DisconnectContrastChanged(void* ptr);
void QVideoWidget_ContrastChanged(void* ptr, int contrast);
int QVideoWidget_Event(void* ptr, void* event);
int QVideoWidget_EventDefault(void* ptr, void* event);
void QVideoWidget_ConnectFullScreenChanged(void* ptr);
void QVideoWidget_DisconnectFullScreenChanged(void* ptr);
void QVideoWidget_FullScreenChanged(void* ptr, int fullScreen);
void QVideoWidget_HideEvent(void* ptr, void* event);
void QVideoWidget_HideEventDefault(void* ptr, void* event);
void QVideoWidget_ConnectHueChanged(void* ptr);
void QVideoWidget_DisconnectHueChanged(void* ptr);
void QVideoWidget_HueChanged(void* ptr, int hue);
int QVideoWidget_IsFullScreen(void* ptr);
void QVideoWidget_MoveEvent(void* ptr, void* event);
void QVideoWidget_MoveEventDefault(void* ptr, void* event);
void QVideoWidget_PaintEvent(void* ptr, void* event);
void QVideoWidget_PaintEventDefault(void* ptr, void* event);
void QVideoWidget_ResizeEvent(void* ptr, void* event);
void QVideoWidget_ResizeEventDefault(void* ptr, void* event);
void QVideoWidget_ConnectSaturationChanged(void* ptr);
void QVideoWidget_DisconnectSaturationChanged(void* ptr);
void QVideoWidget_SaturationChanged(void* ptr, int saturation);
void QVideoWidget_ShowEvent(void* ptr, void* event);
void QVideoWidget_ShowEventDefault(void* ptr, void* event);
void* QVideoWidget_SizeHint(void* ptr);
void* QVideoWidget_SizeHintDefault(void* ptr);
void QVideoWidget_DestroyQVideoWidget(void* ptr);
void QVideoWidget_ActionEvent(void* ptr, void* event);
void QVideoWidget_ActionEventDefault(void* ptr, void* event);
void QVideoWidget_DragEnterEvent(void* ptr, void* event);
void QVideoWidget_DragEnterEventDefault(void* ptr, void* event);
void QVideoWidget_DragLeaveEvent(void* ptr, void* event);
void QVideoWidget_DragLeaveEventDefault(void* ptr, void* event);
void QVideoWidget_DragMoveEvent(void* ptr, void* event);
void QVideoWidget_DragMoveEventDefault(void* ptr, void* event);
void QVideoWidget_DropEvent(void* ptr, void* event);
void QVideoWidget_DropEventDefault(void* ptr, void* event);
void QVideoWidget_EnterEvent(void* ptr, void* event);
void QVideoWidget_EnterEventDefault(void* ptr, void* event);
void QVideoWidget_FocusInEvent(void* ptr, void* event);
void QVideoWidget_FocusInEventDefault(void* ptr, void* event);
void QVideoWidget_FocusOutEvent(void* ptr, void* event);
void QVideoWidget_FocusOutEventDefault(void* ptr, void* event);
void QVideoWidget_LeaveEvent(void* ptr, void* event);
void QVideoWidget_LeaveEventDefault(void* ptr, void* event);
void QVideoWidget_SetVisible(void* ptr, int visible);
void QVideoWidget_SetVisibleDefault(void* ptr, int visible);
void QVideoWidget_ChangeEvent(void* ptr, void* event);
void QVideoWidget_ChangeEventDefault(void* ptr, void* event);
void QVideoWidget_CloseEvent(void* ptr, void* event);
void QVideoWidget_CloseEventDefault(void* ptr, void* event);
void QVideoWidget_ContextMenuEvent(void* ptr, void* event);
void QVideoWidget_ContextMenuEventDefault(void* ptr, void* event);
void QVideoWidget_InitPainter(void* ptr, void* painter);
void QVideoWidget_InitPainterDefault(void* ptr, void* painter);
void QVideoWidget_InputMethodEvent(void* ptr, void* event);
void QVideoWidget_InputMethodEventDefault(void* ptr, void* event);
void QVideoWidget_KeyPressEvent(void* ptr, void* event);
void QVideoWidget_KeyPressEventDefault(void* ptr, void* event);
void QVideoWidget_KeyReleaseEvent(void* ptr, void* event);
void QVideoWidget_KeyReleaseEventDefault(void* ptr, void* event);
void QVideoWidget_MouseDoubleClickEvent(void* ptr, void* event);
void QVideoWidget_MouseDoubleClickEventDefault(void* ptr, void* event);
void QVideoWidget_MouseMoveEvent(void* ptr, void* event);
void QVideoWidget_MouseMoveEventDefault(void* ptr, void* event);
void QVideoWidget_MousePressEvent(void* ptr, void* event);
void QVideoWidget_MousePressEventDefault(void* ptr, void* event);
void QVideoWidget_MouseReleaseEvent(void* ptr, void* event);
void QVideoWidget_MouseReleaseEventDefault(void* ptr, void* event);
void QVideoWidget_TabletEvent(void* ptr, void* event);
void QVideoWidget_TabletEventDefault(void* ptr, void* event);
void QVideoWidget_WheelEvent(void* ptr, void* event);
void QVideoWidget_WheelEventDefault(void* ptr, void* event);
void QVideoWidget_TimerEvent(void* ptr, void* event);
void QVideoWidget_TimerEventDefault(void* ptr, void* event);
void QVideoWidget_ChildEvent(void* ptr, void* event);
void QVideoWidget_ChildEventDefault(void* ptr, void* event);
void QVideoWidget_CustomEvent(void* ptr, void* event);
void QVideoWidget_CustomEventDefault(void* ptr, void* event);
int QVideoWidgetControl_AspectRatioMode(void* ptr);
int QVideoWidgetControl_Brightness(void* ptr);
void QVideoWidgetControl_ConnectBrightnessChanged(void* ptr);
void QVideoWidgetControl_DisconnectBrightnessChanged(void* ptr);
void QVideoWidgetControl_BrightnessChanged(void* ptr, int brightness);
int QVideoWidgetControl_Contrast(void* ptr);
void QVideoWidgetControl_ConnectContrastChanged(void* ptr);
void QVideoWidgetControl_DisconnectContrastChanged(void* ptr);
void QVideoWidgetControl_ContrastChanged(void* ptr, int contrast);
void QVideoWidgetControl_ConnectFullScreenChanged(void* ptr);
void QVideoWidgetControl_DisconnectFullScreenChanged(void* ptr);
void QVideoWidgetControl_FullScreenChanged(void* ptr, int fullScreen);
int QVideoWidgetControl_Hue(void* ptr);
void QVideoWidgetControl_ConnectHueChanged(void* ptr);
void QVideoWidgetControl_DisconnectHueChanged(void* ptr);
void QVideoWidgetControl_HueChanged(void* ptr, int hue);
int QVideoWidgetControl_IsFullScreen(void* ptr);
int QVideoWidgetControl_Saturation(void* ptr);
void QVideoWidgetControl_ConnectSaturationChanged(void* ptr);
void QVideoWidgetControl_DisconnectSaturationChanged(void* ptr);
void QVideoWidgetControl_SaturationChanged(void* ptr, int saturation);
void QVideoWidgetControl_SetAspectRatioMode(void* ptr, int mode);
void QVideoWidgetControl_SetBrightness(void* ptr, int brightness);
void QVideoWidgetControl_SetContrast(void* ptr, int contrast);
void QVideoWidgetControl_SetFullScreen(void* ptr, int fullScreen);
void QVideoWidgetControl_SetHue(void* ptr, int hue);
void QVideoWidgetControl_SetSaturation(void* ptr, int saturation);
void* QVideoWidgetControl_VideoWidget(void* ptr);
void QVideoWidgetControl_DestroyQVideoWidgetControl(void* ptr);
void QVideoWidgetControl_TimerEvent(void* ptr, void* event);
void QVideoWidgetControl_TimerEventDefault(void* ptr, void* event);
void QVideoWidgetControl_ChildEvent(void* ptr, void* event);
void QVideoWidgetControl_ChildEventDefault(void* ptr, void* event);
void QVideoWidgetControl_CustomEvent(void* ptr, void* event);
void QVideoWidgetControl_CustomEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif