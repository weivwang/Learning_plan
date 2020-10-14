#include "mpushbutton.h"
#include <QMessageBox>
#include "attribute.h"

extern QString myname;

void mPushbutton::on_mPushbutton_clicked()
{
    attribute *atr = new attribute;
    emit add();
    connect(this,SIGNAL(add()),atr,SLOT(receive()));

}
