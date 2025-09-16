#ifndef DIALOGERSTER_H
#define DIALOGERSTER_H

#include <QDialog>

namespace Ui {
class DialogErster;
}

class DialogErster : public QDialog
{
    Q_OBJECT

public:
    explicit DialogErster(QWidget *parent = nullptr);
    ~DialogErster();

public slots:
    QString getText() const;

private slots:
    void updateText();

private:
    Ui::DialogErster *ui;
    QString text;
};

#endif // DIALOGERSTER_H
