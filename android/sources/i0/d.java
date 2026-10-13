package i0;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.Lambda;

/* loaded from: classes.dex */
public final class d extends Lambda implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final d f10389e;

    /* renamed from: i, reason: collision with root package name */
    public static final d f10390i;

    /* renamed from: v, reason: collision with root package name */
    public static final d f10391v;

    /* renamed from: w, reason: collision with root package name */
    public static final d f10392w;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f10393d;

    static {
        int i5 = 1;
        f10389e = new d(i5, 0);
        f10390i = new d(i5, 1);
        f10391v = new d(i5, 2);
        f10392w = new d(i5, 3);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ d(int i5, int i6) {
        super(i5);
        this.f10393d = i6;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f10393d) {
            case 0:
                c it = (c) obj;
                Intrinsics.checkNotNullParameter(it, "it");
                if (!it.f21122h) {
                    return Unit.a;
                }
                it.j.clear();
                k.c(it);
                throw null;
            case 1:
                b it2 = (b) obj;
                Intrinsics.checkNotNullParameter(it2, "it");
                it2.d().getClass();
                return Unit.a;
            case 2:
                f0 coordinator = (f0) obj;
                Intrinsics.checkNotNullParameter(coordinator, "coordinator");
                coordinator.getClass();
                return Unit.a;
            default:
                f0 coordinator2 = (f0) obj;
                Intrinsics.checkNotNullParameter(coordinator2, "coordinator");
                coordinator2.getClass();
                return Unit.a;
        }
    }
}
