#include <QCoreApplication>

#include <QTextCodec>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QTime>
#include <QtDebug>
#include <QSqlDriver>
#include <QSqlRecord>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());//设置中文显示
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");

    db.setHostName("easybook-3313b0");
    db.setDatabaseName("qtDB.db");
    db.setUserName("zhouhejun");
    db.setPassword("123456");
    db.open();

    //
    QSqlQuery query;
    bool success= query.exec("create table automobile(id int primary key,attribute varchar,type varchar,kind varchar,nation int,carnumber int,elevaltor int,distance int,oil int,temperature int)");
    if(success)
        qDebug()<<QObject::tr("数据库表创建成功！\n");
    else
        qDebug()<<QObject::tr("数据库表创建失败！\n");

    //
    query.exec("select * from automobile");
    QSqlRecord rec=query.record();
    qDebug()<<QObject::tr("automobile表字段数：")<<rec.count();

    //
    QTime t;
    t.start();
    query.prepare("insert into automobile values(?,?,?,?,?,?,?,?,?,?)");


    return a.exec();
}
