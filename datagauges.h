#ifndef DATAGAUGES_H
#define DATAGAUGES_H

#include <QWidget>
#include "ui_datagauges.h"
#include "gaugewidget.h"
#include "datapacketdecoder.h"
class DataGauges : public QWidget
{
	Q_OBJECT

public:
	explicit DataGauges(QWidget *parent = 0);
	~DataGauges();
	void passData(QVariantMap data);
	void passDecoder(DataPacketDecoder *decoder);
private:
	QTimer *guiUpdateTimer;
	DataPacketDecoder *dataPacketDecoder;
	QVariantMap m_valueMap;
	Ui::DataGauges ui;
	GaugeWidget *widget;
private slots:
	void guiUpdateTimerTick();
};

#endif // DATAGAUGES_H