/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -l DBusFileDialogManager -i /data/home/lmh/0330/dde-file-manager/src/dde-desktop/dbus/filedialog/dbusfiledialogmanager.h -a filedialogmanager_adaptor.h: /data/home/lmh/0330/dde-file-manager/src/dde-desktop/dbus/filedialog/com.deepin.filemanager.filedialogmanager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef FILEDIALOGMANAGER_ADAPTOR_H
#define FILEDIALOGMANAGER_ADAPTOR_H

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
#include "dbusfiledialogmanager.h"
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface com.deepin.filemanager.filedialogmanager
 */
class FiledialogmanagerAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.deepin.filemanager.filedialogmanager")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.deepin.filemanager.filedialogmanager\">\n"
"    <method name=\"createDialog\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"key\"/>\n"
"      <arg direction=\"out\" type=\"o\" name=\"path\"/>\n"
"    </method>\n"
"    <method name=\"destroyDialog\">\n"
"      <arg direction=\"in\" type=\"o\" name=\"path\"/>\n"
"    </method>\n"
"    <method name=\"dialogs\">\n"
"      <arg direction=\"out\" type=\"ao\" name=\"dialogObjectList\"/>\n"
"    </method>\n"
"    <method name=\"errorString\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"error\"/>\n"
"    </method>\n"
"    <method name=\"isUseFileChooserDialog\">\n"
"      <arg direction=\"out\" type=\"b\" name=\"ok\"/>\n"
"    </method>\n"
"    <method name=\"canUseFileChooserDialog\">\n"
"      <arg direction=\"out\" type=\"b\" name=\"ok\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"group\"/>\n"
"      <arg direction=\"in\" type=\"s\" name=\"executableFileName\"/>\n"
"    </method>\n"
"    <method name=\"globPatternsForMime\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"mime\"/>\n"
"      <arg direction=\"out\" type=\"as\" name=\"patterns\"/>\n"
"    </method>\n"
"    <method name=\"monitorFiles\">\n"
"      <arg direction=\"out\" type=\"as\" name=\"files\"/>\n"
"    </method>\n"
"    <method name=\"showBluetoothTransDialog\">\n"
"      <arg direction=\"in\" type=\"s\" name=\"id\"/>\n"
"      <arg direction=\"in\" type=\"as\" name=\"URIs\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    FiledialogmanagerAdaptor(DBusFileDialogManager *parent);
    virtual ~FiledialogmanagerAdaptor();

    inline DBusFileDialogManager *parent() const
    { return static_cast<DBusFileDialogManager *>(QObject::parent()); }

public: // PROPERTIES
public Q_SLOTS: // METHODS
    bool canUseFileChooserDialog(const QString &group, const QString &executableFileName);
    QDBusObjectPath createDialog(const QString &key);
    void destroyDialog(const QDBusObjectPath &path);
    QList<QDBusObjectPath> dialogs();
    QString errorString();
    QStringList globPatternsForMime(const QString &mime);
    bool isUseFileChooserDialog();
    QStringList monitorFiles();
    void showBluetoothTransDialog(const QString &id, const QStringList &URIs);
Q_SIGNALS: // SIGNALS
};

#endif
