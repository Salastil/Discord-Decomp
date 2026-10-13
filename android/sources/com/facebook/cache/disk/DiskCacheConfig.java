package com.facebook.cache.disk;

import android.content.Context;
import com.facebook.common.internal.Supplier;
import j8.b;
import k8.d;
import l8.a;
import r8.c;

/* loaded from: classes3.dex */
public final class DiskCacheConfig {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final String f4398b;

    /* renamed from: c, reason: collision with root package name */
    public final Supplier f4399c;

    /* renamed from: d, reason: collision with root package name */
    public final long f4400d;

    /* renamed from: e, reason: collision with root package name */
    public final long f4401e;

    /* renamed from: f, reason: collision with root package name */
    public final long f4402f;

    /* renamed from: g, reason: collision with root package name */
    public final c f4403g;

    /* renamed from: h, reason: collision with root package name */
    public final b f4404h;

    /* renamed from: i, reason: collision with root package name */
    public final j8.c f4405i;
    public final Context j;

    public DiskCacheConfig(d dVar) {
        b bVar;
        j8.c cVar;
        Context context = (Context) dVar.f13210e;
        this.j = context;
        Supplier supplier = (Supplier) dVar.f13208c;
        if (!((supplier == null && context == null) ? false : true)) {
            throw new IllegalStateException("Either a non-null context or a base directory path or supplier must be provided.");
        }
        if (supplier == null && context != null) {
            dVar.f13208c = new k8.c(0, this);
        }
        this.a = 1;
        String str = (String) dVar.f13207b;
        str.getClass();
        this.f4398b = str;
        Supplier supplier2 = (Supplier) dVar.f13208c;
        supplier2.getClass();
        this.f4399c = supplier2;
        this.f4400d = dVar.a;
        this.f4401e = 10485760L;
        this.f4402f = 2097152L;
        this.f4403g = (c) dVar.f13209d;
        synchronized (b.class) {
            try {
                if (b.f12425e == null) {
                    b.f12425e = new b(0, (byte) 0);
                }
                bVar = b.f12425e;
            } finally {
            }
        }
        this.f4404h = bVar;
        synchronized (j8.c.class) {
            try {
                if (j8.c.f12427d == null) {
                    j8.c.f12427d = new j8.c();
                }
                cVar = j8.c.f12427d;
            } finally {
            }
        }
        this.f4405i = cVar;
        synchronized (a.class) {
            if (a.f13839e == null) {
                a.f13839e = new a(0);
            }
        }
    }
}
