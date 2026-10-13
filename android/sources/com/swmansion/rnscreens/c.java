package com.swmansion.rnscreens;

import android.view.Choreographer;
import android.view.View;
import android.view.ViewGroup;

/* loaded from: classes3.dex */
public final class c implements Choreographer.FrameCallback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6729d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ ViewGroup f6730e;

    public /* synthetic */ c(ViewGroup viewGroup, int i5) {
        this.f6729d = i5;
        this.f6730e = viewGroup;
    }

    @Override // android.view.Choreographer.FrameCallback
    public final void doFrame(long j) {
        switch (this.f6729d) {
            case 0:
                d dVar = (d) this.f6730e;
                dVar.f6738z0 = false;
                dVar.measure(View.MeasureSpec.makeMeasureSpec(dVar.getWidth(), Integer.MIN_VALUE), View.MeasureSpec.makeMeasureSpec(dVar.getHeight(), Integer.MIN_VALUE));
                dVar.layout(dVar.getLeft(), dVar.getTop(), dVar.getRight(), dVar.getBottom());
                break;
            default:
                ScreenContainer screenContainer = (ScreenContainer) this.f6730e;
                screenContainer.isLayoutEnqueued = false;
                screenContainer.measure(View.MeasureSpec.makeMeasureSpec(screenContainer.getWidth(), 1073741824), View.MeasureSpec.makeMeasureSpec(screenContainer.getHeight(), 1073741824));
                screenContainer.layout(screenContainer.getLeft(), screenContainer.getTop(), screenContainer.getRight(), screenContainer.getBottom());
                break;
        }
    }
}
