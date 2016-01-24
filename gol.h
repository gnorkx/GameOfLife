#ifndef GOL_H
#define GOL_H

#include <QWidget>

namespace Ui {
class gol;
}

class gol : public QWidget
{
    Q_OBJECT

public:
    explicit gol(QWidget *parent = 0);
    ~gol();

private:
    Ui::gol *ui;
};

#endif // GOL_H
