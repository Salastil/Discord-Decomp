package ge;

import com.google.android.exoplayer2.Format;
import nd.z0;

/* loaded from: classes3.dex */
public abstract class m {

    /* renamed from: d, reason: collision with root package name */
    public final int f9193d;

    /* renamed from: e, reason: collision with root package name */
    public final z0 f9194e;

    /* renamed from: i, reason: collision with root package name */
    public final int f9195i;

    /* renamed from: v, reason: collision with root package name */
    public final Format f9196v;

    public m(int i5, z0 z0Var, int i6) {
        this.f9193d = i5;
        this.f9194e = z0Var;
        this.f9195i = i6;
        this.f9196v = z0Var.f15211v[i6];
    }

    public abstract int a();

    public abstract boolean b(m mVar);
}
