/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *folder;
    QAction *actionrun;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_9;
    QTabWidget *tabWidget_2;
    QWidget *t_list;
    QVBoxLayout *verticalLayout_12;
    QListWidget *listWidget;
    QWidget *t_thanvi;
    QVBoxLayout *verticalLayout_2;
    QListWidget *than_vi;
    QWidget *t_hangvi;
    QVBoxLayout *verticalLayout_6;
    QListWidget *hang_vi;
    QWidget *t_monvi;
    QVBoxLayout *verticalLayout_7;
    QListWidget *mon_vi;
    QWidget *t_tamvi;
    QVBoxLayout *verticalLayout_8;
    QListWidget *tam_vi;
    QWidget *t_bcn;
    QVBoxLayout *verticalLayout_9;
    QListWidget *bo_cong_nho;
    QWidget *t_phinhvi;
    QVBoxLayout *verticalLayout_10;
    QListWidget *phinh_vi;
    QWidget *t_bcl;
    QVBoxLayout *verticalLayout_13;
    QListWidget *bo_cong_lon;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_26;
    QLineEdit *so_luong;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QListWidget *tv_cao;
    QListWidget *tv_giua;
    QListWidget *tv_thap;
    QListWidget *tv_rut;
    QListWidget *inhvi;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *hv_truoc;
    QListWidget *hv_sau;
    QListWidget *hv_bcn;
    QListWidget *hv_bcl;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLabel *label_6;
    QLabel *label_5;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QListWidget *monvi;
    QListWidget *tamvi;
    QListWidget *bcn_pd;
    QListWidget *bcn_gn;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_7;
    QGridLayout *gridLayout_4;
    QLabel *label_17;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *done;
    QPushButton *quit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1277, 687);
        MainWindow->setAcceptDrops(false);
        folder = new QAction(MainWindow);
        folder->setObjectName(QString::fromUtf8("folder"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons8-opened-folder-48.png"), QSize(), QIcon::Normal, QIcon::Off);
        folder->setIcon(icon);
        actionrun = new QAction(MainWindow);
        actionrun->setObjectName(QString::fromUtf8("actionrun"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/icons8-play-64.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionrun->setIcon(icon1);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_9 = new QHBoxLayout(centralWidget);
        horizontalLayout_9->setSpacing(4);
        horizontalLayout_9->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(2, 2, 2, 2);
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget_2->sizePolicy().hasHeightForWidth());
        tabWidget_2->setSizePolicy(sizePolicy);
        tabWidget_2->setMinimumSize(QSize(631, 0));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        tabWidget_2->setFont(font);
        tabWidget_2->setFocusPolicy(Qt::TabFocus);
        tabWidget_2->setAcceptDrops(true);
        tabWidget_2->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"height: 20px;\n"
"width: 70px;\n"
"}\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"}\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"	color:blue;\n"
"    background:qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);\n"
"    border: 2px solid #C4C4C3;\n"
"    border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"    border-top-left-radius: 4px;\n"
"    border-top-right-radius: 4px;\n"
"    min-width: 8ex;\n"
"    padding: 2px;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: yellow;/*qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                stop: 0.5 #e7e7e7, stop: 1.0 #fafafa);*/\n"
"}\n"
"\n"
"QTabBar"
                        "::tab:selected {\n"
"\n"
"    border-color: red;\n"
"    border-bottom-color: #C2C7CB; /* same as pane color */\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"\n"
"/* make use of negative margins for overlapping tabs */\n"
"QTabBar::tab:selected {\n"
"    /* expand/overlap to the left and right by 4px */\n"
"    margin-left: -4px;\n"
"    margin-right: -4px;\n"
"}\n"
"\n"
"QTabBar::tab:first:selected {\n"
"    margin-left: 0; /* the first selected tab has nothing to overlap with on the left */\n"
"}\n"
"\n"
"QTabBar::tab:last:selected {\n"
"    margin-right: 0; /* the last selected tab has nothing to overlap with on the right */\n"
"}\n"
"\n"
"QTabBar::tab:only-one {\n"
"    margin: 0; /* if there is only one tab, we don't want overlapping margins */\n"
"}"));
        t_list = new QWidget();
        t_list->setObjectName(QString::fromUtf8("t_list"));
        verticalLayout_12 = new QVBoxLayout(t_list);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 4, 0, 0);
        listWidget = new QListWidget(t_list);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
        listWidget->setAcceptDrops(true);
        listWidget->setAutoScrollMargin(8);
        listWidget->setDragEnabled(true);
        listWidget->setDefaultDropAction(Qt::MoveAction);
        listWidget->setIconSize(QSize(290, 218));
        listWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerItem);
        listWidget->setMovement(QListView::Snap);
        listWidget->setFlow(QListView::LeftToRight);
        listWidget->setResizeMode(QListView::Adjust);
        listWidget->setSpacing(0);
        listWidget->setGridSize(QSize(302, 255));
        listWidget->setViewMode(QListView::IconMode);

        verticalLayout_12->addWidget(listWidget);

        tabWidget_2->addTab(t_list, QString());
        t_thanvi = new QWidget();
        t_thanvi->setObjectName(QString::fromUtf8("t_thanvi"));
        verticalLayout_2 = new QVBoxLayout(t_thanvi);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 4, 0, 0);
        than_vi = new QListWidget(t_thanvi);
        than_vi->setObjectName(QString::fromUtf8("than_vi"));
        than_vi->setContextMenuPolicy(Qt::CustomContextMenu);
        than_vi->setAcceptDrops(true);
        than_vi->setAutoScrollMargin(8);
        than_vi->setDragEnabled(true);
        than_vi->setDefaultDropAction(Qt::MoveAction);
        than_vi->setIconSize(QSize(290, 218));
        than_vi->setMovement(QListView::Snap);
        than_vi->setSpacing(0);
        than_vi->setGridSize(QSize(302, 255));
        than_vi->setViewMode(QListView::IconMode);

        verticalLayout_2->addWidget(than_vi);

        tabWidget_2->addTab(t_thanvi, QString());
        t_hangvi = new QWidget();
        t_hangvi->setObjectName(QString::fromUtf8("t_hangvi"));
        verticalLayout_6 = new QVBoxLayout(t_hangvi);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 4, 0, 0);
        hang_vi = new QListWidget(t_hangvi);
        hang_vi->setObjectName(QString::fromUtf8("hang_vi"));
        hang_vi->setContextMenuPolicy(Qt::CustomContextMenu);
        hang_vi->setAcceptDrops(true);
        hang_vi->setAutoScrollMargin(8);
        hang_vi->setDragEnabled(true);
        hang_vi->setDefaultDropAction(Qt::MoveAction);
        hang_vi->setIconSize(QSize(290, 218));
        hang_vi->setMovement(QListView::Snap);
        hang_vi->setResizeMode(QListView::Adjust);
        hang_vi->setSpacing(0);
        hang_vi->setGridSize(QSize(302, 255));
        hang_vi->setViewMode(QListView::IconMode);

        verticalLayout_6->addWidget(hang_vi);

        tabWidget_2->addTab(t_hangvi, QString());
        t_monvi = new QWidget();
        t_monvi->setObjectName(QString::fromUtf8("t_monvi"));
        verticalLayout_7 = new QVBoxLayout(t_monvi);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 4, 0, 0);
        mon_vi = new QListWidget(t_monvi);
        mon_vi->setObjectName(QString::fromUtf8("mon_vi"));
        mon_vi->setContextMenuPolicy(Qt::CustomContextMenu);
        mon_vi->setAcceptDrops(true);
        mon_vi->setAutoScrollMargin(8);
        mon_vi->setDragEnabled(true);
        mon_vi->setDefaultDropAction(Qt::MoveAction);
        mon_vi->setIconSize(QSize(290, 218));
        mon_vi->setMovement(QListView::Snap);
        mon_vi->setSpacing(0);
        mon_vi->setGridSize(QSize(302, 255));
        mon_vi->setViewMode(QListView::IconMode);

        verticalLayout_7->addWidget(mon_vi);

        tabWidget_2->addTab(t_monvi, QString());
        t_tamvi = new QWidget();
        t_tamvi->setObjectName(QString::fromUtf8("t_tamvi"));
        verticalLayout_8 = new QVBoxLayout(t_tamvi);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 4, 0, 0);
        tam_vi = new QListWidget(t_tamvi);
        tam_vi->setObjectName(QString::fromUtf8("tam_vi"));
        tam_vi->setContextMenuPolicy(Qt::CustomContextMenu);
        tam_vi->setAcceptDrops(true);
        tam_vi->setAutoScrollMargin(8);
        tam_vi->setDragEnabled(true);
        tam_vi->setDefaultDropAction(Qt::MoveAction);
        tam_vi->setIconSize(QSize(290, 218));
        tam_vi->setMovement(QListView::Snap);
        tam_vi->setResizeMode(QListView::Adjust);
        tam_vi->setSpacing(0);
        tam_vi->setGridSize(QSize(302, 255));
        tam_vi->setViewMode(QListView::IconMode);

        verticalLayout_8->addWidget(tam_vi);

        tabWidget_2->addTab(t_tamvi, QString());
        t_bcn = new QWidget();
        t_bcn->setObjectName(QString::fromUtf8("t_bcn"));
        verticalLayout_9 = new QVBoxLayout(t_bcn);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 4, 0, 0);
        bo_cong_nho = new QListWidget(t_bcn);
        bo_cong_nho->setObjectName(QString::fromUtf8("bo_cong_nho"));
        bo_cong_nho->setContextMenuPolicy(Qt::CustomContextMenu);
        bo_cong_nho->setAcceptDrops(true);
        bo_cong_nho->setAutoScrollMargin(8);
        bo_cong_nho->setDragEnabled(true);
        bo_cong_nho->setDefaultDropAction(Qt::MoveAction);
        bo_cong_nho->setIconSize(QSize(290, 218));
        bo_cong_nho->setMovement(QListView::Snap);
        bo_cong_nho->setFlow(QListView::LeftToRight);
        bo_cong_nho->setResizeMode(QListView::Adjust);
        bo_cong_nho->setSpacing(0);
        bo_cong_nho->setGridSize(QSize(302, 255));
        bo_cong_nho->setViewMode(QListView::IconMode);

        verticalLayout_9->addWidget(bo_cong_nho);

        tabWidget_2->addTab(t_bcn, QString());
        t_phinhvi = new QWidget();
        t_phinhvi->setObjectName(QString::fromUtf8("t_phinhvi"));
        verticalLayout_10 = new QVBoxLayout(t_phinhvi);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 4, 0, 0);
        phinh_vi = new QListWidget(t_phinhvi);
        phinh_vi->setObjectName(QString::fromUtf8("phinh_vi"));
        phinh_vi->setContextMenuPolicy(Qt::CustomContextMenu);
        phinh_vi->setAcceptDrops(true);
        phinh_vi->setAutoScrollMargin(8);
        phinh_vi->setDragEnabled(true);
        phinh_vi->setDefaultDropAction(Qt::MoveAction);
        phinh_vi->setIconSize(QSize(290, 218));
        phinh_vi->setMovement(QListView::Snap);
        phinh_vi->setResizeMode(QListView::Adjust);
        phinh_vi->setSpacing(0);
        phinh_vi->setGridSize(QSize(302, 255));
        phinh_vi->setViewMode(QListView::IconMode);

        verticalLayout_10->addWidget(phinh_vi);

        tabWidget_2->addTab(t_phinhvi, QString());
        t_bcl = new QWidget();
        t_bcl->setObjectName(QString::fromUtf8("t_bcl"));
        verticalLayout_13 = new QVBoxLayout(t_bcl);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 4, 0, 0);
        bo_cong_lon = new QListWidget(t_bcl);
        bo_cong_lon->setObjectName(QString::fromUtf8("bo_cong_lon"));
        bo_cong_lon->setAutoScrollMargin(8);
        bo_cong_lon->setDragEnabled(true);
        bo_cong_lon->setDefaultDropAction(Qt::MoveAction);
        bo_cong_lon->setIconSize(QSize(290, 218));
        bo_cong_lon->setMovement(QListView::Snap);
        bo_cong_lon->setResizeMode(QListView::Adjust);
        bo_cong_lon->setGridSize(QSize(302, 255));
        bo_cong_lon->setViewMode(QListView::IconMode);

        verticalLayout_13->addWidget(bo_cong_lon);

        tabWidget_2->addTab(t_bcl, QString());

        horizontalLayout_9->addWidget(tabWidget_2);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setSpacing(2);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(2);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_26 = new QLabel(centralWidget);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setPointSize(12);
        label_26->setFont(font1);

        horizontalLayout_10->addWidget(label_26);

        so_luong = new QLineEdit(centralWidget);
        so_luong->setObjectName(QString::fromUtf8("so_luong"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(so_luong->sizePolicy().hasHeightForWidth());
        so_luong->setSizePolicy(sizePolicy2);
        so_luong->setMinimumSize(QSize(0, 0));
        so_luong->setMaximumSize(QSize(70, 1000));
        QFont font2;
        font2.setPointSize(11);
        so_luong->setFont(font2);
        so_luong->setReadOnly(true);

        horizontalLayout_10->addWidget(so_luong);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer);


        verticalLayout_11->addLayout(horizontalLayout_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tv_cao = new QListWidget(centralWidget);
        tv_cao->setObjectName(QString::fromUtf8("tv_cao"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tv_cao->sizePolicy().hasHeightForWidth());
        tv_cao->setSizePolicy(sizePolicy3);
        tv_cao->setFont(font2);
        tv_cao->setAcceptDrops(true);
        tv_cao->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        tv_cao->setDragEnabled(true);
        tv_cao->setDragDropMode(QAbstractItemView::DragDrop);
        tv_cao->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout->addWidget(tv_cao);

        tv_giua = new QListWidget(centralWidget);
        tv_giua->setObjectName(QString::fromUtf8("tv_giua"));
        sizePolicy3.setHeightForWidth(tv_giua->sizePolicy().hasHeightForWidth());
        tv_giua->setSizePolicy(sizePolicy3);
        tv_giua->setFont(font2);
        tv_giua->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        tv_giua->setDragDropMode(QAbstractItemView::DragDrop);
        tv_giua->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout->addWidget(tv_giua);

        tv_thap = new QListWidget(centralWidget);
        tv_thap->setObjectName(QString::fromUtf8("tv_thap"));
        sizePolicy3.setHeightForWidth(tv_thap->sizePolicy().hasHeightForWidth());
        tv_thap->setSizePolicy(sizePolicy3);
        tv_thap->setFont(font2);
        tv_thap->setAcceptDrops(true);
        tv_thap->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        tv_thap->setDragDropMode(QAbstractItemView::DragDrop);
        tv_thap->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout->addWidget(tv_thap);

        tv_rut = new QListWidget(centralWidget);
        tv_rut->setObjectName(QString::fromUtf8("tv_rut"));
        sizePolicy3.setHeightForWidth(tv_rut->sizePolicy().hasHeightForWidth());
        tv_rut->setSizePolicy(sizePolicy3);
        tv_rut->setFont(font2);
        tv_rut->setAcceptDrops(true);
        tv_rut->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        tv_rut->setDragDropMode(QAbstractItemView::DragDrop);
        tv_rut->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout->addWidget(tv_rut);

        inhvi = new QListWidget(centralWidget);
        inhvi->setObjectName(QString::fromUtf8("inhvi"));
        sizePolicy3.setHeightForWidth(inhvi->sizePolicy().hasHeightForWidth());
        inhvi->setSizePolicy(sizePolicy3);
        inhvi->setFont(font2);
        inhvi->setAcceptDrops(true);
        inhvi->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        inhvi->setDragDropMode(QAbstractItemView::DragDrop);
        inhvi->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout->addWidget(inhvi);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        label_4->setFont(font3);
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 138, 122);"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_4);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color: rgb(0, 138, 122);"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 138, 122);"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_2);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(0, 138, 122);"));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_3);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font3);
        label_13->setStyleSheet(QString::fromUtf8("\n"
"color: rgb(0, 138, 122);"));
        label_13->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label_13);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        hv_truoc = new QListWidget(centralWidget);
        hv_truoc->setObjectName(QString::fromUtf8("hv_truoc"));
        sizePolicy3.setHeightForWidth(hv_truoc->sizePolicy().hasHeightForWidth());
        hv_truoc->setSizePolicy(sizePolicy3);
        hv_truoc->setFont(font2);
        hv_truoc->setAcceptDrops(true);
        hv_truoc->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        hv_truoc->setDragDropMode(QAbstractItemView::DragDrop);
        hv_truoc->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout_2->addWidget(hv_truoc);

        hv_sau = new QListWidget(centralWidget);
        hv_sau->setObjectName(QString::fromUtf8("hv_sau"));
        sizePolicy3.setHeightForWidth(hv_sau->sizePolicy().hasHeightForWidth());
        hv_sau->setSizePolicy(sizePolicy3);
        hv_sau->setFont(font2);
        hv_sau->setAcceptDrops(true);
        hv_sau->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        hv_sau->setDragDropMode(QAbstractItemView::DragDrop);
        hv_sau->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout_2->addWidget(hv_sau);

        hv_bcn = new QListWidget(centralWidget);
        hv_bcn->setObjectName(QString::fromUtf8("hv_bcn"));
        sizePolicy3.setHeightForWidth(hv_bcn->sizePolicy().hasHeightForWidth());
        hv_bcn->setSizePolicy(sizePolicy3);
        hv_bcn->setFont(font2);
        hv_bcn->setAcceptDrops(true);
        hv_bcn->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        hv_bcn->setDragDropMode(QAbstractItemView::DragDrop);
        hv_bcn->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout_2->addWidget(hv_bcn);

        hv_bcl = new QListWidget(centralWidget);
        hv_bcl->setObjectName(QString::fromUtf8("hv_bcl"));
        sizePolicy3.setHeightForWidth(hv_bcl->sizePolicy().hasHeightForWidth());
        hv_bcl->setSizePolicy(sizePolicy3);
        hv_bcl->setFont(font2);
        hv_bcl->setAcceptDrops(true);
        hv_bcl->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        hv_bcl->setDragDropMode(QAbstractItemView::DragDrop);
        hv_bcl->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout_2->addWidget(hv_bcl);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font3);
        label_7->setStyleSheet(QString::fromUtf8("color: rgb(0, 138, 122);"));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_7);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font3);
        label_6->setStyleSheet(QString::fromUtf8("color: rgb(0, 138, 122);"));
        label_6->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_6);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        QFont font4;
        font4.setPointSize(11);
        font4.setBold(true);
        font4.setWeight(75);
        label_5->setFont(font4);
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(0, 138, 122);"));
        label_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_5);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font4);
        label_8->setStyleSheet(QString::fromUtf8("color: rgb(0, 138, 122);"));
        label_8->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        monvi = new QListWidget(centralWidget);
        monvi->setObjectName(QString::fromUtf8("monvi"));
        sizePolicy3.setHeightForWidth(monvi->sizePolicy().hasHeightForWidth());
        monvi->setSizePolicy(sizePolicy3);
        monvi->setFont(font2);
        monvi->setAcceptDrops(true);
        monvi->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        monvi->setDragDropMode(QAbstractItemView::DragDrop);
        monvi->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout_3->addWidget(monvi);

        tamvi = new QListWidget(centralWidget);
        tamvi->setObjectName(QString::fromUtf8("tamvi"));
        sizePolicy3.setHeightForWidth(tamvi->sizePolicy().hasHeightForWidth());
        tamvi->setSizePolicy(sizePolicy3);
        tamvi->setFont(font2);
        tamvi->setAcceptDrops(true);
        tamvi->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        tamvi->setDragDropMode(QAbstractItemView::DragDrop);
        tamvi->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout_3->addWidget(tamvi);

        bcn_pd = new QListWidget(centralWidget);
        bcn_pd->setObjectName(QString::fromUtf8("bcn_pd"));
        sizePolicy3.setHeightForWidth(bcn_pd->sizePolicy().hasHeightForWidth());
        bcn_pd->setSizePolicy(sizePolicy3);
        bcn_pd->setFont(font2);
        bcn_pd->setAcceptDrops(true);
        bcn_pd->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        bcn_pd->setDragDropMode(QAbstractItemView::DragDrop);
        bcn_pd->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout_3->addWidget(bcn_pd);

        bcn_gn = new QListWidget(centralWidget);
        bcn_gn->setObjectName(QString::fromUtf8("bcn_gn"));
        sizePolicy3.setHeightForWidth(bcn_gn->sizePolicy().hasHeightForWidth());
        bcn_gn->setSizePolicy(sizePolicy3);
        bcn_gn->setFont(font2);
        bcn_gn->setAcceptDrops(true);
        bcn_gn->setStyleSheet(QString::fromUtf8("border: 1px solid orange;"));
        bcn_gn->setDragDropMode(QAbstractItemView::DragDrop);
        bcn_gn->setDefaultDropAction(Qt::MoveAction);

        horizontalLayout_3->addWidget(bcn_gn);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font3);
        label_9->setStyleSheet(QString::fromUtf8("color: rgb(0, 138, 122);"));
        label_9->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_9);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font3);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 138, 122);"));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_10);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font4);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 138, 122);"));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_11);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font4);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 138, 122);"));
        label_12->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_12);


        verticalLayout->addLayout(horizontalLayout_6);


        verticalLayout_11->addLayout(verticalLayout);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        sizePolicy3.setHeightForWidth(label_17->sizePolicy().hasHeightForWidth());
        label_17->setSizePolicy(sizePolicy3);
        label_17->setFrameShape(QFrame::NoFrame);
        label_17->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_17, 0, 0, 1, 1);

        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy4);
        label_15->setStyleSheet(QString::fromUtf8(""));
        label_15->setFrameShape(QFrame::NoFrame);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(label_15, 0, 1, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(35);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        done = new QPushButton(centralWidget);
        done->setObjectName(QString::fromUtf8("done"));
        sizePolicy1.setHeightForWidth(done->sizePolicy().hasHeightForWidth());
        done->setSizePolicy(sizePolicy1);
        done->setMinimumSize(QSize(0, 50));
        done->setFont(font2);
        done->setStyleSheet(QString::fromUtf8("QPushButton:hover:!pressed{\n"
"background-color: rgb(170, 255, 255);\n"
"}"));

        horizontalLayout_8->addWidget(done);

        quit = new QPushButton(centralWidget);
        quit->setObjectName(QString::fromUtf8("quit"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(quit->sizePolicy().hasHeightForWidth());
        quit->setSizePolicy(sizePolicy5);
        QFont font5;
        font5.setPointSize(9);
        quit->setFont(font5);
        quit->setStyleSheet(QString::fromUtf8("QPushButton:hover:!pressed{\n"
"background-color: rgb(235, 0, 31);\n"
"}"));

        horizontalLayout_8->addWidget(quit);


        gridLayout_4->addLayout(horizontalLayout_8, 1, 0, 1, 2);


        horizontalLayout_7->addLayout(gridLayout_4);


        verticalLayout_11->addLayout(horizontalLayout_7);


        horizontalLayout_9->addLayout(verticalLayout_11);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setIconSize(QSize(32, 32));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(folder);
        mainToolBar->addAction(actionrun);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(0);
        done->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "AI Medical Assistant", nullptr));
        folder->setText(QCoreApplication::translate("MainWindow", "M\341\273\237", nullptr));
#if QT_CONFIG(tooltip)
        folder->setToolTip(QCoreApplication::translate("MainWindow", "M\341\273\237 th\306\260 m\341\273\245c", nullptr));
#endif // QT_CONFIG(tooltip)
        actionrun->setText(QCoreApplication::translate("MainWindow", "Ch\341\272\241y CNN", nullptr));
#if QT_CONFIG(tooltip)
        actionrun->setToolTip(QCoreApplication::translate("MainWindow", "T\341\273\261 \304\221\341\273\231ng ph\303\242n lo\341\272\241i", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget_2->setTabText(tabWidget_2->indexOf(t_list), QCoreApplication::translate("MainWindow", "Th\306\260 m\341\273\245c", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(t_thanvi), QCoreApplication::translate("MainWindow", "Th\303\242n v\341\273\213", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(t_hangvi), QCoreApplication::translate("MainWindow", "Hang v\341\273\213", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(t_monvi), QCoreApplication::translate("MainWindow", "M\303\264n v\341\273\213", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(t_tamvi), QCoreApplication::translate("MainWindow", "T\303\242m v\341\273\213", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(t_bcn), QCoreApplication::translate("MainWindow", "B\341\273\235 cong nh\341\273\217", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(t_phinhvi), QCoreApplication::translate("MainWindow", "Ph\303\254nh v\341\273\213", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(t_bcl), QCoreApplication::translate("MainWindow", "B\341\273\235 cong l\341\273\233n", nullptr));
        label_26->setText(QCoreApplication::translate("MainWindow", "S\341\273\221 l\306\260\341\273\243ng", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Th\303\242n v\341\273\213 cao", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Th\303\242n v\341\273\213 gi\341\273\257a", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Th\303\242n v\341\273\213 th\341\272\245p", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "B\341\273\235 cong l\341\273\233n", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Ph\303\254nh v\341\273\213", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Hang v\341\273\213 tr\306\260\341\273\233c", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Hang v\341\273\213 sau", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "HV-B\341\273\235 cong nh\341\273\217", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "HV-B\341\273\235 cong l\341\273\233n", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "M\303\264n v\341\273\213", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "T\303\242m v\341\273\213", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "BCN-Ph\341\272\247n \304\221\341\273\251ng", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "BCN-G\303\263c nh\341\273\217", nullptr));
        label_17->setText(QString());
        label_15->setText(QString());
        done->setText(QCoreApplication::translate("MainWindow", "\304\220\303\241nh nh\303\243n \341\272\243nh", nullptr));
        quit->setText(QCoreApplication::translate("MainWindow", "Tho\303\241t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
