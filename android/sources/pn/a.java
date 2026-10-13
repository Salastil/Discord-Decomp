package pn;

import android.animation.FloatEvaluator;
import com.facebook.react.runtime.r;
import kotlin.jvm.internal.Intrinsics;
import kr.n;

/* loaded from: classes3.dex */
public final class a extends FloatEvaluator {
    public final r a;

    /* renamed from: b, reason: collision with root package name */
    public final n f16454b;

    /* renamed from: c, reason: collision with root package name */
    public Number f16455c;

    /* renamed from: d, reason: collision with root package name */
    public Number f16456d;

    public a(r startValueProvider, n endValueProvider) {
        Intrinsics.checkNotNullParameter(startValueProvider, "startValueProvider");
        Intrinsics.checkNotNullParameter(endValueProvider, "endValueProvider");
        this.a = startValueProvider;
        this.f16454b = endValueProvider;
    }

    /* JADX WARN: Can't rename method to resolve collision */
    @Override // android.animation.TypeEvaluator
    public final Float evaluate(float f2, Number number, Number number2) {
        if (this.f16455c == null) {
            this.f16455c = (Number) this.a.invoke(number);
        }
        Number number3 = this.f16455c;
        if (this.f16456d == null) {
            this.f16454b.invoke(number2);
            this.f16456d = Float.valueOf(0.0f);
        }
        Number number4 = this.f16456d;
        if (number3 == null || number4 == null) {
            return null;
        }
        return super.evaluate(f2, number3, number4);
    }
}
