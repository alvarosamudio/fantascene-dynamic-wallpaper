/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c AccessControlInterface -p dbusinterface/accesscontrol_interface accesscontrol.xml
 *
 * qdbusxml2cpp is Copyright (C) 2017 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef ACCESSCONTROL_INTERFACE_H
#define ACCESSCONTROL_INTERFACE_H

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface com.deepin.filemanager.daemon.AccessControlManager
 */
class AccessControlInterface: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticInterfaceName()
    { return "com.deepin.filemanager.daemon.AccessControlManager"; }

public:
    AccessControlInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent = nullptr);

    ~AccessControlInterface();

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<QVariantList> QueryAccessPolicy()
    {
        QList<QVariant> argumentList;
        return asyncCallWithArgumentList(QStringLiteral("QueryAccessPolicy"), argumentList);
    }

    inline QDBusPendingReply<QString> SetAccessPolicy(const QVariantMap &policy)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(policy);
        return asyncCallWithArgumentList(QStringLiteral("SetAccessPolicy"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void AccessPolicySetFinished(const QVariantMap &policy);
    void DeviceAccessPolicyChanged(const QVariantList &policy);
};

namespace com {
  namespace deepin {
    namespace filemanager {
      namespace daemon {
        typedef ::AccessControlInterface AccessControlManager;
      }
    }
  }
}
#endif
