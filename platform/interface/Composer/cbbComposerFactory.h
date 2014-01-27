#pragma once

#include <QtCore>

#include <cbbComposerExport.h>
#include <dtkComposer/dtkComposerFactory.h>

class cbbComposerFactoryPrivate;

class CBBCOMPOSER_EXPORT cbbComposerFactory: public dtkComposerFactory {
    Q_OBJECT

public slots:
    dtkComposerNode *create(const QString& type);

public:
     cbbComposerFactory();
    ~cbbComposerFactory();

    QList<QString> nodes();
    QHash<QString, QString> descriptions();
    QHash<QString, QStringList> tags();
    QHash<QString, QString> types();

private:
    cbbComposerFactoryPrivate *d;
};
