package io.sentry.internal.gestures;

import android.view.View;
import java.lang.ref.WeakReference;
import java.util.Arrays;

/* loaded from: classes3.dex */
public final class b {
    public final WeakReference a;

    /* renamed from: b, reason: collision with root package name */
    public final String f11624b;

    /* renamed from: c, reason: collision with root package name */
    public final String f11625c;

    /* renamed from: d, reason: collision with root package name */
    public final String f11626d = "old_view_system";

    public b(View view, String str, String str2) {
        this.a = new WeakReference(view);
        this.f11624b = str;
        this.f11625c = str2;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj == null || b.class != obj.getClass()) {
            return false;
        }
        b bVar = (b) obj;
        return d9.a.k(this.f11624b, bVar.f11624b) && d9.a.k(this.f11625c, bVar.f11625c) && d9.a.k(null, null);
    }

    public final int hashCode() {
        return Arrays.hashCode(new Object[]{this.a, this.f11625c, null});
    }
}
