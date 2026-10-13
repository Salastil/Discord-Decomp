package yq;

import java.util.Collection;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class w implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final w f21075e = new w(0);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f21076d;

    public /* synthetic */ w(int i5) {
        this.f21076d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        Collection b10;
        switch (this.f21076d) {
            case 0:
                y it = (y) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                return it.toString();
            case 1:
                p0 it2 = (p0) obj;
                Intrinsics.checkNotNullParameter(it2, "it");
                i iVar = it2 instanceof i ? (i) it2 : null;
                if (iVar != null) {
                    b10 = CollectionsKt.V(((h) iVar.f21041b.invoke()).a, iVar.h(false));
                } else {
                    b10 = it2.b();
                    Intrinsics.checkNotNullExpressionValue(b10, "getSupertypes(...)");
                }
                return b10;
            default:
                if (((hq.c) obj) != null) {
                    return Boolean.valueOf(!r3.equals(fp.o.f8905y));
                }
                throw new IllegalArgumentException("Argument for @NotNull parameter 'name' of kotlin/reflect/jvm/internal/impl/types/TypeSubstitutor$1.invoke must not be null");
        }
    }

    public w(i iVar) {
        this.f21076d = 1;
    }
}
