package yq;

import java.util.AbstractCollection;
import java.util.Iterator;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final AbstractCollection f21019d;

    /* renamed from: e, reason: collision with root package name */
    public final o0 f21020e;

    /* renamed from: i, reason: collision with root package name */
    public final zq.b f21021i;

    /* renamed from: v, reason: collision with root package name */
    public final cr.e f21022v;

    public d(AbstractCollection abstractCollection, o0 o0Var, zq.b bVar, cr.e eVar) {
        this.f21019d = abstractCollection;
        this.f21020e = o0Var;
        this.f21021i = bVar;
        this.f21022v = eVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        l0 runForkingPoint = (l0) obj;
        Intrinsics.checkNotNullParameter(runForkingPoint, "$this$runForkingPoint");
        Iterator it = this.f21019d.iterator();
        while (it.hasNext()) {
            e block = new e(this.f21020e, this.f21021i, (cr.e) it.next(), this.f21022v);
            runForkingPoint.getClass();
            Intrinsics.checkNotNullParameter(block, "block");
            if (!runForkingPoint.a) {
                runForkingPoint.a = ((Boolean) block.invoke()).booleanValue();
            }
        }
        return Unit.a;
    }
}
