package vp;

import ip.m0;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Ref;

/* loaded from: classes3.dex */
public final class x implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19532d;

    /* renamed from: e, reason: collision with root package name */
    public final a0 f19533e;

    /* renamed from: i, reason: collision with root package name */
    public final op.t f19534i;

    /* renamed from: v, reason: collision with root package name */
    public final Ref.ObjectRef f19535v;

    public /* synthetic */ x(a0 a0Var, op.t tVar, Ref.ObjectRef objectRef, int i5) {
        this.f19532d = i5;
        this.f19533e = a0Var;
        this.f19534i = tVar;
        this.f19535v = objectRef;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19532d) {
            case 0:
                a0 a0Var = this.f19533e;
                xq.o oVar = ((up.a) a0Var.f19462b.f7952d).a;
                x xVar = new x(a0Var, this.f19534i, this.f19535v, 1);
                xq.l lVar = (xq.l) oVar;
                lVar.getClass();
                return new xq.h(lVar, xVar);
            default:
                sp.h hVar = ((up.a) this.f19533e.f19462b.f7952d).f18974h;
                m0 descriptor = (m0) this.f19535v.element;
                hVar.getClass();
                op.t field = this.f19534i;
                Intrinsics.checkNotNullParameter(field, "field");
                Intrinsics.checkNotNullParameter(descriptor, "descriptor");
                return null;
        }
    }
}
