#pragma once

#include <QDialog>
#include <QtGui/QDockWidget>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QWidget>
#include <QtGui>
#include <iostream>

#include "ParameterMgr.h"
#include "UI/dlg_normal_para.h"
#include "UI/dlg_skeleton_para.h"
#include "UI/dlg_upsampling_para.h"
#include "UI/dlg_wlop_para.h"

#include "GLArea.h"

using namespace std;

class StdParaDlg : public QDockWidget
{
    Q_OBJECT
  public:
    StdParaDlg(ParameterMgr* _paras, GLArea* _area, QWidget* parent = 0);
    ~StdParaDlg();

    bool showWlopParaDialog();
    bool showNormalParaDlg();
    bool showSkeletonParaDlg();
    bool showUpsamplingParaDlg();

  private:
    void init();
    void createFrame();
    void loadWlopFrame();
    void loadNormalFrame();
    void loadSkeletonFrame();
    void loadUpsamplingFrame();

  private slots:
    void closeClick();

  private:
    WlopParaDlg* para_wlop;
    NormalParaDlg* para_normal;
    SkeletonParaDlg* para_skeleton;
    UpsamplingParaDlg* para_upsampling;

    ParameterMgr* paras;

    QFrame* mainFrame;
    GLArea* gla;
};
