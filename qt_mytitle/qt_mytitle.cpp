#include "qt_mytitle.h"
#include "title_bar.h"
#include <QIcon>
#include <QVBoxLayout>

qt_mytitle::qt_mytitle(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint | windowFlags());
    this->setObjectName("mainwindow");
    setAttribute(Qt::WA_StyledBackground);
    this->setStyleSheet("#mainwindow{border-image:url(:/img/Resources/skins/skins11.png)}");
    TitleBar* pTitleBar = new TitleBar(this);
    installEventFilter(pTitleBar);

    resize(400, 300);
    setWindowTitle("Custom Window");
    setWindowIcon(QIcon(":/Images/logo"));

    /*QPalette pal(palette());
    pal.setColor(QPalette::Background, QColor(50, 50, 50));
    setAutoFillBackground(true);
    setPalette(pal);*/

    QVBoxLayout* pLayout = new QVBoxLayout();
    pLayout->addWidget(pTitleBar);
    pLayout->addStretch();
    pLayout->setSpacing(0);
    pLayout->setContentsMargins(0, 0, 0, 0);
    setLayout(pLayout);
}
