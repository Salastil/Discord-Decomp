package lp;

import java.util.Collection;
import java.util.List;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class d implements yq.p0 {
    public final /* synthetic */ e a;

    public d(e eVar) {
        this.a = eVar;
    }

    @Override // yq.p0
    public final ip.i a() {
        return this.a;
    }

    @Override // yq.p0
    public final Collection b() {
        Collection b10 = ((wq.t) this.a).D0().r0().b();
        Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
        return b10;
    }

    @Override // yq.p0
    public final boolean c() {
        return true;
    }

    @Override // yq.p0
    public final fp.i g() {
        return oq.e.e(this.a);
    }

    @Override // yq.p0
    public final List getParameters() {
        List list = ((wq.t) this.a).O;
        if (list != null) {
            return list;
        }
        Intrinsics.throwUninitializedPropertyAccessException("typeConstructorParameters");
        return null;
    }

    public final String toString() {
        return "[typealias " + this.a.getName().b() + ']';
    }
}
