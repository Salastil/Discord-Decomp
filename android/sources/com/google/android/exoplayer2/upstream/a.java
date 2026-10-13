package com.google.android.exoplayer2.upstream;

import android.content.Context;
import com.facebook.react.bridge.ReactContext;
import com.google.android.exoplayer2.upstream.DataSource;
import ie.s;
import ie.t;
import ie.u0;

/* loaded from: classes3.dex */
public final class a implements DataSource.Factory {

    /* renamed from: d, reason: collision with root package name */
    public final Context f5563d;

    /* renamed from: e, reason: collision with root package name */
    public final u0 f5564e;

    /* renamed from: i, reason: collision with root package name */
    public final pc.b f5565i;

    public a(ReactContext reactContext, s sVar, pc.b bVar) {
        this.f5563d = reactContext.getApplicationContext();
        this.f5564e = sVar;
        this.f5565i = bVar;
    }

    @Override // com.google.android.exoplayer2.upstream.DataSource.Factory
    public final DataSource createDataSource() {
        t tVar = new t(this.f5563d, this.f5565i.createDataSource());
        u0 u0Var = this.f5564e;
        if (u0Var != null) {
            tVar.n(u0Var);
        }
        return tVar;
    }
}
