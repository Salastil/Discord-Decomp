package com.google.android.material.timepicker;

import android.view.GestureDetector;
import android.view.MotionEvent;

/* loaded from: classes3.dex */
public final class k extends GestureDetector.SimpleOnGestureListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ TimePickerView f6168d;

    public k(TimePickerView timePickerView) {
        this.f6168d = timePickerView;
    }

    @Override // android.view.GestureDetector.SimpleOnGestureListener, android.view.GestureDetector.OnDoubleTapListener
    public final boolean onDoubleTap(MotionEvent motionEvent) {
        int i5 = TimePickerView.f6159e;
        this.f6168d.getClass();
        return false;
    }
}
