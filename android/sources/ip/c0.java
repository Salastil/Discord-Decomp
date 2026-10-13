package ip;

import java.util.List;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class c0 implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f12128d;

    /* renamed from: e, reason: collision with root package name */
    public final e4.i f12129e;

    public /* synthetic */ c0(e4.i iVar, int i5) {
        this.f12128d = i5;
        this.f12129e = iVar;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f12128d) {
            case 0:
                hq.c fqName = (hq.c) obj;
                Intrinsics.checkNotNullParameter(fqName, "fqName");
                return new hp.m((a0) this.f12129e.f7953e, fqName, 1);
            default:
                d0 d0Var = (d0) obj;
                Intrinsics.checkNotNullParameter(d0Var, "<destruct>");
                hq.b bVar = d0Var.a;
                List list = d0Var.f12131b;
                if (bVar.f10202c) {
                    throw new UnsupportedOperationException("Unresolved local class: " + bVar);
                }
                hq.b e9 = bVar.e();
                e4.i iVar = this.f12129e;
                h o6 = e9 != null ? iVar.o(e9, CollectionsKt.F(1, list)) : (h) ((xq.e) iVar.f7954i).invoke(bVar.a);
                boolean g6 = bVar.g();
                xq.l lVar = (xq.l) iVar.f7952d;
                hq.e f2 = bVar.f();
                Integer num = (Integer) CollectionsKt.firstOrNull(list);
                return new e0(lVar, o6, f2, g6, num != null ? num.intValue() : 0);
        }
    }
}
