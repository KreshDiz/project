#include <QTextStream>
#include <QDebug>
#include <QList>

int main()
{
    QTextStream cout(stdout);
    QTextStream cin(stdin);
    cout << "OFf!" << endl;
    cout.setCodec("CP866");
    cout << QString :: fromUtf8("Несу хуйню в массы!") << endl;

  /*  bool EsQ (true);
    if (EsQ)
        cout << QString :: fromUtf8("Правда!") << endl;
    else cout << QString :: fromUtf8("Хрень!") << endl;
    int a,b(0);
    while (b!= 3)
    {

    cout << QString :: fromUtf8("Подтвердите хрень (1/0)?") << endl;

    cin >> a;
    if (a == 1)
    cout << QString :: fromUtf8("Действительно хрень!") << endl;
        if (a == 0)
         cout << QString :: fromUtf8("Нет, не хрень!") << endl;

        if (a!=0 && a!=1)  cout << QString :: fromUtf8("Не понятно что!") << endl;
        b++;
        if (b == 3)
        cout << QString :: fromUtf8("Нажмите интер для выхода!") << endl;
    }
*/
    qDebug() << 123;

    QList <int> intList;
    qDebug() << "Test:";
    qDebug() << intList;
    intList << 6 << 9 << 2 << -7;
    qDebug() << intList;

    for(int i(0);i<intList.size();++i)
    {
       cout << intList.at(i) << ' ';
    }
cout  << endl;
    intList[0]=66;
    for(int i(0);i<intList.size();++i)
    {
       cout << intList.at(i) << ' ';
       cout << intList[i] << ' ';
    }
cout  << endl;
cout << QString :: fromUtf8("Изменение для Gid!") << endl;
cout << QString :: fromUtf8("Изменение для Gid! второе измнение") << endl;
cout << QString :: fromUtf8("Трах бабах четвёртый коммит") << endl;
        return 0;
}

