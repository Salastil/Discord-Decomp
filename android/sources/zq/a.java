package zq;

import kotlin.jvm.internal.Intrinsics;
import yq.c0;
import yq.c1;
import yq.o0;
import yq.w0;
import yq.y;

/* loaded from: classes3.dex */
public final class a extends yq.c {
    public final /* synthetic */ b a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ w0 f21382b;

    public a(b bVar, w0 w0Var) {
        this.a = bVar;
        this.f21382b = w0Var;
    }

    @Override // yq.c
    public final cr.e D(o0 state, cr.d type) {
        Intrinsics.checkNotNullParameter(state, "state");
        Intrinsics.checkNotNullParameter(type, "type");
        b bVar = this.a;
        c0 i02 = bVar.i0(type);
        Intrinsics.checkNotNull(i02, "null cannot be cast to non-null type org.jetbrains.kotlin.types.KotlinType");
        y h6 = this.f21382b.h(i02, c1.f21013i);
        Intrinsics.checkNotNullExpressionValue(h6, "safeSubstitute(...)");
        c0 r5 = bVar.r(h6);
        Intrinsics.checkNotNull(r5);
        return r5;
    }
}
