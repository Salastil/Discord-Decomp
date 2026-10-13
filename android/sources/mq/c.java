package mq;

import ip.a0;
import kotlin.jvm.internal.Intrinsics;
import yq.c0;

/* loaded from: classes3.dex */
public final class c extends g {

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ int f14574b = 1;

    public /* synthetic */ c(Object obj) {
        super(obj);
    }

    @Override // mq.g
    public final yq.y a(a0 module) {
        switch (this.f14574b) {
            case 0:
                Intrinsics.checkNotNullParameter(module, "module");
                fp.i g6 = module.g();
                g6.getClass();
                c0 t5 = g6.t(fp.k.f8866x);
                Intrinsics.checkNotNullExpressionValue(t5, "getBooleanType(...)");
                return t5;
            case 1:
                Intrinsics.checkNotNullParameter(module, "module");
                fp.i g10 = module.g();
                g10.getClass();
                c0 t10 = g10.t(fp.k.J);
                Intrinsics.checkNotNullExpressionValue(t10, "getDoubleType(...)");
                return t10;
            default:
                Intrinsics.checkNotNullParameter(module, "module");
                fp.i g11 = module.g();
                g11.getClass();
                c0 t11 = g11.t(fp.k.H);
                Intrinsics.checkNotNullExpressionValue(t11, "getFloatType(...)");
                return t11;
        }
    }

    @Override // mq.g
    public String toString() {
        switch (this.f14574b) {
            case 1:
                return ((Number) this.a).doubleValue() + ".toDouble()";
            case 2:
                return ((Number) this.a).floatValue() + ".toFloat()";
            default:
                return super.toString();
        }
    }

    public c(double d6) {
        super(Double.valueOf(d6));
    }

    public c(float f2) {
        super(Float.valueOf(f2));
    }
}
