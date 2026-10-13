package er;

import kotlin.jvm.internal.Intrinsics;
import yq.c1;
import yq.h0;
import yq.p0;
import yq.q0;
import yq.s0;

/* loaded from: classes3.dex */
public final class c extends q0 {
    @Override // yq.q0
    public final s0 h(p0 key) {
        Intrinsics.checkNotNullParameter(key, "key");
        lq.b bVar = key instanceof lq.b ? (lq.b) key : null;
        if (bVar == null) {
            return null;
        }
        if (bVar.d().c()) {
            return new h0(bVar.d().b(), c1.f21015w);
        }
        return bVar.d();
    }
}
