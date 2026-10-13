package vp;

import ip.s0;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g implements Function0 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19492d;

    /* renamed from: e, reason: collision with root package name */
    public final j f19493e;

    public /* synthetic */ g(j jVar, int i5) {
        this.f19492d = i5;
        this.f19493e = jVar;
    }

    @Override // kotlin.jvm.functions.Function0
    public final Object invoke() {
        switch (this.f19492d) {
            case 0:
                j jVar = this.f19493e;
                hq.b classId = oq.e.f(jVar);
                if (classId == null) {
                    return null;
                }
                ((up.a) jVar.f19497y.f7952d).f18987w.getClass();
                Intrinsics.checkNotNullParameter(classId, "classId");
                return null;
            case 1:
                j jVar2 = this.f19493e;
                op.n nVar = jVar2.E;
                ArrayList typeParameters = nVar.getTypeParameters();
                ArrayList arrayList = new ArrayList(kotlin.collections.d0.l(typeParameters, 10));
                Iterator it = typeParameters.iterator();
                while (it.hasNext()) {
                    op.b0 b0Var = (op.b0) it.next();
                    s0 a = ((up.e) jVar2.G.f7953e).a(b0Var);
                    if (a == null) {
                        throw new AssertionError("Parameter " + b0Var + " surely belongs to class " + nVar + ", so it must be resolved");
                    }
                    arrayList.add(a);
                }
                return arrayList;
            default:
                return ta.a.m(this.f19493e);
        }
    }
}
