package c4;

import android.content.Context;
import android.net.ConnectivityManager;
import kotlin.jvm.internal.Intrinsics;
import v3.p;

/* loaded from: classes.dex */
public final class i extends f {

    /* renamed from: f, reason: collision with root package name */
    public final ConnectivityManager f3309f;

    /* renamed from: g, reason: collision with root package name */
    public final h f3310g;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(Context context, h4.b taskExecutor) {
        super(context, taskExecutor);
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(taskExecutor, "taskExecutor");
        Object systemService = this.f3304b.getSystemService("connectivity");
        Intrinsics.checkNotNull(systemService, "null cannot be cast to non-null type android.net.ConnectivityManager");
        this.f3309f = (ConnectivityManager) systemService;
        this.f3310g = new h(0, this);
    }

    @Override // c4.f
    public final Object a() {
        return j.a(this.f3309f);
    }

    @Override // c4.f
    public final void c() {
        try {
            p.d().a(j.a, "Registering network callback");
            f4.i.a(this.f3309f, this.f3310g);
        } catch (IllegalArgumentException e9) {
            p.d().c(j.a, "Received exception while registering network callback", e9);
        } catch (SecurityException e10) {
            p.d().c(j.a, "Received exception while registering network callback", e10);
        }
    }

    @Override // c4.f
    public final void d() {
        try {
            p.d().a(j.a, "Unregistering network callback");
            f4.g.c(this.f3309f, this.f3310g);
        } catch (IllegalArgumentException e9) {
            p.d().c(j.a, "Received exception while unregistering network callback", e9);
        } catch (SecurityException e10) {
            p.d().c(j.a, "Received exception while unregistering network callback", e10);
        }
    }
}
