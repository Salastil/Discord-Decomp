package com.discord.tti_manager;

import android.view.Choreographer;

/* loaded from: classes3.dex */
public final /* synthetic */ class a implements Choreographer.FrameCallback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4388d;

    public /* synthetic */ a(int i5) {
        this.f4388d = i5;
    }

    @Override // android.view.Choreographer.FrameCallback
    public final void doFrame(long j) {
        switch (this.f4388d) {
            case 0:
                TTIManagerModule.freezeNavigationTTIDebuggerAfterNextFrame$lambda$7$lambda$6(j);
                break;
            default:
                TTIManagerModule.freezeNavigationTTIDebuggerAfterNextFrame$lambda$7$lambda$6$lambda$5(j);
                break;
        }
    }
}
