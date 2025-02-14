// Copyright (C) 2023 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only WITH Qt-GPL-exception-1.0

#pragma once

#include "../mcusupport_global.h"
#include "../settingshandler.h"

#include <QDialog>
#include <QPushButton>

namespace Ui {
class McuKitCreationDialog;
}

namespace McuSupport::Internal {

class McuKitCreationDialog : public QDialog
{
    Q_OBJECT

public:
    explicit McuKitCreationDialog(const MessagesList &messages,
                                  const SettingsHandler::Ptr &settingsHandler,
                                  McuPackagePtr qtMCUPackage,
                                  QWidget *parent = nullptr);
    ~McuKitCreationDialog();

private slots:
    void updateMessage(const int inc);

private:
    Ui::McuKitCreationDialog *ui;
    int m_currentIndex = -1;
    QPushButton *m_previousButton;
    QPushButton *m_nextButton;
    QPushButton *m_helpButton;
    QPushButton *m_fixButton;
    const MessagesList &m_messages;
};
} // namespace McuSupport::Internal
