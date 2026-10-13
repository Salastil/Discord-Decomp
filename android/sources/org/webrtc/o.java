package org.webrtc;

import android.view.Choreographer;

/* loaded from: classes4.dex */
public final /* synthetic */ class o implements Choreographer.FrameCallback {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ RenderSynchronizer f16232d;

    public /* synthetic */ o(RenderSynchronizer renderSynchronizer) {
        this.f16232d = renderSynchronizer;
    }

    @Override // android.view.Choreographer.FrameCallback
    public final void doFrame(long j) {
        this.f16232d.onDisplayRefreshCycleBegin(j);
    }
}
