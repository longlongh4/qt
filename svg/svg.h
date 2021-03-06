#pragma once

#ifndef GO_QTSVG_H
#define GO_QTSVG_H

#ifdef __cplusplus
extern "C" {
#endif

char* QGraphicsSvgItem_ElementId(void* ptr);
void* QGraphicsSvgItem_MaximumCacheSize(void* ptr);
void QGraphicsSvgItem_Paint(void* ptr, void* painter, void* option, void* widget);
void QGraphicsSvgItem_PaintDefault(void* ptr, void* painter, void* option, void* widget);
void* QGraphicsSvgItem_Renderer(void* ptr);
void QGraphicsSvgItem_SetElementId(void* ptr, char* id);
void QGraphicsSvgItem_SetMaximumCacheSize(void* ptr, void* size);
void QGraphicsSvgItem_SetSharedRenderer(void* ptr, void* renderer);
int QGraphicsSvgItem_Type(void* ptr);
int QGraphicsSvgItem_TypeDefault(void* ptr);
void QGraphicsSvgItem_TimerEvent(void* ptr, void* event);
void QGraphicsSvgItem_TimerEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_ChildEvent(void* ptr, void* event);
void QGraphicsSvgItem_ChildEventDefault(void* ptr, void* event);
void QGraphicsSvgItem_CustomEvent(void* ptr, void* event);
void QGraphicsSvgItem_CustomEventDefault(void* ptr, void* event);
char* QSvgGenerator_Description(void* ptr);
char* QSvgGenerator_FileName(void* ptr);
void* QSvgGenerator_OutputDevice(void* ptr);
int QSvgGenerator_Resolution(void* ptr);
void QSvgGenerator_SetDescription(void* ptr, char* description);
void QSvgGenerator_SetFileName(void* ptr, char* fileName);
void QSvgGenerator_SetOutputDevice(void* ptr, void* outputDevice);
void QSvgGenerator_SetResolution(void* ptr, int dpi);
void QSvgGenerator_SetSize(void* ptr, void* size);
void QSvgGenerator_SetTitle(void* ptr, char* title);
void QSvgGenerator_SetViewBox(void* ptr, void* viewBox);
void QSvgGenerator_SetViewBox2(void* ptr, void* viewBox);
void* QSvgGenerator_Size(void* ptr);
char* QSvgGenerator_Title(void* ptr);
void* QSvgGenerator_NewQSvgGenerator();
int QSvgGenerator_Metric(void* ptr, int metric);
int QSvgGenerator_MetricDefault(void* ptr, int metric);
void* QSvgGenerator_PaintEngine(void* ptr);
void* QSvgGenerator_PaintEngineDefault(void* ptr);
void* QSvgGenerator_ViewBox(void* ptr);
void QSvgGenerator_DestroyQSvgGenerator(void* ptr);
char* QSvgGenerator_ObjectNameAbs(void* ptr);
void QSvgGenerator_SetObjectNameAbs(void* ptr, char* name);
int QSvgRenderer_FramesPerSecond(void* ptr);
void QSvgRenderer_SetFramesPerSecond(void* ptr, int num);
void QSvgRenderer_SetViewBox(void* ptr, void* viewbox);
void QSvgRenderer_SetViewBox2(void* ptr, void* viewbox);
void* QSvgRenderer_NewQSvgRenderer(void* parent);
void* QSvgRenderer_NewQSvgRenderer4(void* contents, void* parent);
void* QSvgRenderer_NewQSvgRenderer3(void* contents, void* parent);
void* QSvgRenderer_NewQSvgRenderer2(char* filename, void* parent);
int QSvgRenderer_Animated(void* ptr);
void* QSvgRenderer_DefaultSize(void* ptr);
int QSvgRenderer_ElementExists(void* ptr, char* id);
int QSvgRenderer_IsValid(void* ptr);
int QSvgRenderer_Load3(void* ptr, void* contents);
int QSvgRenderer_Load2(void* ptr, void* contents);
int QSvgRenderer_Load(void* ptr, char* filename);
void QSvgRenderer_Render(void* ptr, void* painter);
void QSvgRenderer_Render2(void* ptr, void* painter, void* bounds);
void QSvgRenderer_Render3(void* ptr, void* painter, char* elementId, void* bounds);
void QSvgRenderer_ConnectRepaintNeeded(void* ptr);
void QSvgRenderer_DisconnectRepaintNeeded(void* ptr);
void QSvgRenderer_RepaintNeeded(void* ptr);
void* QSvgRenderer_ViewBox(void* ptr);
void QSvgRenderer_DestroyQSvgRenderer(void* ptr);
void QSvgRenderer_TimerEvent(void* ptr, void* event);
void QSvgRenderer_TimerEventDefault(void* ptr, void* event);
void QSvgRenderer_ChildEvent(void* ptr, void* event);
void QSvgRenderer_ChildEventDefault(void* ptr, void* event);
void QSvgRenderer_CustomEvent(void* ptr, void* event);
void QSvgRenderer_CustomEventDefault(void* ptr, void* event);
void* QSvgWidget_NewQSvgWidget(void* parent);
void* QSvgWidget_NewQSvgWidget2(char* file, void* parent);
void QSvgWidget_Load2(void* ptr, void* contents);
void QSvgWidget_Load(void* ptr, char* file);
void QSvgWidget_PaintEvent(void* ptr, void* event);
void QSvgWidget_PaintEventDefault(void* ptr, void* event);
void* QSvgWidget_Renderer(void* ptr);
void* QSvgWidget_SizeHint(void* ptr);
void* QSvgWidget_SizeHintDefault(void* ptr);
void QSvgWidget_DestroyQSvgWidget(void* ptr);
void QSvgWidget_ActionEvent(void* ptr, void* event);
void QSvgWidget_ActionEventDefault(void* ptr, void* event);
void QSvgWidget_DragEnterEvent(void* ptr, void* event);
void QSvgWidget_DragEnterEventDefault(void* ptr, void* event);
void QSvgWidget_DragLeaveEvent(void* ptr, void* event);
void QSvgWidget_DragLeaveEventDefault(void* ptr, void* event);
void QSvgWidget_DragMoveEvent(void* ptr, void* event);
void QSvgWidget_DragMoveEventDefault(void* ptr, void* event);
void QSvgWidget_DropEvent(void* ptr, void* event);
void QSvgWidget_DropEventDefault(void* ptr, void* event);
void QSvgWidget_EnterEvent(void* ptr, void* event);
void QSvgWidget_EnterEventDefault(void* ptr, void* event);
void QSvgWidget_FocusInEvent(void* ptr, void* event);
void QSvgWidget_FocusInEventDefault(void* ptr, void* event);
void QSvgWidget_FocusOutEvent(void* ptr, void* event);
void QSvgWidget_FocusOutEventDefault(void* ptr, void* event);
void QSvgWidget_HideEvent(void* ptr, void* event);
void QSvgWidget_HideEventDefault(void* ptr, void* event);
void QSvgWidget_LeaveEvent(void* ptr, void* event);
void QSvgWidget_LeaveEventDefault(void* ptr, void* event);
void QSvgWidget_MoveEvent(void* ptr, void* event);
void QSvgWidget_MoveEventDefault(void* ptr, void* event);
void QSvgWidget_SetVisible(void* ptr, int visible);
void QSvgWidget_SetVisibleDefault(void* ptr, int visible);
void QSvgWidget_ShowEvent(void* ptr, void* event);
void QSvgWidget_ShowEventDefault(void* ptr, void* event);
void QSvgWidget_ChangeEvent(void* ptr, void* event);
void QSvgWidget_ChangeEventDefault(void* ptr, void* event);
void QSvgWidget_CloseEvent(void* ptr, void* event);
void QSvgWidget_CloseEventDefault(void* ptr, void* event);
void QSvgWidget_ContextMenuEvent(void* ptr, void* event);
void QSvgWidget_ContextMenuEventDefault(void* ptr, void* event);
void QSvgWidget_InitPainter(void* ptr, void* painter);
void QSvgWidget_InitPainterDefault(void* ptr, void* painter);
void QSvgWidget_InputMethodEvent(void* ptr, void* event);
void QSvgWidget_InputMethodEventDefault(void* ptr, void* event);
void QSvgWidget_KeyPressEvent(void* ptr, void* event);
void QSvgWidget_KeyPressEventDefault(void* ptr, void* event);
void QSvgWidget_KeyReleaseEvent(void* ptr, void* event);
void QSvgWidget_KeyReleaseEventDefault(void* ptr, void* event);
void QSvgWidget_MouseDoubleClickEvent(void* ptr, void* event);
void QSvgWidget_MouseDoubleClickEventDefault(void* ptr, void* event);
void QSvgWidget_MouseMoveEvent(void* ptr, void* event);
void QSvgWidget_MouseMoveEventDefault(void* ptr, void* event);
void QSvgWidget_MousePressEvent(void* ptr, void* event);
void QSvgWidget_MousePressEventDefault(void* ptr, void* event);
void QSvgWidget_MouseReleaseEvent(void* ptr, void* event);
void QSvgWidget_MouseReleaseEventDefault(void* ptr, void* event);
void QSvgWidget_ResizeEvent(void* ptr, void* event);
void QSvgWidget_ResizeEventDefault(void* ptr, void* event);
void QSvgWidget_TabletEvent(void* ptr, void* event);
void QSvgWidget_TabletEventDefault(void* ptr, void* event);
void QSvgWidget_WheelEvent(void* ptr, void* event);
void QSvgWidget_WheelEventDefault(void* ptr, void* event);
void QSvgWidget_TimerEvent(void* ptr, void* event);
void QSvgWidget_TimerEventDefault(void* ptr, void* event);
void QSvgWidget_ChildEvent(void* ptr, void* event);
void QSvgWidget_ChildEventDefault(void* ptr, void* event);
void QSvgWidget_CustomEvent(void* ptr, void* event);
void QSvgWidget_CustomEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif