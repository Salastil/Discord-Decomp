package lp;

import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;

/* loaded from: classes3.dex */
public final class w extends l implements ip.j0 {
    public static final /* synthetic */ KProperty[] F = {com.discord.chat.bridge.botuikit.a.o(w.class, "fragments", "getFragments()Ljava/util/List;", 0), com.discord.chat.bridge.botuikit.a.o(w.class, "empty", "getEmpty()Z", 0)};
    public final rq.k E;

    /* renamed from: v, reason: collision with root package name */
    public final a0 f14193v;

    /* renamed from: w, reason: collision with root package name */
    public final hq.c f14194w;

    /* renamed from: x, reason: collision with root package name */
    public final xq.i f14195x;

    /* renamed from: y, reason: collision with root package name */
    public final xq.i f14196y;

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public w(a0 module, hq.c fqName, xq.l storageManager) {
        super(jp.g.a, r0.c() ? hq.d.f10205e : r0.f());
        Intrinsics.checkNotNullParameter(module, "module");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        Intrinsics.checkNotNullParameter(storageManager, "storageManager");
        hq.d dVar = fqName.a;
        this.f14193v = module;
        this.f14194w = fqName;
        v vVar = new v(this, 0);
        storageManager.getClass();
        this.f14195x = new xq.i(storageManager, vVar);
        this.f14196y = new xq.i(storageManager, new v(this, 1));
        this.E = new rq.k(storageManager, new v(this, 2));
    }

    @Override // ip.l
    public final Object e0(ip.n visitor, Object obj) {
        Intrinsics.checkNotNullParameter(visitor, "visitor");
        StringBuilder builder = (StringBuilder) obj;
        Intrinsics.checkNotNullParameter(this, "descriptor");
        Intrinsics.checkNotNullParameter(builder, "builder");
        jq.h hVar = (jq.h) ((ha.l) visitor).f9613d;
        hVar.getClass();
        builder.append(hVar.I("package"));
        String G = hVar.G(this.f14194w.a);
        if (G.length() > 0) {
            builder.append(" ");
            builder.append(G);
        }
        if (hVar.f13052d.n()) {
            builder.append(" in context of ");
            hVar.P(this.f14193v, builder, false);
        }
        return Unit.a;
    }

    public final boolean equals(Object obj) {
        ip.j0 j0Var = obj instanceof ip.j0 ? (ip.j0) obj : null;
        if (j0Var == null) {
            return false;
        }
        w wVar = (w) j0Var;
        return Intrinsics.areEqual(this.f14194w, wVar.f14194w) && Intrinsics.areEqual(this.f14193v, wVar.f14193v);
    }

    @Override // ip.l
    public final ip.l h() {
        hq.c cVar = this.f14194w;
        if (cVar.a.c()) {
            return null;
        }
        return this.f14193v.D(cVar.b());
    }

    public final int hashCode() {
        return this.f14194w.hashCode() + (this.f14193v.hashCode() * 31);
    }
}
