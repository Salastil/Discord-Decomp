package jq;

import kotlin.Unit;
import kotlin.collections.c0;
import kotlin.collections.e1;
import kotlin.collections.o0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import lp.r0;
import yq.y;

/* loaded from: classes3.dex */
public final class d implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13046d;

    /* renamed from: e, reason: collision with root package name */
    public static final d f13040e = new d(0);

    /* renamed from: i, reason: collision with root package name */
    public static final d f13041i = new d(1);

    /* renamed from: v, reason: collision with root package name */
    public static final d f13042v = new d(2);

    /* renamed from: w, reason: collision with root package name */
    public static final d f13043w = new d(3);

    /* renamed from: x, reason: collision with root package name */
    public static final d f13044x = new d(4);

    /* renamed from: y, reason: collision with root package name */
    public static final d f13045y = new d(5);
    public static final d E = new d(6);
    public static final d F = new d(7);
    public static final d G = new d(8);
    public static final d H = new d(9);
    public static final d I = new d(10);
    public static final d J = new d(11);
    public static final d K = new d(12);
    public static final d L = new d(13);
    public static final d M = new d(14);
    public static final d N = new d(15);

    public /* synthetic */ d(int i5) {
        this.f13046d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f13046d) {
            case 0:
                j withOptions = (j) obj;
                h hVar = f.a;
                Intrinsics.checkNotNullParameter(withOptions, "$this$withOptions");
                withOptions.d(o0.f13515d);
                return Unit.a;
            case 1:
                j withOptions2 = (j) obj;
                h hVar2 = f.a;
                Intrinsics.checkNotNullParameter(withOptions2, "$this$withOptions");
                r rVar = s.f13094d;
                withOptions2.l();
                withOptions2.d(i.f13055i);
                return Unit.a;
            case 2:
                j withOptions3 = (j) obj;
                h hVar3 = f.a;
                Intrinsics.checkNotNullParameter(withOptions3, "$this$withOptions");
                withOptions3.j();
                return Unit.a;
            case 3:
                j withOptions4 = (j) obj;
                h hVar4 = f.a;
                Intrinsics.checkNotNullParameter(withOptions4, "$this$withOptions");
                withOptions4.j();
                withOptions4.d(o0.f13515d);
                return Unit.a;
            case 4:
                j withOptions5 = (j) obj;
                h hVar5 = f.a;
                Intrinsics.checkNotNullParameter(withOptions5, "$this$withOptions");
                withOptions5.j();
                withOptions5.d(o0.f13515d);
                withOptions5.m();
                return Unit.a;
            case 5:
                j withOptions6 = (j) obj;
                h hVar6 = f.a;
                Intrinsics.checkNotNullParameter(withOptions6, "$this$withOptions");
                withOptions6.d(o0.f13515d);
                withOptions6.g(b.f13038c);
                withOptions6.h(o.f13088e);
                return Unit.a;
            case 6:
                j withOptions7 = (j) obj;
                h hVar7 = f.a;
                Intrinsics.checkNotNullParameter(withOptions7, "$this$withOptions");
                withOptions7.j();
                withOptions7.d(o0.f13515d);
                withOptions7.g(b.f13038c);
                withOptions7.f();
                withOptions7.h(o.f13089i);
                withOptions7.a();
                withOptions7.c();
                withOptions7.m();
                withOptions7.i();
                return Unit.a;
            case 7:
                j withOptions8 = (j) obj;
                h hVar8 = f.a;
                Intrinsics.checkNotNullParameter(withOptions8, "$this$withOptions");
                withOptions8.d(i.f13054e);
                return Unit.a;
            case 8:
                j withOptions9 = (j) obj;
                h hVar9 = f.a;
                Intrinsics.checkNotNullParameter(withOptions9, "$this$withOptions");
                withOptions9.d(i.f13055i);
                return Unit.a;
            case 9:
                j withOptions10 = (j) obj;
                h hVar10 = f.a;
                Intrinsics.checkNotNullParameter(withOptions10, "$this$withOptions");
                withOptions10.g(b.f13038c);
                withOptions10.h(o.f13088e);
                return Unit.a;
            case 10:
                j withOptions11 = (j) obj;
                h hVar11 = f.a;
                Intrinsics.checkNotNullParameter(withOptions11, "$this$withOptions");
                withOptions11.b();
                withOptions11.g(b.f13037b);
                withOptions11.d(i.f13055i);
                return Unit.a;
            case 11:
                y it = (y) obj;
                int i5 = h.f13051f;
                Intrinsics.checkNotNullParameter(it, "it");
                return it;
            case 12:
                int i6 = h.f13051f;
                return "";
            case 13:
                j withOptions12 = (j) obj;
                int i10 = h.f13051f;
                Intrinsics.checkNotNullParameter(withOptions12, "$this$withOptions");
                withOptions12.e(e1.d(withOptions12.k(), c0.g(fp.o.f8896p, fp.o.f8897q)));
                return Unit.a;
            case 14:
                y it2 = (y) obj;
                KProperty[] kPropertyArr = k.Y;
                Intrinsics.checkNotNullParameter(it2, "it");
                return it2;
            default:
                KProperty[] kPropertyArr2 = k.Y;
                Intrinsics.checkNotNullParameter((r0) obj, "it");
                return "...";
        }
    }
}
