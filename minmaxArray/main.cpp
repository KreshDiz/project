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

    QList<double> lst;
    lst << 2.0 << 56.2 << 445.02 << 278.2 << 1.2;
    qDebug() << "Start";
    qDebug () << lst;
    int iMin (0);
    double minValue = lst[0];
    for (int i(0); i < lst.size(); ++i)
        if (minValue > lst[i])
        {
            minValue = lst[i];
            iMin=i;
        }
    cout << "minValue " << minValue << " iMin " << iMin << endl;
    double sl(0.0);
    int sl2 (lst.size());

    while (sl2 != -1)
    {

     for (int i(0); i < (lst.size()-1); ++i)
     {
         if (lst[i+1] < lst[i])
            {

              sl = lst[i+1];
              lst[i+1] = lst [i];
              lst [i] = sl;
              qDebug () << lst;
            }

     }
     sl2--;
    }


    return 0;
}

