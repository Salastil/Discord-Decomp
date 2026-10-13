package yq;

import java.util.Collection;
import java.util.List;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class g implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f21036d;

    /* renamed from: e, reason: collision with root package name */
    public final i f21037e;

    public /* synthetic */ g(i iVar, int i5) {
        this.f21036d = i5;
        this.f21037e = iVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f21036d) {
            case 0:
                h supertypes = (h) obj;
                Intrinsics.checkNotNullParameter(supertypes, "supertypes");
                i currentTypeConstructor = this.f21037e;
                ip.p0 i5 = currentTypeConstructor.i();
                Collection superTypes = supertypes.a;
                w neighbors = new w(currentTypeConstructor);
                g reportLoop = new g(currentTypeConstructor, 1);
                i5.getClass();
                Intrinsics.checkNotNullParameter(currentTypeConstructor, "currentTypeConstructor");
                Intrinsics.checkNotNullParameter(superTypes, "superTypes");
                Intrinsics.checkNotNullParameter(neighbors, "neighbors");
                Intrinsics.checkNotNullParameter(reportLoop, "reportLoop");
                boolean isEmpty = superTypes.isEmpty();
                Collection collection = superTypes;
                if (isEmpty) {
                    y f2 = currentTypeConstructor.f();
                    Collection c6 = f2 != null ? kotlin.collections.b0.c(f2) : null;
                    if (c6 == null) {
                        c6 = kotlin.collections.m0.f13512d;
                    }
                    collection = c6;
                }
                List list = collection instanceof List ? (List) collection : null;
                if (list == null) {
                    list = CollectionsKt.i0(collection);
                }
                List l6 = currentTypeConstructor.l(list);
                Intrinsics.checkNotNullParameter(l6, "<set-?>");
                supertypes.f21038b = l6;
                break;
            default:
                y it = (y) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                this.f21037e.m(it);
                break;
        }
        return Unit.a;
    }
}
