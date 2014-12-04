/*
 * LK8000 Tactical Flight Computer -  WWW.LK8000.IT
 * Released under GNU/GPL License v.2
 * See CREDITS.TXT file for authors and copyrights
 *
 * File:   WndPaint.h
 * Author: Bruno de Lacheisserie
 *
 * Created on 17 novembre 2014, 23:21
 */

#ifndef WNDPAINT_H
#define	WNDPAINT_H
#include "Window.h"

class WndPaint : public Window {
public:
    WndPaint() : Window() { }

protected:
    virtual bool OnPaint(LKSurface& Surface, const RECT& Rect) = 0;

};

#endif	/* WNDPAINT_H */

