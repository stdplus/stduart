#ifndef TOOLS_CAL_H
#define TOOLS_CAL_H

#include <QWidget>

namespace Ui {
class tools_cal;
}

class tools_cal : public QWidget
{
    Q_OBJECT

public:
    explicit tools_cal(QWidget *parent = nullptr);
    ~tools_cal();

private slots:
    void on_lineEdit_textChanged(const QString &arg1);

    void on_lineEdit_2_textChanged(const QString &arg1);

    void on_lineEdit_3_textChanged(const QString &arg1);

private:
    Ui::tools_cal *ui;
};

#endif // TOOLS_CAL_H
