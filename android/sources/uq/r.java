package uq;

import cq.i0;
import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.collections.m0;
import kotlin.jvm.functions.Function0;

/* loaded from: classes3.dex */
public final class r implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final t f19053d;

    /* renamed from: e, reason: collision with root package name */
    public final boolean f19054e;

    /* renamed from: i, reason: collision with root package name */
    public final i0 f19055i;

    public r(t tVar, boolean z5, i0 i0Var) {
        this.f19053d = tVar;
        this.f19054e = z5;
        this.f19055i = i0Var;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        List list;
        t tVar = this.f19053d;
        cc.k kVar = tVar.a;
        ip.l lVar = (ip.l) kVar.f3400v;
        j jVar = (j) kVar.f3398e;
        a3.r a = tVar.a(lVar);
        if (a != null) {
            boolean z5 = this.f19054e;
            i0 i0Var = this.f19055i;
            list = z5 ? CollectionsKt.i0(jVar.f19019e.t(a, i0Var)) : CollectionsKt.i0(jVar.f19019e.l(a, i0Var));
        } else {
            list = null;
        }
        return list == null ? m0.f13512d : list;
    }
}
