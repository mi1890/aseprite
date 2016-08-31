// Aseprite
// Copyright (C) 2001-2015  David Capello
//
// This program is distributed under the terms of
// the End-User License Agreement for Aseprite.

#ifndef APP_CMD_SET_FRAME_TAG_ANIDIR_H_INCLUDED
#define APP_CMD_SET_FRAME_TAG_ANIDIR_H_INCLUDED
#pragma once

#include "app/cmd.h"
#include "app/cmd/with_frame_tag.h"
#include "doc/anidir.h"

namespace app {
namespace cmd {
  using namespace doc;

  class SetFrameTagAniDir : public Cmd
                          , public WithFrameTag {
  public:
    SetFrameTagAniDir(FrameTag* tag, doc::AniDir anidir);

  protected:
    void onExecute() override;
    void onUndo() override;
    size_t onMemSize() const override {
      return sizeof(*this);
    }

  private:
    doc::AniDir m_oldAniDir;
    doc::AniDir m_newAniDir;
  };

} // namespace cmd
} // namespace app

#endif
