package kq;

import kotlin.jvm.functions.Function2;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class b implements Function2 {

    /* renamed from: d, reason: collision with root package name */
    public final ip.b f13616d;

    /* renamed from: e, reason: collision with root package name */
    public final ip.b f13617e;

    public b(ip.b bVar, ip.b bVar2) {
        this.f13616d = bVar;
        this.f13617e = bVar2;
    }

    @Override // kotlin.jvm.functions.Function2
    public final Object invoke(Object obj, Object obj2) {
        return Boolean.valueOf(Intrinsics.areEqual((ip.l) obj, this.f13616d) && Intrinsics.areEqual((ip.l) obj2, this.f13617e));
    }
}
