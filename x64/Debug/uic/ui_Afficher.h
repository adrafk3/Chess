/********************************************************************************
** Form generated from reading UI file 'Afficher.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFFICHER_H
#define UI_AFFICHER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Afficher
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QGroupBox *groupBox;
    QLabel *TourJoueur;
    QLabel *Statuts;
    QLabel *ValiditeDuMove;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Afficher)
    {
        if (Afficher->objectName().isEmpty())
            Afficher->setObjectName("Afficher");
        Afficher->resize(681, 460);
        centralwidget = new QWidget(Afficher);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(0, 0, 421, 421));
        graphicsView->setSceneRect(QRectF(0, 0, 0, 0));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(430, 20, 231, 381));
        TourJoueur = new QLabel(groupBox);
        TourJoueur->setObjectName("TourJoueur");
        TourJoueur->setGeometry(QRect(30, 50, 161, 20));
        Statuts = new QLabel(groupBox);
        Statuts->setObjectName("Statuts");
        Statuts->setGeometry(QRect(40, 330, 151, 20));
        ValiditeDuMove = new QLabel(groupBox);
        ValiditeDuMove->setObjectName("ValiditeDuMove");
        ValiditeDuMove->setGeometry(QRect(40, 180, 141, 20));
        Afficher->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Afficher);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 681, 22));
        Afficher->setMenuBar(menubar);

        retranslateUi(Afficher);

        QMetaObject::connectSlotsByName(Afficher);
    } // setupUi

    void retranslateUi(QMainWindow *Afficher)
    {
        Afficher->setWindowTitle(QCoreApplication::translate("Afficher", "Afficher", nullptr));
        groupBox->setTitle(QString());
        TourJoueur->setText(QCoreApplication::translate("Afficher", "TourJouer", nullptr));
        Statuts->setText(QCoreApplication::translate("Afficher", "Status", nullptr));
        ValiditeDuMove->setText(QCoreApplication::translate("Afficher", "Valide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Afficher: public Ui_Afficher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFFICHER_H
