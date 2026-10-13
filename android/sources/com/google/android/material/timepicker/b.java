package com.google.android.material.timepicker;

import android.view.ViewTreeObserver;

/* loaded from: classes3.dex */
public final class b implements ViewTreeObserver.OnPreDrawListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ ClockFaceView f6162d;

    public b(ClockFaceView clockFaceView) {
        this.f6162d = clockFaceView;
    }

    @Override // android.view.ViewTreeObserver.OnPreDrawListener
    public final boolean onPreDraw() {
        ClockFaceView clockFaceView = this.f6162d;
        if (!clockFaceView.isShown()) {
            return true;
        }
        clockFaceView.getViewTreeObserver().removeOnPreDrawListener(this);
        int height = ((clockFaceView.getHeight() / 2) - clockFaceView.f6148v.f6155v) - clockFaceView.I;
        if (height != clockFaceView.f6165e) {
            clockFaceView.f6165e = height;
            clockFaceView.c();
            ClockHandView clockHandView = clockFaceView.f6148v;
            clockHandView.I = clockFaceView.f6165e;
            clockHandView.invalidate();
        }
        return true;
    }
}
