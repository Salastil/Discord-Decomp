package nc;

import android.os.Handler;
import io.sentry.android.core.h1;

/* loaded from: classes3.dex */
public final class e implements q {

    /* renamed from: d, reason: collision with root package name */
    public final n f15005d;

    /* renamed from: e, reason: collision with root package name */
    public k f15006e;

    /* renamed from: i, reason: collision with root package name */
    public boolean f15007i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ f f15008v;

    public e(f fVar, n nVar) {
        this.f15008v = fVar;
        this.f15005d = nVar;
    }

    @Override // nc.q
    public final void release() {
        Handler handler = this.f15008v.f15026u;
        handler.getClass();
        ke.d0.M(handler, new h1(26, this));
    }
}
