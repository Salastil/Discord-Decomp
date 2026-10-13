package rq;

import a5.k0;
import java.util.ArrayList;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g extends k0 {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ArrayList f17542b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ h f17543c;

    public g(ArrayList arrayList, h hVar) {
        this.f17542b = arrayList;
        this.f17543c = hVar;
    }

    @Override // a5.k0
    public final void f(ip.d fakeOverride) {
        Intrinsics.checkNotNullParameter(fakeOverride, "fakeOverride");
        kq.n.r(fakeOverride, null);
        this.f17542b.add(fakeOverride);
    }

    @Override // a5.k0
    public final void o(ip.d fromSuper, ip.d fromCurrent) {
        Intrinsics.checkNotNullParameter(fromSuper, "fromSuper");
        Intrinsics.checkNotNullParameter(fromCurrent, "fromCurrent");
        throw new IllegalStateException(("Conflict in scope of " + this.f17543c.f17545b + ": " + fromSuper + " vs " + fromCurrent).toString());
    }
}
