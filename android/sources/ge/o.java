package ge;

import nd.z0;

/* loaded from: classes3.dex */
public final class o {
    public final z0 a;

    /* renamed from: b, reason: collision with root package name */
    public final int[] f9200b;

    public o(int i5, z0 z0Var, int[] iArr) {
        if (iArr.length == 0) {
            ke.b.s("ETSDefinition", "Empty tracks are not allowed", new IllegalArgumentException());
        }
        this.a = z0Var;
        this.f9200b = iArr;
    }
}
