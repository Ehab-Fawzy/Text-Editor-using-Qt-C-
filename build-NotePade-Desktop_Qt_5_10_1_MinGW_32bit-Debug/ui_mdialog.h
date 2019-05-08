/********************************************************************************
** Form generated from reading UI file 'mdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MDIALOG_H
#define UI_MDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_mDialog
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *mDialog)
    {
        if (mDialog->objectName().isEmpty())
            mDialog->setObjectName(QStringLiteral("mDialog"));
        mDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(mDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(mDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), mDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), mDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(mDialog);
    } // setupUi

    void retranslateUi(QDialog *mDialog)
    {
        mDialog->setWindowTitle(QApplication::translate("mDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mDialog: public Ui_mDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MDIALOG_H
