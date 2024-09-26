#ifndef TREEWIDGET_H
#define TREEWIDGET_H

#include <QWidget>
#include <QTreeWidgetItem>

QT_BEGIN_NAMESPACE
namespace Ui { class TreeWidget; }
QT_END_NAMESPACE

class TreeWidget : public QWidget
{
    Q_OBJECT

public:
    TreeWidget(QWidget *parent = nullptr);
    ~TreeWidget();
public:
    void init();
    void updatePanrentItem(QTreeWidgetItem* item);
public slots:
    void treeItemChanged(QTreeWidgetItem* item,int column);

private:
    Ui::TreeWidget *ui;
};
#endif // TREEWIDGET_H
