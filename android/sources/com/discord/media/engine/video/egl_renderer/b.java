package com.discord.media.engine.video.egl_renderer;

import com.discord.tti_manager.TTIModule;
import com.facebook.react.bridge.Promise;
import com.google.android.exoplayer2.analytics.AnalyticsListener$EventTime;
import dc.e;
import e4.c;
import hc.w;
import ic.u;
import ke.d0;

/* loaded from: classes.dex */
public final /* synthetic */ class b implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f4250d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ long f4251e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Object f4252i;

    public /* synthetic */ b(long j, Promise promise) {
        this.f4250d = 1;
        this.f4251e = j;
        this.f4252i = promise;
    }

    @Override // java.lang.Runnable
    public final void run() {
        int i5 = this.f4250d;
        long j = this.f4251e;
        Object obj = this.f4252i;
        switch (i5) {
            case 0:
                EglRenderer.init$lambda$10$lambda$9((EglRenderer) obj, j);
                break;
            case 1:
                TTIModule.yieldConfig$lambda$0(j, (Promise) obj);
                break;
            case 2:
                w wVar = (w) ((c) obj).f7940i;
                int i6 = d0.a;
                u uVar = (u) wVar.f9929d.f5368q;
                AnalyticsListener$EventTime j5 = uVar.j();
                uVar.k(j5, 1010, new e(j5, j));
                break;
            default:
                km.c.j((km.c) obj, j);
                break;
        }
    }

    public /* synthetic */ b(Object obj, long j, int i5) {
        this.f4250d = i5;
        this.f4252i = obj;
        this.f4251e = j;
    }
}
