package rp;

import kotlin.collections.CollectionsKt;
import kotlin.collections.v0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.l0;
import lp.r0;

/* loaded from: classes3.dex */
public final class d implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f17442d;

    /* renamed from: e, reason: collision with root package name */
    public static final d f17436e = new d(0);

    /* renamed from: i, reason: collision with root package name */
    public static final d f17437i = new d(1);

    /* renamed from: v, reason: collision with root package name */
    public static final d f17438v = new d(2);

    /* renamed from: w, reason: collision with root package name */
    public static final d f17439w = new d(3);

    /* renamed from: x, reason: collision with root package name */
    public static final d f17440x = new d(4);

    /* renamed from: y, reason: collision with root package name */
    public static final d f17441y = new d(5);
    public static final d E = new d(6);

    public /* synthetic */ d(int i5) {
        this.f17442d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        ip.d b10;
        String builtinSignature;
        boolean z5 = false;
        switch (this.f17442d) {
            case 0:
                ip.d it = (ip.d) obj;
                int i5 = e.f17447l;
                Intrinsics.checkNotNullParameter(it, "it");
                return Boolean.valueOf(CollectionsKt.E(h0.f17465f, ks.n.h(it)));
            case 1:
                ip.d it2 = (ip.d) obj;
                int i6 = e.f17447l;
                Intrinsics.checkNotNullParameter(it2, "it");
                if ((it2 instanceof ip.v) && CollectionsKt.E(h0.f17465f, ks.n.h(it2))) {
                    z5 = true;
                }
                return Boolean.valueOf(z5);
            case 2:
                ip.d it3 = (ip.d) obj;
                Intrinsics.checkNotNullParameter(it3, "it");
                return Boolean.valueOf(nt.a.x(it3));
            case 3:
                return ((r0) obj).getType();
            case 4:
                ip.d it4 = (ip.d) obj;
                Intrinsics.checkNotNullParameter(it4, "it");
                return Boolean.valueOf(nt.a.x(oq.e.k(it4)));
            case 5:
                ip.d it5 = (ip.d) obj;
                Intrinsics.checkNotNullParameter(it5, "it");
                int i10 = c.f17430l;
                l0 functionDescriptor = (l0) it5;
                Intrinsics.checkNotNullParameter(functionDescriptor, "functionDescriptor");
                if (fp.i.A(functionDescriptor) && oq.e.b(functionDescriptor, new aq.a(13, functionDescriptor)) != null) {
                    z5 = true;
                }
                return Boolean.valueOf(z5);
            default:
                ip.d it6 = (ip.d) obj;
                Intrinsics.checkNotNullParameter(it6, "it");
                if (fp.i.A(it6)) {
                    int i11 = e.f17447l;
                    Intrinsics.checkNotNullParameter(it6, "<this>");
                    e0 e0Var = null;
                    if (h0.f17464e.contains(it6.getName()) && (b10 = oq.e.b(it6, f17437i)) != null && (builtinSignature = ks.n.h(b10)) != null) {
                        Intrinsics.checkNotNullParameter(builtinSignature, "builtinSignature");
                        e0Var = h0.f17461b.contains(builtinSignature) ? e0.f17448d : ((g0) v0.e(h0.f17463d, builtinSignature)) == g0.f17455e ? e0.f17450i : e0.f17449e;
                    }
                    if (e0Var != null) {
                        z5 = true;
                    }
                }
                return Boolean.valueOf(z5);
        }
    }
}
