/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qzoom.h"

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *name;
    QPushButton *forward;
    QPushButton *backward;
    QListWidget *listWidget;
    QZoom *graphicsView;
    QPushButton *first_img;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QSlider *contrast;
    QLabel *label_2;
    QSlider *brightness;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *ctr_num;
    QLineEdit *brn_num;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1344, 654);
        name = new QLabel(Dialog);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(1110, 450, 221, 31));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        name->setFont(font);
        name->setStyleSheet(QString::fromUtf8(""));
        name->setFrameShape(QFrame::Panel);
        name->setFrameShadow(QFrame::Sunken);
        name->setAlignment(Qt::AlignCenter);
        forward = new QPushButton(Dialog);
        forward->setObjectName(QString::fromUtf8("forward"));
        forward->setGeometry(QRect(1056, 289, 61, 71));
        forward->setStyleSheet(QString::fromUtf8("#forward{\n"
"background-color:transparent;\n"
"border-image:url(:/img/icons8-forward.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#forward:pressed{\n"
"border-image:url(:/img/icons8-forward2.png);\n"
"}"));
        backward = new QPushButton(Dialog);
        backward->setObjectName(QString::fromUtf8("backward"));
        backward->setGeometry(QRect(244, 291, 61, 71));
        backward->setStyleSheet(QString::fromUtf8("#backward{\n"
"background-color:transparent;\n"
"border-image:url(:/img/icons8-back-50.png);\n"
"background:none;\n"
"border:none;\n"
"background-repeat:none;\n"
"}\n"
"#backward:pressed{\n"
"border-image:url(:/img/icons8-back.png);\n"
"}"));
        listWidget = new QListWidget(Dialog);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(5, 10, 251, 631));
        listWidget->setViewMode(QListView::IconMode);
        graphicsView = new QZoom(Dialog);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setGeometry(QRect(260, 10, 841, 631));
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        first_img = new QPushButton(Dialog);
        first_img->setObjectName(QString::fromUtf8("first_img"));
        first_img->setGeometry(QRect(1110, 610, 101, 31));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(1110, 490, 221, 111));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        contrast = new QSlider(layoutWidget);
        contrast->setObjectName(QString::fromUtf8("contrast"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(contrast->sizePolicy().hasHeightForWidth());
        contrast->setSizePolicy(sizePolicy);
        contrast->setMinimum(-127);
        contrast->setMaximum(127);
        contrast->setSingleStep(1);
        contrast->setPageStep(1);
        contrast->setValue(0);
        contrast->setOrientation(Qt::Horizontal);
        contrast->setTickPosition(QSlider::NoTicks);

        verticalLayout->addWidget(contrast);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QFont font1;
        font1.setPointSize(11);
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_2);

        brightness = new QSlider(layoutWidget);
        brightness->setObjectName(QString::fromUtf8("brightness"));
        brightness->setMinimum(-255);
        brightness->setMaximum(255);
        brightness->setSingleStep(1);
        brightness->setPageStep(1);
        brightness->setValue(0);
        brightness->setSliderPosition(0);
        brightness->setOrientation(Qt::Horizontal);
        brightness->setTickPosition(QSlider::NoTicks);
        brightness->setTickInterval(1);

        verticalLayout->addWidget(brightness);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(21);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, -1, -1, 19);
        ctr_num = new QLineEdit(layoutWidget);
        ctr_num->setObjectName(QString::fromUtf8("ctr_num"));
        QSizePolicy sizePolicy1(QSizePolicy::Ignored, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(ctr_num->sizePolicy().hasHeightForWidth());
        ctr_num->setSizePolicy(sizePolicy1);
        ctr_num->setMaximumSize(QSize(50, 16777215));
        QFont font2;
        font2.setPointSize(14);
        ctr_num->setFont(font2);
        ctr_num->setReadOnly(true);

        verticalLayout_2->addWidget(ctr_num);

        brn_num = new QLineEdit(layoutWidget);
        brn_num->setObjectName(QString::fromUtf8("brn_num"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(brn_num->sizePolicy().hasHeightForWidth());
        brn_num->setSizePolicy(sizePolicy2);
        brn_num->setMaximumSize(QSize(50, 16777215));
        brn_num->setFont(font2);
        brn_num->setReadOnly(true);

        verticalLayout_2->addWidget(brn_num);

        verticalLayout_2->setStretch(0, 5);
        verticalLayout_2->setStretch(1, 5);

        horizontalLayout->addLayout(verticalLayout_2);

        layoutWidget->raise();
        graphicsView->raise();
        name->raise();
        listWidget->raise();
        first_img->raise();
        forward->raise();
        backward->raise();

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Ch\341\272\251n \304\221o\303\241n h\303\254nh \341\272\243nh", nullptr));
        name->setText(QString());
        forward->setText(QString());
#if QT_CONFIG(shortcut)
        forward->setShortcut(QCoreApplication::translate("Dialog", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        backward->setText(QString());
#if QT_CONFIG(shortcut)
        backward->setShortcut(QCoreApplication::translate("Dialog", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        first_img->setText(QCoreApplication::translate("Dialog", "\341\272\242nh g\341\273\221c", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\304\220\341\273\231 t\306\260\306\241ng ph\341\272\243n", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\304\220\341\273\231 s\303\241ng", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
