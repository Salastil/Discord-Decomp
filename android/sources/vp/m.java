package vp;

import java.lang.reflect.Modifier;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.reflect.KProperty;
import lp.l0;

/* loaded from: classes3.dex */
public final class m implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final m f19503e = new m(0);

    /* renamed from: i, reason: collision with root package name */
    public static final m f19504i = new m(1);

    /* renamed from: v, reason: collision with root package name */
    public static final m f19505v = new m(2);

    /* renamed from: w, reason: collision with root package name */
    public static final m f19506w = new m(3);

    /* renamed from: x, reason: collision with root package name */
    public static final m f19507x = new m(4);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f19508d;

    public /* synthetic */ m(int i5) {
        this.f19508d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f19508d) {
            case 0:
                op.v it = (op.v) obj;
                int i5 = o.f19511v;
                Intrinsics.checkNotNullParameter(it, "it");
                return Boolean.valueOf(!Modifier.isStatic(it.b().getModifiers()));
            case 1:
                l0 selectMostSpecificInEachOverridableGroup = (l0) obj;
                KProperty[] kPropertyArr = a0.f19461m;
                Intrinsics.checkNotNullParameter(selectMostSpecificInEachOverridableGroup, "$this$selectMostSpecificInEachOverridableGroup");
                return selectMostSpecificInEachOverridableGroup;
            case 2:
                op.v it2 = (op.v) obj;
                int i6 = d0.f19480p;
                Intrinsics.checkNotNullParameter(it2, "it");
                return Boolean.valueOf(Modifier.isStatic(it2.b().getModifiers()));
            case 3:
                rq.o it3 = (rq.o) obj;
                int i10 = d0.f19480p;
                Intrinsics.checkNotNullParameter(it3, "it");
                return it3.g();
            default:
                int i11 = d0.f19480p;
                ip.i a = ((yq.y) obj).r0().a();
                if (a instanceof ip.f) {
                    return (ip.f) a;
                }
                return null;
        }
    }
}
