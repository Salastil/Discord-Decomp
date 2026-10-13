package gp;

import java.util.List;
import kotlin.collections.b0;
import kotlin.collections.m0;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class e extends rq.h {
    @Override // rq.h
    public final List h() {
        lp.b bVar = this.f17545b;
        Intrinsics.checkNotNull(bVar, "null cannot be cast to non-null type org.jetbrains.kotlin.builtins.functions.FunctionClassDescriptor");
        c cVar = (c) bVar;
        k kVar = cVar.f9425y;
        return Intrinsics.areEqual(kVar, g.f9428c) ? b0.c(android.support.v4.media.session.b.e(cVar, false)) : Intrinsics.areEqual(kVar, j.f9431c) ? b0.c(android.support.v4.media.session.b.e(cVar, true)) : m0.f13512d;
    }
}
