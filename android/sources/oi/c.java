package oi;

import java.util.concurrent.ScheduledFuture;
import java.util.concurrent.TimeUnit;

/* loaded from: classes3.dex */
public final /* synthetic */ class c implements f {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15979d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ e f15980e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ Runnable f15981i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ long f15982v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ long f15983w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ TimeUnit f15984x;

    public /* synthetic */ c(e eVar, Runnable runnable, long j, long j5, TimeUnit timeUnit, int i5) {
        this.f15979d = i5;
        this.f15980e = eVar;
        this.f15981i = runnable;
        this.f15982v = j;
        this.f15983w = j5;
        this.f15984x = timeUnit;
    }

    @Override // oi.f
    public final ScheduledFuture a(u4.b bVar) {
        switch (this.f15979d) {
            case 0:
                e eVar = this.f15980e;
                return eVar.f15990e.scheduleAtFixedRate(new d(eVar, this.f15981i, bVar, 0), this.f15982v, this.f15983w, this.f15984x);
            default:
                e eVar2 = this.f15980e;
                return eVar2.f15990e.scheduleWithFixedDelay(new d(eVar2, this.f15981i, bVar, 2), this.f15982v, this.f15983w, this.f15984x);
        }
    }
}
