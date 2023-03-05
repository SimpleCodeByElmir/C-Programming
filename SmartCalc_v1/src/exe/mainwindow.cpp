#include "mainwindow.h"

#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  ui->info_line->setText("*Press 'set x' to set 'x' value.");
  ui->lineEdit_x_max->setText("10");
  ui->lineEdit_x_min->setText("-10");
  ui->lineEdit_y_max->setText("10");
  ui->lineEdit_y_min->setText("-10");

  connect(ui->string_line, &QLineEdit::textChanged,
          [=]() { ui->string_line->setFocus(); });
  connect(ui->zero, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->one, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->two, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->three, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->four, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->five, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->six, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->seven, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->eight, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->nine, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->plus, SIGNAL(clicked()), this, SLOT(operators()));
  connect(ui->minus, SIGNAL(clicked()), this, SLOT(operators()));
  connect(ui->divide, SIGNAL(clicked()), this, SLOT(operators()));
  connect(ui->mult, SIGNAL(clicked()), this, SLOT(operators()));
  connect(ui->power, SIGNAL(clicked()), this, SLOT(operators()));
  connect(ui->mod, SIGNAL(clicked()), this, SLOT(operators()));
  connect(ui->brace_open, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->brace_close, SIGNAL(clicked()), this, SLOT(variables()));
  connect(ui->dot, SIGNAL(clicked()), this, SLOT(operators()));
  connect(ui->justx, SIGNAL(clicked()), this, SLOT(operators()));
  connect(ui->sqrt, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->ln, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->log, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->sin, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->cos, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->tan, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->asin, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->acos, SIGNAL(clicked()), this, SLOT(trigonometry()));
  connect(ui->atan, SIGNAL(clicked()), this, SLOT(trigonometry()));
}

MainWindow::~MainWindow() { delete ui; }

#define do_clear                                    \
  if (autoclear_1 > autoclear_2 && no_clear != 2) { \
    ui->string_line->setText("");                   \
    autoclear_1 = 0;                                \
    no_clear = 0;                                   \
    was_x = 0;                                      \
  }

void MainWindow::variables() {
  do_clear;
  QPushButton *button = (QPushButton *)sender();
  ui->string_line->insert(button->text());
  info_for_x++;
}

void MainWindow::operators() {
  if (autoclear_1 > autoclear_2) {
    autoclear_1 = 0;
  }
  QPushButton *button = (QPushButton *)sender();
  ui->string_line->insert(button->text());
}

void MainWindow::trigonometry() {
  if (autoclear_1 > autoclear_2) {
    autoclear_1 = 0;
  }
  QPushButton *button = (QPushButton *)sender();
  ui->string_line->insert(button->text() + "(");
  info_for_x++;
}

void MainWindow::on_clear_clicked() {
  ui->string_line->setText("");
  ui->last_exprsn->setText("");
  ui->info_line->setText("");
  xval = "0";
  setted_x = 0;
  autoclear_1 = 0;
  autoclear_2 = 0;
  no_clear = 0;
  info_for_x = 0;
  was_x = 0;
}

void MainWindow::on_backspace_clicked() { ui->string_line->backspace(); }

void MainWindow::on_setx_clicked() {
  setted_x++;
  if (setted_x <= 1 && info_for_x == 0) {
    ui->info_line->setText("*input number and press 'set x' again.");
  } else if (setted_x > 1 || info_for_x > 0) {
    xval = ui->string_line->text();
    QByteArray temp_xval = xval.toLocal8Bit();
    char *send_xval = temp_xval.data();
    int check_xval = check_x(send_xval);
    if (check_xval == 0) {
      ui->info_line->setText("x=" + xval);
      ui->string_line->setText("");
    } else if (check_xval == 2) {
      ui->info_line->setText("*error: empty or too long 'x'");
      xval = "0";
    } else {
      ui->info_line->setText("*error: only integer or float");
      xval = "0";
    }
  }
}

void MainWindow::on_equals_clicked() {
  no_clear = 0;
  int res = 0;
  int *ptr_res = &res;
  char str_result[500];
  QString input_line = ui->string_line->text();
  QString x_line = NULL;
  QByteArray temp = NULL;

  if (input_line.contains('x')) {
    was_x = 1;
    QString x_line = input_line.replace("x", "(" + xval + ")");
    temp = x_line.toLocal8Bit();
  } else {
    temp = input_line.toLocal8Bit();
  }
  char *send_line = temp.data();
  main_c(send_line, str_result, ptr_res);
  if (res == 0 || res == 2) {
    no_clear = res;
    if (res == 0) {
      ui->last_exprsn->setText(ui->string_line->text());
      ui->string_line->setText(str_result);
      if (!ui->info_line->text().contains("x=")) {
        ui->info_line->setText("");
      }
      was_x = 0;
      autoclear_1++;
    } else if (res == 2 && was_x == 0) {
      ui->string_line->setText(str_result);
      ui->info_line->setText("*input an operator");
    }
  } else {
    ui->info_line->setText(str_result);
  }
}

