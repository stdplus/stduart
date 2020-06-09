#ifndef SAVE2FILE_H
#define SAVE2FILE_H

#include <QWidget>

namespace Ui {
class save2file;
}

class save2file : public QWidget
{
    Q_OBJECT

public:
    explicit save2file(QWidget *parent = nullptr);
    ~save2file();

private:
    Ui::save2file *ui;
};

#endif // SAVE2FILE_H
