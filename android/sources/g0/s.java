package g0;

import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public abstract class s {
    public static final r a = new r();

    public static void a(t tVar, int i5, int i6) {
        Intrinsics.checkNotNullParameter(tVar, "<this>");
        long a10 = ys.d.a(i5, i6);
        long j = tVar.f9085w;
        int i10 = m0.d.f14312b;
        tVar.n(ys.d.a(((int) (a10 >> 32)) + ((int) (j >> 32)), ((int) (a10 & 4294967295L)) + ((int) (j & 4294967295L))));
    }
}
