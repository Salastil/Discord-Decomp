package m9;

import a3.h;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a {
    public final n9.a a;

    /* renamed from: b, reason: collision with root package name */
    public final v8.a f14411b;

    /* renamed from: c, reason: collision with root package name */
    public final ScheduledExecutorService f14412c;

    /* renamed from: e, reason: collision with root package name */
    public long f14414e;

    /* renamed from: f, reason: collision with root package name */
    public final n9.a f14415f;

    /* renamed from: d, reason: collision with root package name */
    public boolean f14413d = false;

    /* renamed from: g, reason: collision with root package name */
    public final h f14416g = new h(28, this);

    public a(n9.a aVar, n9.a aVar2, v8.a aVar3, ScheduledExecutorService scheduledExecutorService) {
        this.a = aVar;
        this.f14415f = aVar2;
        this.f14411b = aVar3;
        this.f14412c = scheduledExecutorService;
    }

    public final int a() {
        n9.a aVar = this.a;
        Intrinsics.checkNotNull(aVar);
        return aVar.f14962c.d();
    }

    public final int b(int i5) {
        n9.a aVar = this.a;
        Intrinsics.checkNotNull(aVar);
        return ((da.a) aVar.f14962c.f16831e).f7459e[i5];
    }

    public final int c() {
        n9.a aVar = this.a;
        Intrinsics.checkNotNull(aVar);
        return aVar.f14962c.e();
    }

    public final synchronized void d() {
        if (!this.f14413d) {
            this.f14413d = true;
            this.f14412c.schedule(this.f14416g, 1000L, TimeUnit.MILLISECONDS);
        }
    }
}
