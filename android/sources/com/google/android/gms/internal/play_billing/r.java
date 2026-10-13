package com.google.android.gms.internal.play_billing;

/* loaded from: classes3.dex */
public final class r extends t {

    /* renamed from: i, reason: collision with root package name */
    public final transient int f5813i;

    /* renamed from: v, reason: collision with root package name */
    public final transient int f5814v;

    /* renamed from: w, reason: collision with root package name */
    public final /* synthetic */ t f5815w;

    public r(t tVar, int i5, int i6) {
        this.f5815w = tVar;
        this.f5813i = i5;
        this.f5814v = i6;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final int b() {
        return this.f5815w.d() + this.f5813i + this.f5814v;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final int d() {
        return this.f5815w.d() + this.f5813i;
    }

    @Override // java.util.List
    public final Object get(int i5) {
        a2.h(i5, this.f5814v);
        return this.f5815w.get(i5 + this.f5813i);
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final boolean h() {
        return true;
    }

    @Override // com.google.android.gms.internal.play_billing.p
    public final Object[] i() {
        return this.f5815w.i();
    }

    @Override // com.google.android.gms.internal.play_billing.t, java.util.List
    /* renamed from: j, reason: merged with bridge method [inline-methods] */
    public final t subList(int i5, int i6) {
        a2.u(i5, i6, this.f5814v);
        int i10 = this.f5813i;
        return this.f5815w.subList(i5 + i10, i6 + i10);
    }

    @Override // java.util.AbstractCollection, java.util.Collection, java.util.List
    public final int size() {
        return this.f5814v;
    }
}
