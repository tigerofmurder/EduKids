#ifndef OPE_H
#define OPE_H

#include <QWidget>

namespace Ui {
class OPE;
}

class OPE : public QWidget
{
    Q_OBJECT

public:
    explicit OPE(QWidget *parent = nullptr);
    ~OPE();

private:
    Ui::OPE *ui;
};

#endif // OPE_H
