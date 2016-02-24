#ifndef ARDUINORPM_H
#define ARDUINORPM_H

#include <QMainWindow>
#include <QSerialPort>
#include <QWidget>
#include <QtGui>
#include <QLCDNumber>
#include <QVBoxLayout>
#include <QSlider>
#include <QtWidgets>
#include "qcgaugewidget.h"

namespace Ui {
class ArduinoRpm;
}

class ArduinoRpm : public QMainWindow
{
    Q_OBJECT

public:
    explicit ArduinoRpm(QWidget *parent = 0);
    ~ArduinoRpm();

    void SerialInitializer();
public slots:
    void serialReciver();
private slots:
    void on_actionExit_triggered();
    void on_actionSettings_triggered();

private:
    Ui::ArduinoRpm *ui;
    QSerialPort *serial;

    QVBoxLayout *main_layout;
    QSlider *slider;
    QLCDNumber *lcd;

    QcGaugeWidget *rpmGuage;
    QcNeedleItem *rpmNeedle;


};

#endif // ARDUINORPM_H
