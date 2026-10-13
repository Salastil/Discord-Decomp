package com.swmansion.rnscreens;

import com.facebook.react.views.view.ReactViewGroup;

/* loaded from: classes3.dex */
public final class ScreenContentWrapper extends ReactViewGroup {

    /* renamed from: d, reason: collision with root package name */
    public p f6698d;

    public final p getDelegate$react_native_screens_release() {
        return this.f6698d;
    }

    @Override // com.facebook.react.views.view.ReactViewGroup, android.view.ViewGroup, android.view.View
    public final void onLayout(boolean z5, int i5, int i6, int i10, int i11) {
        p pVar = this.f6698d;
        if (pVar != null) {
            pVar.onContentWrapperLayout(z5, i5, i6, i10, i11);
        }
    }

    public final void setDelegate$react_native_screens_release(p pVar) {
        this.f6698d = pVar;
    }
}
