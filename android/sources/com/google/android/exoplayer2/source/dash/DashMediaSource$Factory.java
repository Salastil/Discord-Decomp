package com.google.android.exoplayer2.source.dash;

import com.google.android.exoplayer2.upstream.DataSource;
import j8.b;
import nc.g;
import p9.d;
import qd.j;

/* loaded from: classes3.dex */
public final class DashMediaSource$Factory {
    public final DataSource.Factory a;

    /* renamed from: b, reason: collision with root package name */
    public final g f5437b;

    /* renamed from: c, reason: collision with root package name */
    public final b f5438c;

    /* renamed from: d, reason: collision with root package name */
    public d f5439d;

    /* renamed from: e, reason: collision with root package name */
    public final long f5440e;

    /* renamed from: f, reason: collision with root package name */
    public final long f5441f;

    public DashMediaSource$Factory(DataSource.Factory factory) {
        this(new j(factory), factory);
    }

    public DashMediaSource$Factory(j jVar, DataSource.Factory factory) {
        this.a = factory;
        this.f5437b = new g();
        this.f5439d = new d(-1, 4);
        this.f5440e = 30000L;
        this.f5441f = 5000000L;
        this.f5438c = new b(14, (byte) 0);
    }
}
