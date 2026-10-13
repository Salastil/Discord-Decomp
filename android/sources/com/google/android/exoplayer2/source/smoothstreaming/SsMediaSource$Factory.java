package com.google.android.exoplayer2.source.smoothstreaming;

import com.google.android.exoplayer2.upstream.DataSource;
import j8.b;
import nc.g;
import p9.d;
import ud.a;

/* loaded from: classes3.dex */
public final class SsMediaSource$Factory {
    public final DataSource.Factory a;

    /* renamed from: b, reason: collision with root package name */
    public final b f5450b;

    /* renamed from: c, reason: collision with root package name */
    public final g f5451c;

    /* renamed from: d, reason: collision with root package name */
    public d f5452d;

    /* renamed from: e, reason: collision with root package name */
    public final long f5453e;

    public SsMediaSource$Factory(DataSource.Factory factory) {
        this(new a(factory), factory);
    }

    public SsMediaSource$Factory(a aVar, DataSource.Factory factory) {
        this.a = factory;
        this.f5451c = new g();
        this.f5452d = new d(-1, 4);
        this.f5453e = 30000L;
        this.f5450b = new b(14, (byte) 0);
    }
}
