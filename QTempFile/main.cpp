// #include <QCoreApplication>
// #include <QTemporaryFile>
// #include <QDebug>
// #include <QFile>

// int main(int argc, char *argv[])
// {
//     QCoreApplication app(argc, argv);

//     QString targetPath = "output.txt";

//     {
//         QTemporaryFile tmpFile("input.txt");
//         // tmpFile.setAutoRemove(true);

//         if (!tmpFile.open()) {
//             qCritical() << "Failed to open temporary file";
//             return 1;
//         }

//         tmpFile.write("Temporary data.\n");
//         tmpFile.flush();

//         if (!tmpFile.rename(targetPath)) {
//             qCritical() << "Rename failed";
//             return 1;
//         }

//         // Uncomment this line to prevent the renamed file from being deleted
//         // tmpFile.setAutoRemove(false);

//         qDebug() << "Renamed to:" << targetPath;
//         qDebug() << "AutoRemove is" << tmpFile.autoRemove();
//     }


//     // Check if the file exists
//     if (QFile::exists(targetPath)) {
//         qDebug() << targetPath << "still exists.";
//     } else {
//         qDebug() << targetPath << "was deleted.";
//     }

//     return 0;
// }


#include <QCoreApplication>
#include <QTemporaryFile>
#include <QDebug>
#include <QFile>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    QString targetPath = "output.txt";

    QTemporaryFile *tmpFile = new QTemporaryFile("input.txt");

    // tmpFile->setAutoRemove(true); // default

    if (!tmpFile->open()) {
        qCritical() << "Failed to open temporary file";
        delete tmpFile;
        return 1;
    }

    tmpFile->write("Temporary data.\n");
    tmpFile->flush();

    if (!tmpFile->rename(targetPath)) {
        qCritical() << "Rename failed";
        delete tmpFile;
        return 1;
    }

    // tmpFile->setAutoRemove(false);

    qDebug() << "Renamed to:" << targetPath;
    qDebug() << "AutoRemove is" << tmpFile->autoRemove();

    // delete tmpFile;

    if (QFile::exists(targetPath)) {
        qDebug() << targetPath << "still exists.";
    } else {
        qDebug() << targetPath << "was deleted.";
    }

    return 0;
}
