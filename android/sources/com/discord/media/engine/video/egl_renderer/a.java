package com.discord.media.engine.video.egl_renderer;

/* loaded from: classes.dex */
public final /* synthetic */ class a implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4248d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ EglRenderer f4249e;

    public /* synthetic */ a(EglRenderer eglRenderer, int i5) {
        this.f4248d = i5;
        this.f4249e = eglRenderer;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f4248d) {
            case 0:
                this.f4249e.renderFrameOnRenderThread();
                break;
            default:
                EglRenderer.logStatisticsRunnable$lambda$2(this.f4249e);
                break;
        }
    }
}
