package vp;

import java.util.Collection;
import java.util.LinkedHashSet;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c0 extends ir.n {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ ip.f f19472b;

    /* renamed from: c, reason: collision with root package name */
    public final /* synthetic */ LinkedHashSet f19473c;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ Function1 f19474d;

    public c0(ip.f fVar, LinkedHashSet linkedHashSet, Function1 function1) {
        this.f19472b = fVar;
        this.f19473c = linkedHashSet;
        this.f19474d = function1;
    }

    @Override // ir.n
    public final boolean d(Object obj) {
        ip.f current = (ip.f) obj;
        Intrinsics.checkNotNullParameter(current, "current");
        if (current == this.f19472b) {
            return true;
        }
        rq.o H = current.H();
        Intrinsics.checkNotNullExpressionValue(H, "getStaticScope(...)");
        if (!(H instanceof e0)) {
            return true;
        }
        this.f19473c.addAll((Collection) this.f19474d.invoke(H));
        return false;
    }

    @Override // ir.n
    public final /* bridge */ /* synthetic */ Object k() {
        return Unit.a;
    }
}
