package dr;

import ip.i;
import ip.r0;
import ip.s0;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.Intrinsics;
import yq.b1;

/* loaded from: classes3.dex */
public final class a implements Function1 {

    /* renamed from: e, reason: collision with root package name */
    public static final a f7688e = new a(0);

    /* renamed from: i, reason: collision with root package name */
    public static final a f7689i = new a(1);

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f7690d;

    public /* synthetic */ a(int i5) {
        this.f7690d = i5;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        boolean z5;
        b1 it = (b1) obj;
        switch (this.f7690d) {
            case 0:
                Intrinsics.checkNotNullParameter(it, "it");
                i a = it.r0().a();
                if (a != null) {
                    Intrinsics.checkNotNullParameter(a, "<this>");
                    if ((a instanceof s0) && (((s0) a).h() instanceof r0)) {
                        z5 = true;
                        return Boolean.valueOf(z5);
                    }
                }
                z5 = false;
                return Boolean.valueOf(z5);
            default:
                Intrinsics.checkNotNullParameter(it, "it");
                i a10 = it.r0().a();
                return Boolean.valueOf(a10 != null && ((a10 instanceof r0) || (a10 instanceof s0)));
        }
    }
}
