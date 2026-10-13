package qr;

import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import nr.i0;

/* loaded from: classes3.dex */
public final class v implements i0 {

    /* renamed from: d, reason: collision with root package name */
    public final x f17033d;

    /* renamed from: e, reason: collision with root package name */
    public final long f17034e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f17035i;

    /* renamed from: v, reason: collision with root package name */
    public final nr.j f17036v;

    public v(x xVar, long j, Object obj, nr.j jVar) {
        this.f17033d = xVar;
        this.f17034e = j;
        this.f17035i = obj;
        this.f17036v = jVar;
    }

    @Override // nr.i0
    public final void dispose() {
        x xVar = this.f17033d;
        synchronized (xVar) {
            if (this.f17034e < xVar.o()) {
                return;
            }
            Object[] objArr = xVar.E;
            Intrinsics.checkNotNull(objArr);
            if (y.c(objArr, this.f17034e) != this) {
                return;
            }
            y.d(objArr, this.f17034e, y.a);
            xVar.j();
            Unit unit = Unit.a;
        }
    }
}
