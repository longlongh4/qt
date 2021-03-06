#pragma once

#ifndef GO_QTSENSORS_H
#define GO_QTSENSORS_H

#ifdef __cplusplus
extern "C" {
#endif

int QAccelerometer_AccelerationMode(void* ptr);
void* QAccelerometer_Reading(void* ptr);
void* QAccelerometer_NewQAccelerometer(void* parent);
void QAccelerometer_ConnectAccelerationModeChanged(void* ptr);
void QAccelerometer_DisconnectAccelerationModeChanged(void* ptr);
void QAccelerometer_AccelerationModeChanged(void* ptr, int accelerationMode);
void QAccelerometer_SetAccelerationMode(void* ptr, int accelerationMode);
void QAccelerometer_DestroyQAccelerometer(void* ptr);
void QAccelerometer_TimerEvent(void* ptr, void* event);
void QAccelerometer_TimerEventDefault(void* ptr, void* event);
void QAccelerometer_ChildEvent(void* ptr, void* event);
void QAccelerometer_ChildEventDefault(void* ptr, void* event);
void QAccelerometer_CustomEvent(void* ptr, void* event);
void QAccelerometer_CustomEventDefault(void* ptr, void* event);
int QAccelerometerFilter_Filter(void* ptr, void* reading);
double QAccelerometerReading_X(void* ptr);
double QAccelerometerReading_Y(void* ptr);
double QAccelerometerReading_Z(void* ptr);
void QAccelerometerReading_SetX(void* ptr, double x);
void QAccelerometerReading_SetY(void* ptr, double y);
void QAccelerometerReading_SetZ(void* ptr, double z);
void QAccelerometerReading_TimerEvent(void* ptr, void* event);
void QAccelerometerReading_TimerEventDefault(void* ptr, void* event);
void QAccelerometerReading_ChildEvent(void* ptr, void* event);
void QAccelerometerReading_ChildEventDefault(void* ptr, void* event);
void QAccelerometerReading_CustomEvent(void* ptr, void* event);
void QAccelerometerReading_CustomEventDefault(void* ptr, void* event);
void* QAltimeter_Reading(void* ptr);
void* QAltimeter_NewQAltimeter(void* parent);
void QAltimeter_DestroyQAltimeter(void* ptr);
void QAltimeter_TimerEvent(void* ptr, void* event);
void QAltimeter_TimerEventDefault(void* ptr, void* event);
void QAltimeter_ChildEvent(void* ptr, void* event);
void QAltimeter_ChildEventDefault(void* ptr, void* event);
void QAltimeter_CustomEvent(void* ptr, void* event);
void QAltimeter_CustomEventDefault(void* ptr, void* event);
int QAltimeterFilter_Filter(void* ptr, void* reading);
double QAltimeterReading_Altitude(void* ptr);
void QAltimeterReading_SetAltitude(void* ptr, double altitude);
void QAltimeterReading_TimerEvent(void* ptr, void* event);
void QAltimeterReading_TimerEventDefault(void* ptr, void* event);
void QAltimeterReading_ChildEvent(void* ptr, void* event);
void QAltimeterReading_ChildEventDefault(void* ptr, void* event);
void QAltimeterReading_CustomEvent(void* ptr, void* event);
void QAltimeterReading_CustomEventDefault(void* ptr, void* event);
int QAmbientLightFilter_Filter(void* ptr, void* reading);
int QAmbientLightReading_LightLevel(void* ptr);
void QAmbientLightReading_SetLightLevel(void* ptr, int lightLevel);
void QAmbientLightReading_TimerEvent(void* ptr, void* event);
void QAmbientLightReading_TimerEventDefault(void* ptr, void* event);
void QAmbientLightReading_ChildEvent(void* ptr, void* event);
void QAmbientLightReading_ChildEventDefault(void* ptr, void* event);
void QAmbientLightReading_CustomEvent(void* ptr, void* event);
void QAmbientLightReading_CustomEventDefault(void* ptr, void* event);
void* QAmbientLightSensor_Reading(void* ptr);
void* QAmbientLightSensor_NewQAmbientLightSensor(void* parent);
void QAmbientLightSensor_DestroyQAmbientLightSensor(void* ptr);
void QAmbientLightSensor_TimerEvent(void* ptr, void* event);
void QAmbientLightSensor_TimerEventDefault(void* ptr, void* event);
void QAmbientLightSensor_ChildEvent(void* ptr, void* event);
void QAmbientLightSensor_ChildEventDefault(void* ptr, void* event);
void QAmbientLightSensor_CustomEvent(void* ptr, void* event);
void QAmbientLightSensor_CustomEventDefault(void* ptr, void* event);
int QAmbientTemperatureFilter_Filter(void* ptr, void* reading);
double QAmbientTemperatureReading_Temperature(void* ptr);
void QAmbientTemperatureReading_SetTemperature(void* ptr, double temperature);
void QAmbientTemperatureReading_TimerEvent(void* ptr, void* event);
void QAmbientTemperatureReading_TimerEventDefault(void* ptr, void* event);
void QAmbientTemperatureReading_ChildEvent(void* ptr, void* event);
void QAmbientTemperatureReading_ChildEventDefault(void* ptr, void* event);
void QAmbientTemperatureReading_CustomEvent(void* ptr, void* event);
void QAmbientTemperatureReading_CustomEventDefault(void* ptr, void* event);
void* QAmbientTemperatureSensor_Reading(void* ptr);
void* QAmbientTemperatureSensor_NewQAmbientTemperatureSensor(void* parent);
void QAmbientTemperatureSensor_DestroyQAmbientTemperatureSensor(void* ptr);
void QAmbientTemperatureSensor_TimerEvent(void* ptr, void* event);
void QAmbientTemperatureSensor_TimerEventDefault(void* ptr, void* event);
void QAmbientTemperatureSensor_ChildEvent(void* ptr, void* event);
void QAmbientTemperatureSensor_ChildEventDefault(void* ptr, void* event);
void QAmbientTemperatureSensor_CustomEvent(void* ptr, void* event);
void QAmbientTemperatureSensor_CustomEventDefault(void* ptr, void* event);
void* QCompass_Reading(void* ptr);
void* QCompass_NewQCompass(void* parent);
void QCompass_DestroyQCompass(void* ptr);
void QCompass_TimerEvent(void* ptr, void* event);
void QCompass_TimerEventDefault(void* ptr, void* event);
void QCompass_ChildEvent(void* ptr, void* event);
void QCompass_ChildEventDefault(void* ptr, void* event);
void QCompass_CustomEvent(void* ptr, void* event);
void QCompass_CustomEventDefault(void* ptr, void* event);
int QCompassFilter_Filter(void* ptr, void* reading);
double QCompassReading_Azimuth(void* ptr);
double QCompassReading_CalibrationLevel(void* ptr);
void QCompassReading_SetAzimuth(void* ptr, double azimuth);
void QCompassReading_SetCalibrationLevel(void* ptr, double calibrationLevel);
void QCompassReading_TimerEvent(void* ptr, void* event);
void QCompassReading_TimerEventDefault(void* ptr, void* event);
void QCompassReading_ChildEvent(void* ptr, void* event);
void QCompassReading_ChildEventDefault(void* ptr, void* event);
void QCompassReading_CustomEvent(void* ptr, void* event);
void QCompassReading_CustomEventDefault(void* ptr, void* event);
int QDistanceFilter_Filter(void* ptr, void* reading);
double QDistanceReading_Distance(void* ptr);
void QDistanceReading_SetDistance(void* ptr, double distance);
void QDistanceReading_TimerEvent(void* ptr, void* event);
void QDistanceReading_TimerEventDefault(void* ptr, void* event);
void QDistanceReading_ChildEvent(void* ptr, void* event);
void QDistanceReading_ChildEventDefault(void* ptr, void* event);
void QDistanceReading_CustomEvent(void* ptr, void* event);
void QDistanceReading_CustomEventDefault(void* ptr, void* event);
void* QDistanceSensor_Reading(void* ptr);
void* QDistanceSensor_NewQDistanceSensor(void* parent);
void QDistanceSensor_DestroyQDistanceSensor(void* ptr);
void QDistanceSensor_TimerEvent(void* ptr, void* event);
void QDistanceSensor_TimerEventDefault(void* ptr, void* event);
void QDistanceSensor_ChildEvent(void* ptr, void* event);
void QDistanceSensor_ChildEventDefault(void* ptr, void* event);
void QDistanceSensor_CustomEvent(void* ptr, void* event);
void QDistanceSensor_CustomEventDefault(void* ptr, void* event);
void* QGyroscope_Reading(void* ptr);
void* QGyroscope_NewQGyroscope(void* parent);
void QGyroscope_DestroyQGyroscope(void* ptr);
void QGyroscope_TimerEvent(void* ptr, void* event);
void QGyroscope_TimerEventDefault(void* ptr, void* event);
void QGyroscope_ChildEvent(void* ptr, void* event);
void QGyroscope_ChildEventDefault(void* ptr, void* event);
void QGyroscope_CustomEvent(void* ptr, void* event);
void QGyroscope_CustomEventDefault(void* ptr, void* event);
int QGyroscopeFilter_Filter(void* ptr, void* reading);
double QGyroscopeReading_X(void* ptr);
double QGyroscopeReading_Y(void* ptr);
double QGyroscopeReading_Z(void* ptr);
void QGyroscopeReading_SetX(void* ptr, double x);
void QGyroscopeReading_SetY(void* ptr, double y);
void QGyroscopeReading_SetZ(void* ptr, double z);
void QGyroscopeReading_TimerEvent(void* ptr, void* event);
void QGyroscopeReading_TimerEventDefault(void* ptr, void* event);
void QGyroscopeReading_ChildEvent(void* ptr, void* event);
void QGyroscopeReading_ChildEventDefault(void* ptr, void* event);
void QGyroscopeReading_CustomEvent(void* ptr, void* event);
void QGyroscopeReading_CustomEventDefault(void* ptr, void* event);
int QHolsterFilter_Filter(void* ptr, void* reading);
int QHolsterReading_Holstered(void* ptr);
void QHolsterReading_SetHolstered(void* ptr, int holstered);
void QHolsterReading_TimerEvent(void* ptr, void* event);
void QHolsterReading_TimerEventDefault(void* ptr, void* event);
void QHolsterReading_ChildEvent(void* ptr, void* event);
void QHolsterReading_ChildEventDefault(void* ptr, void* event);
void QHolsterReading_CustomEvent(void* ptr, void* event);
void QHolsterReading_CustomEventDefault(void* ptr, void* event);
void* QHolsterSensor_Reading(void* ptr);
void* QHolsterSensor_NewQHolsterSensor(void* parent);
void QHolsterSensor_DestroyQHolsterSensor(void* ptr);
void QHolsterSensor_TimerEvent(void* ptr, void* event);
void QHolsterSensor_TimerEventDefault(void* ptr, void* event);
void QHolsterSensor_ChildEvent(void* ptr, void* event);
void QHolsterSensor_ChildEventDefault(void* ptr, void* event);
void QHolsterSensor_CustomEvent(void* ptr, void* event);
void QHolsterSensor_CustomEventDefault(void* ptr, void* event);
int QIRProximityFilter_Filter(void* ptr, void* reading);
double QIRProximityReading_Reflectance(void* ptr);
void QIRProximityReading_SetReflectance(void* ptr, double reflectance);
void QIRProximityReading_TimerEvent(void* ptr, void* event);
void QIRProximityReading_TimerEventDefault(void* ptr, void* event);
void QIRProximityReading_ChildEvent(void* ptr, void* event);
void QIRProximityReading_ChildEventDefault(void* ptr, void* event);
void QIRProximityReading_CustomEvent(void* ptr, void* event);
void QIRProximityReading_CustomEventDefault(void* ptr, void* event);
void* QIRProximitySensor_Reading(void* ptr);
void* QIRProximitySensor_NewQIRProximitySensor(void* parent);
void QIRProximitySensor_DestroyQIRProximitySensor(void* ptr);
void QIRProximitySensor_TimerEvent(void* ptr, void* event);
void QIRProximitySensor_TimerEventDefault(void* ptr, void* event);
void QIRProximitySensor_ChildEvent(void* ptr, void* event);
void QIRProximitySensor_ChildEventDefault(void* ptr, void* event);
void QIRProximitySensor_CustomEvent(void* ptr, void* event);
void QIRProximitySensor_CustomEventDefault(void* ptr, void* event);
int QLightFilter_Filter(void* ptr, void* reading);
double QLightReading_Lux(void* ptr);
void QLightReading_SetLux(void* ptr, double lux);
void QLightReading_TimerEvent(void* ptr, void* event);
void QLightReading_TimerEventDefault(void* ptr, void* event);
void QLightReading_ChildEvent(void* ptr, void* event);
void QLightReading_ChildEventDefault(void* ptr, void* event);
void QLightReading_CustomEvent(void* ptr, void* event);
void QLightReading_CustomEventDefault(void* ptr, void* event);
double QLightSensor_FieldOfView(void* ptr);
void* QLightSensor_Reading(void* ptr);
void* QLightSensor_NewQLightSensor(void* parent);
void QLightSensor_ConnectFieldOfViewChanged(void* ptr);
void QLightSensor_DisconnectFieldOfViewChanged(void* ptr);
void QLightSensor_FieldOfViewChanged(void* ptr, double fieldOfView);
void QLightSensor_SetFieldOfView(void* ptr, double fieldOfView);
void QLightSensor_DestroyQLightSensor(void* ptr);
void QLightSensor_TimerEvent(void* ptr, void* event);
void QLightSensor_TimerEventDefault(void* ptr, void* event);
void QLightSensor_ChildEvent(void* ptr, void* event);
void QLightSensor_ChildEventDefault(void* ptr, void* event);
void QLightSensor_CustomEvent(void* ptr, void* event);
void QLightSensor_CustomEventDefault(void* ptr, void* event);
void* QMagnetometer_Reading(void* ptr);
int QMagnetometer_ReturnGeoValues(void* ptr);
void QMagnetometer_SetReturnGeoValues(void* ptr, int returnGeoValues);
void* QMagnetometer_NewQMagnetometer(void* parent);
void QMagnetometer_ConnectReturnGeoValuesChanged(void* ptr);
void QMagnetometer_DisconnectReturnGeoValuesChanged(void* ptr);
void QMagnetometer_ReturnGeoValuesChanged(void* ptr, int returnGeoValues);
void QMagnetometer_DestroyQMagnetometer(void* ptr);
void QMagnetometer_TimerEvent(void* ptr, void* event);
void QMagnetometer_TimerEventDefault(void* ptr, void* event);
void QMagnetometer_ChildEvent(void* ptr, void* event);
void QMagnetometer_ChildEventDefault(void* ptr, void* event);
void QMagnetometer_CustomEvent(void* ptr, void* event);
void QMagnetometer_CustomEventDefault(void* ptr, void* event);
int QMagnetometerFilter_Filter(void* ptr, void* reading);
double QMagnetometerReading_CalibrationLevel(void* ptr);
double QMagnetometerReading_X(void* ptr);
double QMagnetometerReading_Y(void* ptr);
double QMagnetometerReading_Z(void* ptr);
void QMagnetometerReading_SetCalibrationLevel(void* ptr, double calibrationLevel);
void QMagnetometerReading_SetX(void* ptr, double x);
void QMagnetometerReading_SetY(void* ptr, double y);
void QMagnetometerReading_SetZ(void* ptr, double z);
void QMagnetometerReading_TimerEvent(void* ptr, void* event);
void QMagnetometerReading_TimerEventDefault(void* ptr, void* event);
void QMagnetometerReading_ChildEvent(void* ptr, void* event);
void QMagnetometerReading_ChildEventDefault(void* ptr, void* event);
void QMagnetometerReading_CustomEvent(void* ptr, void* event);
void QMagnetometerReading_CustomEventDefault(void* ptr, void* event);
int QOrientationFilter_Filter(void* ptr, void* reading);
int QOrientationReading_Orientation(void* ptr);
void QOrientationReading_SetOrientation(void* ptr, int orientation);
void QOrientationReading_TimerEvent(void* ptr, void* event);
void QOrientationReading_TimerEventDefault(void* ptr, void* event);
void QOrientationReading_ChildEvent(void* ptr, void* event);
void QOrientationReading_ChildEventDefault(void* ptr, void* event);
void QOrientationReading_CustomEvent(void* ptr, void* event);
void QOrientationReading_CustomEventDefault(void* ptr, void* event);
void* QOrientationSensor_Reading(void* ptr);
void* QOrientationSensor_NewQOrientationSensor(void* parent);
void QOrientationSensor_DestroyQOrientationSensor(void* ptr);
void QOrientationSensor_TimerEvent(void* ptr, void* event);
void QOrientationSensor_TimerEventDefault(void* ptr, void* event);
void QOrientationSensor_ChildEvent(void* ptr, void* event);
void QOrientationSensor_ChildEventDefault(void* ptr, void* event);
void QOrientationSensor_CustomEvent(void* ptr, void* event);
void QOrientationSensor_CustomEventDefault(void* ptr, void* event);
int QPressureFilter_Filter(void* ptr, void* reading);
double QPressureReading_Pressure(void* ptr);
double QPressureReading_Temperature(void* ptr);
void QPressureReading_SetPressure(void* ptr, double pressure);
void QPressureReading_SetTemperature(void* ptr, double temperature);
void QPressureReading_TimerEvent(void* ptr, void* event);
void QPressureReading_TimerEventDefault(void* ptr, void* event);
void QPressureReading_ChildEvent(void* ptr, void* event);
void QPressureReading_ChildEventDefault(void* ptr, void* event);
void QPressureReading_CustomEvent(void* ptr, void* event);
void QPressureReading_CustomEventDefault(void* ptr, void* event);
void* QPressureSensor_Reading(void* ptr);
void* QPressureSensor_NewQPressureSensor(void* parent);
void QPressureSensor_DestroyQPressureSensor(void* ptr);
void QPressureSensor_TimerEvent(void* ptr, void* event);
void QPressureSensor_TimerEventDefault(void* ptr, void* event);
void QPressureSensor_ChildEvent(void* ptr, void* event);
void QPressureSensor_ChildEventDefault(void* ptr, void* event);
void QPressureSensor_CustomEvent(void* ptr, void* event);
void QPressureSensor_CustomEventDefault(void* ptr, void* event);
int QProximityFilter_Filter(void* ptr, void* reading);
int QProximityReading_Close(void* ptr);
void QProximityReading_SetClose(void* ptr, int close);
void QProximityReading_TimerEvent(void* ptr, void* event);
void QProximityReading_TimerEventDefault(void* ptr, void* event);
void QProximityReading_ChildEvent(void* ptr, void* event);
void QProximityReading_ChildEventDefault(void* ptr, void* event);
void QProximityReading_CustomEvent(void* ptr, void* event);
void QProximityReading_CustomEventDefault(void* ptr, void* event);
void* QProximitySensor_Reading(void* ptr);
void* QProximitySensor_NewQProximitySensor(void* parent);
void QProximitySensor_DestroyQProximitySensor(void* ptr);
void QProximitySensor_TimerEvent(void* ptr, void* event);
void QProximitySensor_TimerEventDefault(void* ptr, void* event);
void QProximitySensor_ChildEvent(void* ptr, void* event);
void QProximitySensor_ChildEventDefault(void* ptr, void* event);
void QProximitySensor_CustomEvent(void* ptr, void* event);
void QProximitySensor_CustomEventDefault(void* ptr, void* event);
int QRotationFilter_Filter(void* ptr, void* reading);
double QRotationReading_X(void* ptr);
double QRotationReading_Y(void* ptr);
double QRotationReading_Z(void* ptr);
void QRotationReading_SetFromEuler(void* ptr, double x, double y, double z);
void QRotationReading_TimerEvent(void* ptr, void* event);
void QRotationReading_TimerEventDefault(void* ptr, void* event);
void QRotationReading_ChildEvent(void* ptr, void* event);
void QRotationReading_ChildEventDefault(void* ptr, void* event);
void QRotationReading_CustomEvent(void* ptr, void* event);
void QRotationReading_CustomEventDefault(void* ptr, void* event);
int QRotationSensor_HasZ(void* ptr);
void* QRotationSensor_Reading(void* ptr);
void* QRotationSensor_NewQRotationSensor(void* parent);
void QRotationSensor_ConnectHasZChanged(void* ptr);
void QRotationSensor_DisconnectHasZChanged(void* ptr);
void QRotationSensor_HasZChanged(void* ptr, int hasZ);
void QRotationSensor_SetHasZ(void* ptr, int hasZ);
void QRotationSensor_DestroyQRotationSensor(void* ptr);
void QRotationSensor_TimerEvent(void* ptr, void* event);
void QRotationSensor_TimerEventDefault(void* ptr, void* event);
void QRotationSensor_ChildEvent(void* ptr, void* event);
void QRotationSensor_ChildEventDefault(void* ptr, void* event);
void QRotationSensor_CustomEvent(void* ptr, void* event);
void QRotationSensor_CustomEventDefault(void* ptr, void* event);
int QSensor_AxesOrientationMode(void* ptr);
int QSensor_BufferSize(void* ptr);
int QSensor_CurrentOrientation(void* ptr);
int QSensor_DataRate(void* ptr);
char* QSensor_Description(void* ptr);
int QSensor_EfficientBufferSize(void* ptr);
int QSensor_Error(void* ptr);
void* QSensor_Identifier(void* ptr);
int QSensor_IsActive(void* ptr);
int QSensor_IsAlwaysOn(void* ptr);
int QSensor_IsBusy(void* ptr);
int QSensor_IsConnectedToBackend(void* ptr);
int QSensor_MaxBufferSize(void* ptr);
int QSensor_OutputRange(void* ptr);
void* QSensor_Reading(void* ptr);
void QSensor_SetActive(void* ptr, int active);
void QSensor_SetAlwaysOn(void* ptr, int alwaysOn);
void QSensor_SetAxesOrientationMode(void* ptr, int axesOrientationMode);
void QSensor_SetBufferSize(void* ptr, int bufferSize);
void QSensor_SetDataRate(void* ptr, int rate);
void QSensor_SetIdentifier(void* ptr, void* identifier);
void QSensor_SetOutputRange(void* ptr, int index);
void QSensor_SetUserOrientation(void* ptr, int userOrientation);
int QSensor_SkipDuplicates(void* ptr);
void* QSensor_Type(void* ptr);
int QSensor_UserOrientation(void* ptr);
void* QSensor_NewQSensor(void* ty, void* parent);
void QSensor_ConnectActiveChanged(void* ptr);
void QSensor_DisconnectActiveChanged(void* ptr);
void QSensor_ActiveChanged(void* ptr);
void QSensor_AddFilter(void* ptr, void* filter);
void QSensor_ConnectAlwaysOnChanged(void* ptr);
void QSensor_DisconnectAlwaysOnChanged(void* ptr);
void QSensor_AlwaysOnChanged(void* ptr);
void QSensor_ConnectAvailableSensorsChanged(void* ptr);
void QSensor_DisconnectAvailableSensorsChanged(void* ptr);
void QSensor_AvailableSensorsChanged(void* ptr);
void QSensor_ConnectAxesOrientationModeChanged(void* ptr);
void QSensor_DisconnectAxesOrientationModeChanged(void* ptr);
void QSensor_AxesOrientationModeChanged(void* ptr, int axesOrientationMode);
void QSensor_ConnectBufferSizeChanged(void* ptr);
void QSensor_DisconnectBufferSizeChanged(void* ptr);
void QSensor_BufferSizeChanged(void* ptr, int bufferSize);
void QSensor_ConnectBusyChanged(void* ptr);
void QSensor_DisconnectBusyChanged(void* ptr);
void QSensor_BusyChanged(void* ptr);
int QSensor_ConnectToBackend(void* ptr);
void QSensor_ConnectCurrentOrientationChanged(void* ptr);
void QSensor_DisconnectCurrentOrientationChanged(void* ptr);
void QSensor_CurrentOrientationChanged(void* ptr, int currentOrientation);
void QSensor_ConnectDataRateChanged(void* ptr);
void QSensor_DisconnectDataRateChanged(void* ptr);
void QSensor_DataRateChanged(void* ptr);
void* QSensor_QSensor_DefaultSensorForType(void* ty);
void QSensor_ConnectEfficientBufferSizeChanged(void* ptr);
void QSensor_DisconnectEfficientBufferSizeChanged(void* ptr);
void QSensor_EfficientBufferSizeChanged(void* ptr, int efficientBufferSize);
int QSensor_IsFeatureSupported(void* ptr, int feature);
void QSensor_ConnectMaxBufferSizeChanged(void* ptr);
void QSensor_DisconnectMaxBufferSizeChanged(void* ptr);
void QSensor_MaxBufferSizeChanged(void* ptr, int maxBufferSize);
void QSensor_ConnectReadingChanged(void* ptr);
void QSensor_DisconnectReadingChanged(void* ptr);
void QSensor_ReadingChanged(void* ptr);
void QSensor_RemoveFilter(void* ptr, void* filter);
void QSensor_ConnectSensorError(void* ptr);
void QSensor_DisconnectSensorError(void* ptr);
void QSensor_SensorError(void* ptr, int error);
void QSensor_SetCurrentOrientation(void* ptr, int currentOrientation);
void QSensor_SetEfficientBufferSize(void* ptr, int efficientBufferSize);
void QSensor_SetMaxBufferSize(void* ptr, int maxBufferSize);
void QSensor_SetSkipDuplicates(void* ptr, int skipDuplicates);
void QSensor_ConnectSkipDuplicatesChanged(void* ptr);
void QSensor_DisconnectSkipDuplicatesChanged(void* ptr);
void QSensor_SkipDuplicatesChanged(void* ptr, int skipDuplicates);
int QSensor_Start(void* ptr);
void QSensor_Stop(void* ptr);
void QSensor_ConnectUserOrientationChanged(void* ptr);
void QSensor_DisconnectUserOrientationChanged(void* ptr);
void QSensor_UserOrientationChanged(void* ptr, int userOrientation);
void QSensor_DestroyQSensor(void* ptr);
void QSensor_TimerEvent(void* ptr, void* event);
void QSensor_TimerEventDefault(void* ptr, void* event);
void QSensor_ChildEvent(void* ptr, void* event);
void QSensor_ChildEventDefault(void* ptr, void* event);
void QSensor_CustomEvent(void* ptr, void* event);
void QSensor_CustomEventDefault(void* ptr, void* event);
void QSensorBackend_AddDataRate(void* ptr, double min, double max);
int QSensorBackend_IsFeatureSupported(void* ptr, int feature);
int QSensorBackend_IsFeatureSupportedDefault(void* ptr, int feature);
void QSensorBackend_SensorBusy(void* ptr);
void QSensorBackend_SensorError(void* ptr, int error);
void QSensorBackend_AddOutputRange(void* ptr, double min, double max, double accuracy);
void QSensorBackend_NewReadingAvailable(void* ptr);
void* QSensorBackend_Reading(void* ptr);
void* QSensorBackend_Sensor(void* ptr);
void QSensorBackend_SensorStopped(void* ptr);
void QSensorBackend_SetDataRates(void* ptr, void* otherSensor);
void QSensorBackend_SetDescription(void* ptr, char* description);
void QSensorBackend_Start(void* ptr);
void QSensorBackend_Stop(void* ptr);
void QSensorBackend_TimerEvent(void* ptr, void* event);
void QSensorBackend_TimerEventDefault(void* ptr, void* event);
void QSensorBackend_ChildEvent(void* ptr, void* event);
void QSensorBackend_ChildEventDefault(void* ptr, void* event);
void QSensorBackend_CustomEvent(void* ptr, void* event);
void QSensorBackend_CustomEventDefault(void* ptr, void* event);
void* QSensorBackendFactory_CreateBackend(void* ptr, void* sensor);
void QSensorChangesInterface_SensorsChanged(void* ptr);
int QSensorFilter_Filter(void* ptr, void* reading);
void QSensorFilter_DestroyQSensorFilter(void* ptr);
char* QSensorFilter_ObjectNameAbs(void* ptr);
void QSensorFilter_SetObjectNameAbs(void* ptr, char* name);
void* QSensorGesture_NewQSensorGesture(char* ids, void* parent);
char* QSensorGesture_GestureSignals(void* ptr);
char* QSensorGesture_InvalidIds(void* ptr);
int QSensorGesture_IsActive(void* ptr);
void QSensorGesture_StartDetection(void* ptr);
void QSensorGesture_StopDetection(void* ptr);
char* QSensorGesture_ValidIds(void* ptr);
void QSensorGesture_DestroyQSensorGesture(void* ptr);
void QSensorGesture_TimerEvent(void* ptr, void* event);
void QSensorGesture_TimerEventDefault(void* ptr, void* event);
void QSensorGesture_ChildEvent(void* ptr, void* event);
void QSensorGesture_ChildEventDefault(void* ptr, void* event);
void QSensorGesture_CustomEvent(void* ptr, void* event);
void QSensorGesture_CustomEventDefault(void* ptr, void* event);
void* QSensorGestureManager_NewQSensorGestureManager(void* parent);
char* QSensorGestureManager_GestureIds(void* ptr);
void QSensorGestureManager_ConnectNewSensorGestureAvailable(void* ptr);
void QSensorGestureManager_DisconnectNewSensorGestureAvailable(void* ptr);
void QSensorGestureManager_NewSensorGestureAvailable(void* ptr);
char* QSensorGestureManager_RecognizerSignals(void* ptr, char* gestureId);
int QSensorGestureManager_RegisterSensorGestureRecognizer(void* ptr, void* recognizer);
void* QSensorGestureManager_QSensorGestureManager_SensorGestureRecognizer(char* id);
void QSensorGestureManager_DestroyQSensorGestureManager(void* ptr);
void QSensorGestureManager_TimerEvent(void* ptr, void* event);
void QSensorGestureManager_TimerEventDefault(void* ptr, void* event);
void QSensorGestureManager_ChildEvent(void* ptr, void* event);
void QSensorGestureManager_ChildEventDefault(void* ptr, void* event);
void QSensorGestureManager_CustomEvent(void* ptr, void* event);
void QSensorGestureManager_CustomEventDefault(void* ptr, void* event);
char* QSensorGesturePluginInterface_Name(void* ptr);
char* QSensorGesturePluginInterface_SupportedIds(void* ptr);
void QSensorGesturePluginInterface_DestroyQSensorGesturePluginInterface(void* ptr);
char* QSensorGesturePluginInterface_ObjectNameAbs(void* ptr);
void QSensorGesturePluginInterface_SetObjectNameAbs(void* ptr, char* name);
void QSensorGestureRecognizer_CreateBackend(void* ptr);
char* QSensorGestureRecognizer_GestureSignals(void* ptr);
char* QSensorGestureRecognizer_Id(void* ptr);
int QSensorGestureRecognizer_IsActive(void* ptr);
void QSensorGestureRecognizer_StartBackend(void* ptr);
void QSensorGestureRecognizer_StopBackend(void* ptr);
void QSensorGestureRecognizer_DestroyQSensorGestureRecognizer(void* ptr);
void QSensorGestureRecognizer_TimerEvent(void* ptr, void* event);
void QSensorGestureRecognizer_TimerEventDefault(void* ptr, void* event);
void QSensorGestureRecognizer_ChildEvent(void* ptr, void* event);
void QSensorGestureRecognizer_ChildEventDefault(void* ptr, void* event);
void QSensorGestureRecognizer_CustomEvent(void* ptr, void* event);
void QSensorGestureRecognizer_CustomEventDefault(void* ptr, void* event);
void* QSensorManager_QSensorManager_CreateBackend(void* sensor);
int QSensorManager_QSensorManager_IsBackendRegistered(void* ty, void* identifier);
void QSensorManager_QSensorManager_RegisterBackend(void* ty, void* identifier, void* factory);
void QSensorManager_QSensorManager_SetDefaultBackend(void* ty, void* identifier);
void QSensorManager_QSensorManager_UnregisterBackend(void* ty, void* identifier);
void QSensorPluginInterface_RegisterSensors(void* ptr);
void* QSensorReading_Value(void* ptr, int index);
int QSensorReading_ValueCount(void* ptr);
void QSensorReading_TimerEvent(void* ptr, void* event);
void QSensorReading_TimerEventDefault(void* ptr, void* event);
void QSensorReading_ChildEvent(void* ptr, void* event);
void QSensorReading_ChildEventDefault(void* ptr, void* event);
void QSensorReading_CustomEvent(void* ptr, void* event);
void QSensorReading_CustomEventDefault(void* ptr, void* event);
int QTapFilter_Filter(void* ptr, void* reading);
int QTapReading_IsDoubleTap(void* ptr);
int QTapReading_TapDirection(void* ptr);
void QTapReading_SetDoubleTap(void* ptr, int doubleTap);
void QTapReading_SetTapDirection(void* ptr, int tapDirection);
void QTapReading_TimerEvent(void* ptr, void* event);
void QTapReading_TimerEventDefault(void* ptr, void* event);
void QTapReading_ChildEvent(void* ptr, void* event);
void QTapReading_ChildEventDefault(void* ptr, void* event);
void QTapReading_CustomEvent(void* ptr, void* event);
void QTapReading_CustomEventDefault(void* ptr, void* event);
void* QTapSensor_Reading(void* ptr);
int QTapSensor_ReturnDoubleTapEvents(void* ptr);
void QTapSensor_SetReturnDoubleTapEvents(void* ptr, int returnDoubleTapEvents);
void* QTapSensor_NewQTapSensor(void* parent);
void QTapSensor_ConnectReturnDoubleTapEventsChanged(void* ptr);
void QTapSensor_DisconnectReturnDoubleTapEventsChanged(void* ptr);
void QTapSensor_ReturnDoubleTapEventsChanged(void* ptr, int returnDoubleTapEvents);
void QTapSensor_DestroyQTapSensor(void* ptr);
void QTapSensor_TimerEvent(void* ptr, void* event);
void QTapSensor_TimerEventDefault(void* ptr, void* event);
void QTapSensor_ChildEvent(void* ptr, void* event);
void QTapSensor_ChildEventDefault(void* ptr, void* event);
void QTapSensor_CustomEvent(void* ptr, void* event);
void QTapSensor_CustomEventDefault(void* ptr, void* event);
int QTiltFilter_Filter(void* ptr, void* reading);
double QTiltReading_XRotation(void* ptr);
double QTiltReading_YRotation(void* ptr);
void QTiltReading_SetXRotation(void* ptr, double x);
void QTiltReading_SetYRotation(void* ptr, double y);
void QTiltReading_TimerEvent(void* ptr, void* event);
void QTiltReading_TimerEventDefault(void* ptr, void* event);
void QTiltReading_ChildEvent(void* ptr, void* event);
void QTiltReading_ChildEventDefault(void* ptr, void* event);
void QTiltReading_CustomEvent(void* ptr, void* event);
void QTiltReading_CustomEventDefault(void* ptr, void* event);
void* QTiltSensor_NewQTiltSensor(void* parent);
void* QTiltSensor_Reading(void* ptr);
void QTiltSensor_DestroyQTiltSensor(void* ptr);
void QTiltSensor_Calibrate(void* ptr);
void QTiltSensor_TimerEvent(void* ptr, void* event);
void QTiltSensor_TimerEventDefault(void* ptr, void* event);
void QTiltSensor_ChildEvent(void* ptr, void* event);
void QTiltSensor_ChildEventDefault(void* ptr, void* event);
void QTiltSensor_CustomEvent(void* ptr, void* event);
void QTiltSensor_CustomEventDefault(void* ptr, void* event);

#ifdef __cplusplus
}
#endif

#endif