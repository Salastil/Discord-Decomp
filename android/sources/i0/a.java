package i0;

import java.util.Iterator;
import java.util.Map;
import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class a extends Lambda implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ v f10378d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public a(v vVar) {
        super(1);
        this.f10378d = vVar;
    }

    /* JADX WARN: Type inference failed for: r0v8, types: [g0.t, i0.b] */
    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        v vVar;
        b childOwner = (b) obj;
        Intrinsics.checkNotNullParameter(childOwner, "childOwner");
        if (childOwner.i()) {
            if (childOwner.d().f10417b) {
                childOwner.h();
            }
            Iterator it = childOwner.d().f10421f.entrySet().iterator();
            while (true) {
                boolean hasNext = it.hasNext();
                vVar = this.f10378d;
                if (!hasNext) {
                    break;
                }
                Map.Entry entry = (Map.Entry) it.next();
                v.a(vVar, (g0.f) entry.getKey(), ((Number) entry.getValue()).intValue(), childOwner.b());
            }
            f0 f0Var = childOwner.b().G;
            Intrinsics.checkNotNull(f0Var);
            while (!Intrinsics.areEqual(f0Var, vVar.a.b())) {
                for (g0.f fVar : vVar.b(f0Var).keySet()) {
                    v.a(vVar, fVar, vVar.c(f0Var, fVar), f0Var);
                }
                f0Var = f0Var.G;
                Intrinsics.checkNotNull(f0Var);
            }
        }
        return Unit.a;
    }
}
