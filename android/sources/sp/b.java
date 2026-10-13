package sp;

import bs.q;
import ip.o0;
import ip.p0;
import java.util.Map;
import kotlin.collections.CollectionsKt;
import kotlin.collections.v0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import xq.l;
import xq.o;
import yq.c0;
import yq.y;

/* loaded from: classes3.dex */
public class b implements tp.g {

    /* renamed from: e, reason: collision with root package name */
    public static final /* synthetic */ KProperty[] f18076e = {com.discord.chat.bridge.botuikit.a.o(b.class, "type", "getType()Lorg/jetbrains/kotlin/types/SimpleType;", 0)};
    public final hq.c a;

    /* renamed from: b, reason: collision with root package name */
    public final o0 f18077b;

    /* renamed from: c, reason: collision with root package name */
    public final xq.i f18078c;

    /* renamed from: d, reason: collision with root package name */
    public final yp.a f18079d;

    public b(e4.i c6, op.d dVar, hq.c fqName) {
        o0 o0Var;
        Intrinsics.checkNotNullParameter(c6, "c");
        Intrinsics.checkNotNullParameter(fqName, "fqName");
        this.a = fqName;
        if (dVar != null) {
            o0Var = ((up.a) c6.f7952d).j.b(dVar);
        } else {
            p0 NO_SOURCE = o0.f12151g;
            Intrinsics.checkNotNullExpressionValue(NO_SOURCE, "NO_SOURCE");
            o0Var = NO_SOURCE;
        }
        this.f18077b = o0Var;
        o oVar = ((up.a) c6.f7952d).a;
        q qVar = new q(11, c6, this);
        l lVar = (l) oVar;
        lVar.getClass();
        this.f18078c = new xq.i(lVar, qVar);
        this.f18079d = dVar != null ? (yp.a) CollectionsKt.L(dVar.b()) : null;
    }

    @Override // jp.b
    public final hq.c a() {
        return this.a;
    }

    @Override // jp.b
    public Map b() {
        return v0.d();
    }

    @Override // jp.b
    public final o0 d() {
        return this.f18077b;
    }

    @Override // jp.b
    public final y getType() {
        return (c0) ys.d.O(this.f18078c, f18076e[0]);
    }
}
