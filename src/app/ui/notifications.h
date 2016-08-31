// Aseprite
// Copyright (C) 2001-2015  David Capello
//
// This program is distributed under the terms of
// the End-User License Agreement for Aseprite.

#ifndef APP_UI_NOTIFICATIONS_H_INCLUDED
#define APP_UI_NOTIFICATIONS_H_INCLUDED
#pragma once

#include "ui/button.h"
#include "ui/menu.h"

namespace app {
  namespace skin {
    class Style;
  }

  class INotificationDelegate;

  class Notifications : public ui::Button {
  public:
    Notifications();

    void addLink(INotificationDelegate* del);

  protected:
    void onSizeHint(ui::SizeHintEvent& ev) override;
    void onPaint(ui::PaintEvent& ev) override;
    void onClick(ui::Event& ev) override;

  private:
    skin::Style* m_flagStyle;
    bool m_withNotifications;
    ui::Menu m_popup;
  };

} // namespace app

#endif
