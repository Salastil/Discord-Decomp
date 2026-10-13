package com.swmansion.reanimated;

import android.view.ViewTreeObserver;
import com.discord.view.ReactScrollViewOverride;

/* loaded from: classes3.dex */
public final /* synthetic */ class b implements ViewTreeObserver.OnDrawListener {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f6664d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f6665e;

    public /* synthetic */ b(int i5, Object obj) {
        this.f6664d = i5;
        this.f6665e = obj;
    }

    @Override // android.view.ViewTreeObserver.OnDrawListener
    public final void onDraw() {
        switch (this.f6664d) {
            case 0:
                ((DrawPassDetector) this.f6665e).lambda$new$1();
                break;
            default:
                ((ReactScrollViewOverride) this.f6665e).isDrawing = true;
                break;
        }
    }
}
