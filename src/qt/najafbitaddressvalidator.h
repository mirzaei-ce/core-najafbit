// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef NAJAFBIT_QT_NAJAFBITADDRESSVALIDATOR_H
#define NAJAFBIT_QT_NAJAFBITADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class NajafbitAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit NajafbitAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** Najafbit address widget validator, checks for a valid najafbit address.
 */
class NajafbitAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit NajafbitAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // NAJAFBIT_QT_NAJAFBITADDRESSVALIDATOR_H
