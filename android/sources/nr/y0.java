package nr;

import kotlin.Unit;
import kotlin.jvm.functions.Function1;
import kotlin.jvm.internal.FunctionReferenceImpl;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final /* synthetic */ class y0 extends FunctionReferenceImpl implements Function1 {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f15685d;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public /* synthetic */ y0(int i5, Object obj, Class cls, String str, String str2, int i6, int i10) {
        super(i5, obj, cls, str, str2, i6);
        this.f15685d = i10;
    }

    @Override // kotlin.jvm.functions.Function1
    public final Object invoke(Object obj) {
        switch (this.f15685d) {
            case 0:
                ((z0) this.receiver).k((Throwable) obj);
                return Unit.a;
            case 1:
                hq.e p02 = (hq.e) obj;
                Intrinsics.checkNotNullParameter(p02, "p0");
                return ((vp.o) this.receiver).N(p02);
            case 2:
                hq.e p03 = (hq.e) obj;
                Intrinsics.checkNotNullParameter(p03, "p0");
                return ((vp.o) this.receiver).O(p03);
            case 3:
                String p04 = (String) obj;
                Intrinsics.checkNotNullParameter(p04, "p0");
                ((vq.d) this.receiver).getClass();
                return vq.d.a(p04);
            case 4:
                hq.e p05 = (hq.e) obj;
                Intrinsics.checkNotNullParameter(p05, "p0");
                return ((wq.i) this.receiver).q0(p05);
            case 5:
                zq.f p06 = (zq.f) obj;
                Intrinsics.checkNotNullParameter(p06, "p0");
                return new wq.g((wq.i) this.receiver, p06);
            default:
                cr.d p07 = (cr.d) obj;
                Intrinsics.checkNotNullParameter(p07, "p0");
                return ((zq.e) this.receiver).a(p07);
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public y0(Object obj) {
        super(1, obj, wq.i.class, "getValueClassPropertyType", "getValueClassPropertyType(Lorg/jetbrains/kotlin/name/Name;)Lorg/jetbrains/kotlin/types/SimpleType;", 0);
        this.f15685d = 4;
    }
}
