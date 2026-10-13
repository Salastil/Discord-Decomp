package a5;

import android.content.Context;

/* loaded from: classes.dex */
public final class n0 {
    public final Context a;

    /* renamed from: b, reason: collision with root package name */
    public final com.discord.billing.b f198b;

    /* renamed from: c, reason: collision with root package name */
    public final f0 f199c;

    /* renamed from: d, reason: collision with root package name */
    public final m0 f200d;

    /* renamed from: e, reason: collision with root package name */
    public final m0 f201e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f202f;

    /* renamed from: g, reason: collision with root package name */
    public com.google.android.gms.internal.play_billing.v f203g;

    public n0(Context context, com.discord.billing.b bVar, e4.r rVar) {
        int i5 = com.google.android.gms.internal.play_billing.v.f5852i;
        this.f203g = com.google.android.gms.internal.play_billing.d0.G;
        this.a = context;
        this.f198b = bVar;
        this.f199c = rVar;
        this.f200d = new m0(this, true);
        this.f201e = new m0(this, false);
    }
}
