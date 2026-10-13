package com.google.android.gms.net;

import android.content.Context;
import bf.k;
import java.util.concurrent.atomic.AtomicLong;
import ze.h;

/* loaded from: classes3.dex */
public final class b {

    /* renamed from: c, reason: collision with root package name */
    public static volatile b f5902c;

    /* renamed from: d, reason: collision with root package name */
    public static final Object f5903d = new Object();
    public final df.b a;

    /* renamed from: b, reason: collision with root package name */
    public final AtomicLong f5904b = new AtomicLong(-1);

    public b(Context context) {
        this.a = new df.b(context, null, df.b.k, new k("module:cronet_dynamite"), h.f21206c);
    }
}
