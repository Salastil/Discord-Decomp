package b0;

import kotlin.jvm.internal.FloatCompanionObject;
import tn.g;

/* loaded from: classes.dex */
public abstract class a {
    public static final long a;

    /* renamed from: b, reason: collision with root package name */
    public static final /* synthetic */ int f2701b = 0;

    static {
        g.a(0.0f, 0.0f);
        g.a(Float.POSITIVE_INFINITY, Float.POSITIVE_INFINITY);
        a = g.a(Float.NaN, Float.NaN);
    }

    public static final float a(long j) {
        if (j == a) {
            throw new IllegalStateException("Offset is unspecified");
        }
        FloatCompanionObject floatCompanionObject = FloatCompanionObject.INSTANCE;
        return Float.intBitsToFloat((int) (j >> 32));
    }

    public static final float b(long j) {
        if (j == a) {
            throw new IllegalStateException("Offset is unspecified");
        }
        FloatCompanionObject floatCompanionObject = FloatCompanionObject.INSTANCE;
        return Float.intBitsToFloat((int) (j & 4294967295L));
    }

    public static final long c(long j, long j5) {
        return g.a(a(j5) + a(j), b(j5) + b(j));
    }
}
