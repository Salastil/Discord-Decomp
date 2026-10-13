package rq;

import ip.m0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import lp.l0;

/* loaded from: classes3.dex */
public final class l implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final l f17552e = new l(0);

    /* renamed from: i, reason: collision with root package name */
    public static final l f17553i = new l(1);

    /* renamed from: v, reason: collision with root package name */
    public static final l f17554v = new l(2);

    /* renamed from: w, reason: collision with root package name */
    public static final l f17555w = new l(3);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f17556d;

    public /* synthetic */ l(int i5) {
        this.f17556d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f17556d) {
            case 0:
                hq.e it = (hq.e) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                return Boolean.TRUE;
            case 1:
                l0 selectMostSpecificInEachOverridableGroup = (l0) obj;
                Intrinsics.checkNotNullParameter(selectMostSpecificInEachOverridableGroup, "$this$selectMostSpecificInEachOverridableGroup");
                return selectMostSpecificInEachOverridableGroup;
            case 2:
                m0 selectMostSpecificInEachOverridableGroup2 = (m0) obj;
                Intrinsics.checkNotNullParameter(selectMostSpecificInEachOverridableGroup2, "$this$selectMostSpecificInEachOverridableGroup");
                return selectMostSpecificInEachOverridableGroup2;
            default:
                ip.b selectMostSpecificInEachOverridableGroup3 = (ip.b) obj;
                Intrinsics.checkNotNullParameter(selectMostSpecificInEachOverridableGroup3, "$this$selectMostSpecificInEachOverridableGroup");
                return selectMostSpecificInEachOverridableGroup3;
        }
    }
}
