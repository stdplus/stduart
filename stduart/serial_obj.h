#ifndef SERIAL_OBJ_H
#define SERIAL_OBJ_H

#include <QWidget>
#include <QSplitter>
#include <QTextEdit>
#include <QGridLayout>
#include <QTextBrowser>
#include "serial_setting.h"
#include <QTimer>
#include <QToolBar>
#include <QDateTime>
#include "tools_cal.h"
#include <QPushButton>

struct statusbar_fix{
  qint64 recv_buf_size;

  qint64 recv_frames;
  qint64 transmit_count;
};
Q_DECLARE_METATYPE(statusbar_fix)

namespace Ui {
class serial_obj;
}

class serial_obj : public QWidget
{
    Q_OBJECT

signals:
    void objmessage(QString str);
    void statusbar_fix(QVariant v);

public slots:
    void sendmessage(QString str);
    void recv(QByteArray arr);
    void setting_charged(QVariant );


private slots:
    void recv_timeout();
    void on_action_pulse();
    void on_action_clear();
    void on_action_top();
    void on_action_bottom();
    void on_action_hex();
    void on_action_ascii();
    void on_recvbrowser_cursorPositionChanged();
    void on_action_zoomin();
    void on_action_zoomout();

public:
    explicit serial_obj(QWidget *parent = nullptr);
    ~serial_obj();

private:

    QToolBar *toolbar;
    QAction *actionRecvClear;
    QAction *actionPulse;
    QAction *actionTop;
    QAction *actionBottom;
    QAction *actionHex;
    QAction *actionAscii;
    QAction *actionZoomin;
    QAction *actionZoomout;

    bool is_recv_pulse;
    QByteArray recv_buf;
    Ui::serial_obj *ui;
    QTextBrowser *recv_browser;
    QTextBrowser *recv_browser_hex;
    QTableView *ascii_tab;
    tools_cal *tools_cal;
    QPushButton *push_transmit;

    QTimer *recv_timer;
    QByteArray recv_frame;
    qint64 recv_frame_count;


    void disp_info(void);
};

#endif // SERIAL_OBJ_H
