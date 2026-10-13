package jq;

import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import yq.c1;
import yq.s0;
import yq.y;

/* loaded from: classes3.dex */
public final class g implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13049d;

    /* renamed from: e, reason: collision with root package name */
    public final h f13050e;

    public /* synthetic */ g(h hVar, int i5) {
        this.f13049d = i5;
        this.f13050e = hVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f13049d) {
            case 0:
                s0 it = (s0) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                if (it.c()) {
                    return "*";
                }
                y b10 = it.b();
                Intrinsics.checkNotNullExpressionValue(b10, "getType(...)");
                String X = this.f13050e.X(b10);
                if (it.a() == c1.f21013i) {
                    return X;
                }
                return it.a() + ' ' + X;
            default:
                y yVar = (y) obj;
                Intrinsics.checkNotNull(yVar);
                return this.f13050e.X(yVar);
        }
    }
}
