package io.sentry.android.core.util;

import android.content.Context;

/* loaded from: classes3.dex */
public final class a {
    public volatile Object a = null;

    /* renamed from: b, reason: collision with root package name */
    public final i7.a f11343b;

    public a(i7.a aVar) {
        this.f11343b = aVar;
    }

    public final Object a(Context context) {
        if (this.a == null) {
            synchronized (this) {
                try {
                    if (this.a == null) {
                        this.a = this.f11343b.i(context);
                    }
                } finally {
                }
            }
        }
        return this.a;
    }
}
