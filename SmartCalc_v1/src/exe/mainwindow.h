#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QKeyEvent>
#include <QMainWindow>
#include <QVector>

#ifdef __cplusplus
extern "C" {
#include "s21_smartcalc.h"
}
#endif

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

 protected:
  void keyPressEvent(QKeyEvent *event) override {
    if (event->modifiers() == Qt::ControlModifier &&
        event->key() == Qt::Key_W) {
      close();
    }
  }

 private:
  Ui::MainWindow *ui;
  QString xval = "0";
  int setted_x = 0;
  int info_for_x = 0;
  int autoclear_1 = 0;
  int autoclear_2 = 0;
  int no_clear = 0;
  int was_x = 0;
  int show_graph = 0;
  int hide_graph = 0;

  double xBegin, xEnd, h, X, Y;
  QVector<double> x, y;

 private slots:
  void variables();
  void operators();
  void trigonometry();
  void on_clear_clicked();
  void on_backspace_clicked();
  void on_setx_clicked();
  void on_equals_clicked();
  void on_graph_clicked();
  void on_showhide_clicked();
};

#endif  // MAINWINDOW_H
