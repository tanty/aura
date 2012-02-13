#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <QObject>
#include <QDeclarativeView>
#include <MApplicationWindow>
#include <QCamDevice>

class Controller : public QObject
{
    Q_OBJECT
 public:
    Controller(QObject *parent = 0);
    void setupCamDevice();
    void setVideoMode();
    void setupViewfinder();
    void setupEffects();

 private slots:
    void startPipeline();
    void stopPipeline();
    void startRecording();
    void stopRecording();
    void displayClicked();

 private:
    MApplicationWindow mainWindow;
    QCamDevice device;
};
#endif
