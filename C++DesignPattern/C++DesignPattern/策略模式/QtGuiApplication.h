#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtGuiApplication.h"
#include <QStringListModel>

class QtGuiApplication : public QMainWindow
{
	Q_OBJECT

public:
	QtGuiApplication(QWidget *parent = Q_NULLPTR);

private:
	Ui::QtGuiApplicationClass ui;
	QStringList ItemsList;
	QStringListModel *model = NULL;
	
private slots:
	void Reset();
	void OK();
};
