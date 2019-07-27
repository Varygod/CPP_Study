#include "QtGuiApplication.h"
#include "CashContext.h"
#include "CashNormal.h"
#include "CashReturn.h"
#include "CashRebate.h"
#include <QStringListModel>
#pragma execution_character_set("utf-8")
 static double total = 0.0;//�����ܼ�
QtGuiApplication::QtGuiApplication(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	connect(ui.pushButton_OK, SIGNAL(clicked()), this, SLOT(OK()));
	connect(ui.pushButton_Reset, SIGNAL(clicked()), this, SLOT(Reset()));
}



/**
  *  @brief  ���QListView�Լ������ؼ�������
  *  @param[in]   void
  *  @param[out]  void
  *  @Return:     void
  *  - TRUE
  *  - FALSE
  *  @note   matters needing attention
  *  @see    other functions   
**/
void QtGuiApplication::Reset()
{
	total = 0.0;
	ui.lineEdit_Price->setText("0.00");
	ui.lineEdit_Count->setText("1");
	ItemsList.clear();
	if (model!=NULL)
	{
		model->removeRows(0, model->rowCount());
	}
	
	ui.comboBox_CalcMethod->setCurrentIndex(0);
	ui.label_Total->setText("0.00");
}

void QtGuiApplication::OK()
{
	CashContext *cc = NULL;
	QString qString = QString::null;
	double totalPrices = 0.0;
	switch (ui.comboBox_CalcMethod->currentIndex())
	{
	case 0:
		cc = new CashContext(new CashNormal());
		qString = "�������շѡ�";
		break;
	case 1:
		cc = new CashContext(new CashReturn("300", "100"));
		qString = "����300��100��";
		break;
	case 2:
		cc = new CashContext(new CashRebate("0.8"));
		qString = "������ۡ�";
		break;
	}

	model = new QStringListModel(ItemsList);
	ui.listView_Display->setModel(model);
	
	QString qstrPrice = ui.lineEdit_Price->text();
	QString qstrNum = ui.lineEdit_Count->text();
	
	totalPrices = cc->GetResult(ui.lineEdit_Price->text().toDouble() *ui.lineEdit_Count->text().toDouble());
	QString ItemsQstr = " ����: " + qstrPrice + " ����: " + qstrNum + " " + qString + " С��: " + QString::number(totalPrices, 'f', 2);
	
	ItemsList.append(ItemsQstr);
	model->setStringList(ItemsList);
	total = total + totalPrices;
	ui.label_Total->setText(QString::number(total, 'f', 2))  ;
}