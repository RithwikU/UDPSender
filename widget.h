#ifndef WIDGET_H
#define WIDGET_H

#include <QtGui>
#include <QWidget>

class QUdpSocket;
class QLineEdit;

class widget : public QWidget
{
Q_OBJECT

public:
widget(QWidget *parent = 0);
~widget();

private:
QUdpSocket *socket;
QLineEdit *message;

public slots:
void datagramSend();
void datagramSent();
};

#endif // WIDGET_H
