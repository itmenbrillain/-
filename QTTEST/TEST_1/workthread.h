#ifndef WORKTHREAD_H
#define WORKTHREAD_H

#include <QThread>



class workTHREAD : public QThread
{
   Q_OBJECT
public:

    explicit workTHREAD(QObject *parent = nullptr);
     void run();

signals:
    void NumberChanged(int);

};

#endif // WORKTHREAD_H
