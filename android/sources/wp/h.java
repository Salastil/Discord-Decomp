package wp;

import ip.i;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import kotlin.Pair;
import kotlin.collections.CollectionsKt;
import kotlin.collections.b0;
import kotlin.collections.d0;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;
import rq.o;
import yq.b1;
import yq.c0;
import yq.k0;
import yq.s;
import yq.s0;
import yq.y;

/* loaded from: classes3.dex */
public final class h extends s {
    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public h(c0 lowerBound, c0 upperBound) {
        super(lowerBound, upperBound);
        Intrinsics.checkNotNullParameter(lowerBound, "lowerBound");
        Intrinsics.checkNotNullParameter(upperBound, "upperBound");
        zq.d.a.b(lowerBound, upperBound);
    }

    public static final ArrayList D0(jq.h hVar, y yVar) {
        List<s0> l02 = yVar.l0();
        ArrayList arrayList = new ArrayList(d0.l(l02, 10));
        for (s0 typeProjection : l02) {
            Intrinsics.checkNotNullParameter(typeProjection, "typeProjection");
            StringBuilder sb2 = new StringBuilder();
            CollectionsKt.N(b0.c(typeProjection), sb2, ", ", null, null, new jq.g(hVar, 0), 60);
            arrayList.add(sb2.toString());
        }
        return arrayList;
    }

    public static final String E0(String str, String str2) {
        if (!StringsKt.E(str, '<')) {
            return str;
        }
        return StringsKt.X(str, '<') + '<' + str2 + '>' + StringsKt.W('>', str, str);
    }

    @Override // yq.s
    public final c0 A0() {
        return this.f21068e;
    }

    @Override // yq.s
    public final String B0(jq.h renderer, jq.h options) {
        Intrinsics.checkNotNullParameter(renderer, "renderer");
        Intrinsics.checkNotNullParameter(options, "options");
        c0 c0Var = this.f21068e;
        String X = renderer.X(c0Var);
        c0 c0Var2 = this.f21069i;
        String X2 = renderer.X(c0Var2);
        if (options.f13052d.n()) {
            return "raw (" + X + ".." + X2 + ')';
        }
        if (c0Var2.l0().isEmpty()) {
            return renderer.E(X, X2, com.facebook.imagepipeline.nativecode.c.v(this));
        }
        ArrayList D0 = D0(renderer, c0Var);
        ArrayList D02 = D0(renderer, c0Var2);
        String O = CollectionsKt.O(D0, ", ", null, null, g.f19991d, 30);
        ArrayList n02 = CollectionsKt.n0(D0, D02);
        if (!n02.isEmpty()) {
            Iterator it = n02.iterator();
            while (it.hasNext()) {
                Pair pair = (Pair) it.next();
                String str = (String) pair.f13474d;
                String str2 = (String) pair.f13475e;
                if (!Intrinsics.areEqual(str, StringsKt.N(str2, "out ")) && !Intrinsics.areEqual(str2, "*")) {
                    break;
                }
            }
        }
        X2 = E0(X2, O);
        String E0 = E0(X, O);
        return Intrinsics.areEqual(E0, X2) ? E0 : renderer.E(E0, X2, com.facebook.imagepipeline.nativecode.c.v(this));
    }

    @Override // yq.b1
    /* renamed from: C0, reason: merged with bridge method [inline-methods] */
    public final s y0(zq.f kotlinTypeRefiner) {
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        kotlinTypeRefiner.getClass();
        c0 type = this.f21068e;
        Intrinsics.checkNotNullParameter(type, "type");
        Intrinsics.checkNotNull(type, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        c0 type2 = this.f21069i;
        Intrinsics.checkNotNullParameter(type2, "type");
        Intrinsics.checkNotNull(type2, "null cannot be cast to non-null type org.jetbrains.kotlin.types.SimpleType");
        return new h(type, type2);
    }

    @Override // yq.s, yq.y
    public final o N() {
        i a = r0().a();
        ip.f fVar = a instanceof ip.f ? (ip.f) a : null;
        if (fVar != null) {
            o y5 = fVar.y(new f());
            Intrinsics.checkNotNullExpressionValue(y5, "getMemberScope(...)");
            return y5;
        }
        throw new IllegalStateException(("Incorrect classifier: " + r0().a()).toString());
    }

    @Override // yq.b1
    public final b1 x0(boolean z5) {
        return new h(this.f21068e.x0(z5), this.f21069i.x0(z5));
    }

    @Override // yq.b1
    public final b1 z0(k0 newAttributes) {
        Intrinsics.checkNotNullParameter(newAttributes, "newAttributes");
        return new h(this.f21068e.z0(newAttributes), this.f21069i.z0(newAttributes));
    }
}