void MainWindow::on_graph_clicked() {
  ui->last_exprsn->setText("");
  if (show_graph == hide_graph) {
    resize(992, 481);
    show_graph++;
  }
  if (!ui->info_line->text().contains("x=")) {
    ui->info_line->setText("");
  }
  no_clear = 0;
  ui->widget->clearGraphs();

  QString inp_line_1 = ui->lineEdit_x_max->text();
  QByteArray stage_line_1 = inp_line_1.toLocal8Bit();
  char *throw_line_1 = stage_line_1.data();
  int m = check_x(throw_line_1);

  QString inp_line_2 = ui->lineEdit_x_min->text();
  QByteArray stage_line_2 = inp_line_2.toLocal8Bit();
  char *throw_line_2 = stage_line_2.data();
  int n = check_x(throw_line_2);

  QString inp_line_3 = ui->lineEdit_y_max->text();
  QByteArray stage_line_3 = inp_line_3.toLocal8Bit();
  char *throw_line_3 = stage_line_3.data();
  int p = check_x(throw_line_3);

  QString inp_line_4 = ui->lineEdit_y_min->text();
  QByteArray stage_line_4 = inp_line_4.toLocal8Bit();
  char *throw_line_4 = stage_line_4.data();
  int o = check_x(throw_line_4);

  if (m != 0 || n != 0 || p != 0 || o != 0) {
    ui->info_line->setText("*invalid number: x/y-max/min");
  } else {
    QString new_label = NULL;
    QString x_line = NULL;
    QByteArray line = NULL;
    double x_max, y_max, x_min, y_min;

    int res = 0;
    int *ptr_res = &res;
    char str_result[500];

    xBegin = ui->lineEdit_x_min->text().toDouble();
    xEnd = ui->lineEdit_x_max->text().toDouble();
    x_min = xBegin;
    x_max = xEnd;
    y_min = ui->lineEdit_y_min->text().toDouble();
    y_max = ui->lineEdit_y_max->text().toDouble();
    if (x_min < x_max && y_min < y_max) {
      double h = (abs(x_max) + abs(x_min)) / 1000;
      int N = (xEnd - xBegin) / h + 2;
      QVector<double> x(N), y(N);
      ui->widget->xAxis->setRange(x_min, x_max);
      ui->widget->yAxis->setRange(y_min, y_max);
      int i = 0;
      for (X = xBegin; X <= xEnd; X += h) {
        if (X < 0.001 && X > -0.001) X = 0;
        x[i] = (X);
        new_label = ui->string_line->text();
        if (ui->string_line->text().contains('x')) {
          x_line = new_label.replace("x", "(" + (QString::number(X)) + ")");
          line = x_line.toLocal8Bit();
        } else {
          line = new_label.toLocal8Bit();
        }
        const char *str = line.data();

        char byt[3999] = "";
        strncpy(byt, str, 3999);
        if (*str) {
          graph_main_c(byt, str_result, ptr_res);
          if (res == 0 || res == 2) {
            no_clear = res;
            Y = atof(str_result);
            y[i] = Y;
            autoclear_1 = 1;
          } else {
            ui->info_line->setText(str_result);
            break;
          }
        }
        i++;
      }
      ui->widget->addGraph();
      ui->widget->graph(0)->setData(x, y);
      ui->widget->graph(0)->setPen(QColor(127, 127, 255, 127));
      ui->widget->graph(0)->setLineStyle(QCPGraph::lsNone);
      ui->widget->graph(0)->setScatterStyle(
          QCPScatterStyle(QCPScatterStyle::ssCircle, 2));
      ui->widget->addGraph();
      ui->widget->graph(0)->addData(x, y);
      ui->widget->xAxis->setRange(xBegin, xEnd);
      ui->widget->yAxis->setRange(y_min - 0.5, y_max + 0.5);
      ui->widget->replot();
      x.clear();
      y.clear();
    }
  }
}

void MainWindow::on_showhide_clicked() {
  if (show_graph == hide_graph) {
    resize(992, 481);
    show_graph++;
  } else if (show_graph > hide_graph) {
    resize(388, 430);
    show_graph--;
  }
}
