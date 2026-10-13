package mq;

import ip.a0;
import kotlin.Pair;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;

/* loaded from: classes3.dex */
public final class i extends g {

    /* renamed from: b, reason: collision with root package name */
    public final hq.b f14576b;

    /* renamed from: c, reason: collision with root package name */
    public final hq.e f14577c;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public i(hq.b enumClassId, hq.e enumEntryName) {
        super(new Pair(enumClassId, enumEntryName));
        Intrinsics.checkNotNullParameter(enumClassId, "enumClassId");
        Intrinsics.checkNotNullParameter(enumEntryName, "enumEntryName");
        this.f14576b = enumClassId;
        this.f14577c = enumEntryName;
    }

    @Override // mq.g
    public final yq.y a(a0 module) {
        c0 k;
        Intrinsics.checkNotNullParameter(module, "module");
        hq.b bVar = this.f14576b;
        ip.f j = nf.e.j(module, bVar);
        if (j != null) {
            int i5 = kq.e.a;
            if (!kq.e.n(j, ip.g.f12140i)) {
                j = null;
            }
            if (j != null && (k = j.k()) != null) {
                return k;
            }
        }
        return ar.l.c(ar.k.X, bVar.toString(), this.f14577c.f10209d);
    }

    @Override // mq.g
    public final String toString() {
        StringBuilder sb2 = new StringBuilder();
        sb2.append(this.f14576b.f());
        sb2.append('.');
        sb2.append(this.f14577c);
        return sb2.toString();
    }
}
