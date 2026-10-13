package bs;

import kotlin.Unit;
import kotlin.jvm.internal.BooleanCompanionObject;
import kotlin.jvm.internal.ByteCompanionObject;
import kotlin.jvm.internal.CharCompanionObject;
import kotlin.jvm.internal.DoubleCompanionObject;
import kotlin.jvm.internal.FloatCompanionObject;
import kotlin.jvm.internal.IntCompanionObject;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.LongCompanionObject;
import kotlin.jvm.internal.Reflection;
import kotlin.jvm.internal.ShortCompanionObject;
import kotlin.jvm.internal.StringCompanionObject;
import kotlin.reflect.KClass;
import kotlin.time.Duration;

/* loaded from: classes3.dex */
public abstract class o1 {
    public static final go.i a;

    static {
        go.i builder = new go.i();
        KClass orCreateKotlinClass = Reflection.getOrCreateKotlinClass(String.class);
        nf.e.A(StringCompanionObject.INSTANCE);
        builder.put(orCreateKotlinClass, v1.a);
        KClass orCreateKotlinClass2 = Reflection.getOrCreateKotlinClass(Character.TYPE);
        Intrinsics.checkNotNullParameter(CharCompanionObject.INSTANCE, "<this>");
        builder.put(orCreateKotlinClass2, p.a);
        builder.put(Reflection.getOrCreateKotlinClass(char[].class), o.f3220c);
        KClass orCreateKotlinClass3 = Reflection.getOrCreateKotlinClass(Double.TYPE);
        Intrinsics.checkNotNullParameter(DoubleCompanionObject.INSTANCE, "<this>");
        builder.put(orCreateKotlinClass3, x.a);
        builder.put(Reflection.getOrCreateKotlinClass(double[].class), w.f3246c);
        KClass orCreateKotlinClass4 = Reflection.getOrCreateKotlinClass(Float.TYPE);
        Intrinsics.checkNotNullParameter(FloatCompanionObject.INSTANCE, "<this>");
        builder.put(orCreateKotlinClass4, g0.a);
        builder.put(Reflection.getOrCreateKotlinClass(float[].class), f0.f3184c);
        KClass orCreateKotlinClass5 = Reflection.getOrCreateKotlinClass(Long.TYPE);
        Intrinsics.checkNotNullParameter(LongCompanionObject.INSTANCE, "<this>");
        builder.put(orCreateKotlinClass5, t0.a);
        builder.put(Reflection.getOrCreateKotlinClass(long[].class), s0.f3234c);
        KClass orCreateKotlinClass6 = Reflection.getOrCreateKotlinClass(fo.f0.class);
        Intrinsics.checkNotNullParameter(fo.f0.f8814e, "<this>");
        builder.put(orCreateKotlinClass6, f2.a);
        KClass orCreateKotlinClass7 = Reflection.getOrCreateKotlinClass(Integer.TYPE);
        Intrinsics.checkNotNullParameter(IntCompanionObject.INSTANCE, "<this>");
        builder.put(orCreateKotlinClass7, o0.a);
        builder.put(Reflection.getOrCreateKotlinClass(int[].class), n0.f3218c);
        KClass orCreateKotlinClass8 = Reflection.getOrCreateKotlinClass(fo.c0.class);
        Intrinsics.checkNotNullParameter(fo.c0.f8809e, "<this>");
        builder.put(orCreateKotlinClass8, c2.a);
        KClass orCreateKotlinClass9 = Reflection.getOrCreateKotlinClass(Short.TYPE);
        Intrinsics.checkNotNullParameter(ShortCompanionObject.INSTANCE, "<this>");
        builder.put(orCreateKotlinClass9, u1.a);
        builder.put(Reflection.getOrCreateKotlinClass(short[].class), t1.f3237c);
        KClass orCreateKotlinClass10 = Reflection.getOrCreateKotlinClass(fo.j0.class);
        Intrinsics.checkNotNullParameter(fo.j0.f8817e, "<this>");
        builder.put(orCreateKotlinClass10, i2.a);
        KClass orCreateKotlinClass11 = Reflection.getOrCreateKotlinClass(Byte.TYPE);
        Intrinsics.checkNotNullParameter(ByteCompanionObject.INSTANCE, "<this>");
        builder.put(orCreateKotlinClass11, j.a);
        builder.put(Reflection.getOrCreateKotlinClass(byte[].class), i.f3193c);
        KClass orCreateKotlinClass12 = Reflection.getOrCreateKotlinClass(fo.y.class);
        Intrinsics.checkNotNullParameter(fo.y.f8843e, "<this>");
        builder.put(orCreateKotlinClass12, z1.a);
        KClass orCreateKotlinClass13 = Reflection.getOrCreateKotlinClass(Boolean.TYPE);
        Intrinsics.checkNotNullParameter(BooleanCompanionObject.INSTANCE, "<this>");
        builder.put(orCreateKotlinClass13, g.a);
        builder.put(Reflection.getOrCreateKotlinClass(boolean[].class), f.f3183c);
        KClass orCreateKotlinClass14 = Reflection.getOrCreateKotlinClass(Unit.class);
        Intrinsics.checkNotNullParameter(Unit.a, "<this>");
        builder.put(orCreateKotlinClass14, j2.f3211b);
        builder.put(Reflection.getOrCreateKotlinClass(Void.class), c1.a);
        try {
            KClass orCreateKotlinClass15 = Reflection.getOrCreateKotlinClass(Duration.class);
            Intrinsics.checkNotNullParameter(Duration.f13595e, "<this>");
            builder.put(orCreateKotlinClass15, y.a);
        } catch (ClassNotFoundException | NoClassDefFoundError unused) {
        }
        try {
            builder.put(Reflection.getOrCreateKotlinClass(fo.g0.class), e2.f3182c);
        } catch (ClassNotFoundException | NoClassDefFoundError unused2) {
        }
        try {
            builder.put(Reflection.getOrCreateKotlinClass(fo.d0.class), b2.f3164c);
        } catch (ClassNotFoundException | NoClassDefFoundError unused3) {
        }
        try {
            builder.put(Reflection.getOrCreateKotlinClass(fo.k0.class), h2.f3192c);
        } catch (ClassNotFoundException | NoClassDefFoundError unused4) {
        }
        try {
            builder.put(Reflection.getOrCreateKotlinClass(fo.a0.class), y1.f3258c);
        } catch (ClassNotFoundException | NoClassDefFoundError unused5) {
        }
        try {
            KClass orCreateKotlinClass16 = Reflection.getOrCreateKotlinClass(mr.a.class);
            Intrinsics.checkNotNullParameter(mr.a.f14584i, "<this>");
            builder.put(orCreateKotlinClass16, k2.a);
        } catch (ClassNotFoundException | NoClassDefFoundError unused6) {
        }
        Intrinsics.checkNotNullParameter(builder, "builder");
        a = builder.b();
    }
}
