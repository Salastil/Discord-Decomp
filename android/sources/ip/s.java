package ip;

import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class s implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final s f12168e = new s(0);

    /* renamed from: i, reason: collision with root package name */
    public static final s f12169i = new s(1);

    /* renamed from: v, reason: collision with root package name */
    public static final s f12170v = new s(2);

    /* renamed from: w, reason: collision with root package name */
    public static final s f12171w = new s(3);

    /* renamed from: x, reason: collision with root package name */
    public static final s f12172x = new s(4);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12173d;

    public /* synthetic */ s(int i5) {
        this.f12173d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f12173d) {
            case 0:
                Intrinsics.checkNotNullParameter((hq.b) obj, "it");
                return 0;
            case 1:
                f0 it = (f0) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                return ((lp.c0) it).f14132x;
            case 2:
                l it2 = (l) obj;
                Intrinsics.checkNotNullParameter(it2, "it");
                return Boolean.valueOf(it2 instanceof b);
            case 3:
                l it3 = (l) obj;
                Intrinsics.checkNotNullParameter(it3, "it");
                return Boolean.valueOf(!(it3 instanceof k));
            default:
                l it4 = (l) obj;
                Intrinsics.checkNotNullParameter(it4, "it");
                List typeParameters = ((b) it4).getTypeParameters();
                Intrinsics.checkNotNullExpressionValue(typeParameters, "getTypeParameters(...)");
                return CollectionsKt.C(typeParameters);
        }
    }
}
