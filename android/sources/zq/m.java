package zq;

import kotlin.jvm.internal.Intrinsics;
import yq.b1;
import yq.o0;
import yq.y;
import zo.c0;

/* loaded from: classes3.dex */
public final class m implements l {

    /* renamed from: c, reason: collision with root package name */
    public final kq.n f21397c;

    public m() {
        f kotlinTypeRefiner = f.a;
        Intrinsics.checkNotNullParameter(kotlinTypeRefiner, "kotlinTypeRefiner");
        e kotlinTypePreparator = e.a;
        Intrinsics.checkNotNullParameter(kotlinTypePreparator, "kotlinTypePreparator");
        kq.n nVar = new kq.n(kq.n.f13634d);
        Intrinsics.checkNotNullExpressionValue(nVar, "createWithTypeRefiner(...)");
        this.f21397c = nVar;
    }

    public final boolean a(y a, y b10) {
        Intrinsics.checkNotNullParameter(a, "a");
        Intrinsics.checkNotNullParameter(b10, "b");
        o0 s2 = c0.s(false, null, 6);
        b1 a10 = a.w0();
        b1 b11 = b10.w0();
        Intrinsics.checkNotNullParameter(s2, "<this>");
        Intrinsics.checkNotNullParameter(a10, "a");
        Intrinsics.checkNotNullParameter(b11, "b");
        return yq.f.g(s2, a10, b11);
    }

    public final boolean b(y subtype, y supertype) {
        Intrinsics.checkNotNullParameter(subtype, "subtype");
        Intrinsics.checkNotNullParameter(supertype, "supertype");
        o0 state = c0.s(true, null, 6);
        b1 subType = subtype.w0();
        b1 superType = supertype.w0();
        Intrinsics.checkNotNullParameter(state, "<this>");
        Intrinsics.checkNotNullParameter(subType, "subType");
        Intrinsics.checkNotNullParameter(superType, "superType");
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(subType, "subType");
        Intrinsics.checkNotNullParameter(superType, "superType");
        if (subType == superType) {
            return true;
        }
        state.b(subType, superType);
        return yq.f.e(state, subType, superType);
    }
}
