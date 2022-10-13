#include "workthread.h"

workTHREAD::workTHREAD(QObject *parent) : QThread(parent)
{


}


void workTHREAD::run()
{
    int kk =0;
    while (kk < 10)
    {
        kk ++;
        emit NumberChanged(kk);
        printf("%ds\n",kk);
        fflush(stdout);
        QThread::sleep(1);
    }
}
