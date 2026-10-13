package q;

import android.os.Bundle;

/* loaded from: classes.dex */
public final class f implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f16629d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ int f16630e;

    /* renamed from: i, reason: collision with root package name */
    public final /* synthetic */ int f16631i;

    /* renamed from: v, reason: collision with root package name */
    public final /* synthetic */ int f16632v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ int f16633w;

    /* renamed from: x, reason: collision with root package name */
    public final /* synthetic */ Bundle f16634x;

    /* renamed from: y, reason: collision with root package name */
    public final /* synthetic */ g f16635y;

    public f(g gVar, int i5, int i6, int i10, int i11, int i12, Bundle bundle) {
        this.f16635y = gVar;
        this.f16629d = i5;
        this.f16630e = i6;
        this.f16631i = i10;
        this.f16632v = i11;
        this.f16633w = i12;
        this.f16634x = bundle;
    }

    @Override // java.lang.Runnable
    public final void run() {
        this.f16635y.f16637g.onActivityLayout(this.f16629d, this.f16630e, this.f16631i, this.f16632v, this.f16633w, this.f16634x);
    }
}
