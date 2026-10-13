package rq;

import kotlin.collections.c0;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class r implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f17558d;

    /* renamed from: e, reason: collision with root package name */
    public final s f17559e;

    public /* synthetic */ r(s sVar, int i5) {
        this.f17558d = i5;
        this.f17559e = sVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f17558d) {
            case 0:
                wq.i iVar = this.f17559e.f17561b;
                return c0.g(m3.n.A(iVar), m3.n.B(iVar));
            default:
                s sVar = this.f17559e;
                return sVar.f17562c ? c0.h(m3.n.z(sVar.f17561b)) : m0.f13512d;
        }
    }
}
