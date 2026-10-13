package com.google.android.gms.internal.play_billing;

import java.util.concurrent.CancellationException;

/* loaded from: classes3.dex */
public final class d1 {

    /* renamed from: b, reason: collision with root package name */
    public static final d1 f5725b;

    /* renamed from: c, reason: collision with root package name */
    public static final d1 f5726c;
    public final Throwable a;

    static {
        if (w4.f5873v) {
            f5726c = null;
            f5725b = null;
        } else {
            f5726c = new d1(null);
            f5725b = new d1(null);
        }
    }

    public d1(CancellationException cancellationException) {
        this.a = cancellationException;
    }
}
