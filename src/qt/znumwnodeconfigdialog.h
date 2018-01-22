#ifndef ZNUMWNODECONFIGDIALOG_H
#define ZNUMWNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class ZnumwNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class ZnumwNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZnumwNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:28121", QString privkey="MASTERNODEPRIVKEY");
    ~ZnumwNodeConfigDialog();

private:
    Ui::ZnumwNodeConfigDialog *ui;
};

#endif // ZNUMWNODECONFIGDIALOG_H
