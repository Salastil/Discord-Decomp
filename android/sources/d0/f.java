package d0;

import java.util.Arrays;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class f extends g {

    /* renamed from: g, reason: collision with root package name */
    public final p f7357g;

    /* renamed from: h, reason: collision with root package name */
    public final p f7358h;

    /* renamed from: i, reason: collision with root package name */
    public final float[] f7359i;

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public f(p mSource, p mDestination) {
        super(mSource, mDestination, mSource, mDestination, null);
        float[] g6;
        Intrinsics.checkNotNullParameter(mSource, "mSource");
        Intrinsics.checkNotNullParameter(mDestination, "mDestination");
        this.f7357g = mSource;
        this.f7358h = mDestination;
        float[] fArr = a.f7345b.a;
        r rVar = mSource.f7383d;
        float[] fArr2 = mSource.f7388i;
        r rVar2 = mDestination.f7383d;
        float[] fArr3 = mDestination.j;
        if (i.d(rVar, rVar2)) {
            g6 = i.g(fArr3, fArr2);
        } else {
            float[] a = rVar.a();
            float[] a10 = rVar2.a();
            r rVar3 = i.f7365b;
            boolean d6 = i.d(rVar, rVar3);
            float[] fArr4 = i.f7368e;
            if (!d6) {
                float[] copyOf = Arrays.copyOf(fArr4, 3);
                Intrinsics.checkNotNullExpressionValue(copyOf, "copyOf(this, size)");
                fArr2 = i.g(i.c(fArr, a, copyOf), fArr2);
            }
            if (!i.d(rVar2, rVar3)) {
                float[] copyOf2 = Arrays.copyOf(fArr4, 3);
                Intrinsics.checkNotNullExpressionValue(copyOf2, "copyOf(this, size)");
                fArr3 = i.f(i.g(i.c(fArr, a10, copyOf2), mDestination.f7388i));
            }
            g6 = i.g(fArr3, fArr2);
        }
        this.f7359i = g6;
    }

    @Override // d0.g
    public final long a(float f2, float f10, float f11, float f12) {
        p pVar = this.f7357g;
        float invoke = (float) pVar.f7391n.invoke(f2);
        l lVar = pVar.f7391n;
        float invoke2 = (float) lVar.invoke(f10);
        float invoke3 = (float) lVar.invoke(f11);
        float[] fArr = this.f7359i;
        float i5 = i.i(fArr, invoke, invoke2, invoke3);
        float j = i.j(fArr, invoke, invoke2, invoke3);
        float k = i.k(fArr, invoke, invoke2, invoke3);
        p pVar2 = this.f7358h;
        float invoke4 = (float) pVar2.f7389l.invoke(i5);
        l lVar2 = pVar2.f7389l;
        return io.sentry.config.a.a(invoke4, (float) lVar2.invoke(j), (float) lVar2.invoke(k), f12, pVar2);
    }
}
