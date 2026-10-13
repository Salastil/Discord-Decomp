package com.facebook.imagepipeline.common;

import a3.e;
import kotlin.jvm.internal.StringCompanionObject;

/* loaded from: classes3.dex */
public final class ResizeOptions {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f4584b;

    public ResizeOptions(int i5, int i6) {
        this.a = i5;
        this.f4584b = i6;
        if (i5 <= 0) {
            throw new IllegalStateException("Check failed.");
        }
        if (i6 <= 0) {
            throw new IllegalStateException("Check failed.");
        }
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof ResizeOptions)) {
            return false;
        }
        ResizeOptions resizeOptions = (ResizeOptions) obj;
        return this.a == resizeOptions.a && this.f4584b == resizeOptions.f4584b;
    }

    public final int hashCode() {
        return ((this.a + 31) * 31) + this.f4584b;
    }

    public final String toString() {
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        return e.p(new Object[]{Integer.valueOf(this.a), Integer.valueOf(this.f4584b)}, 2, null, "%dx%d", "format(...)");
    }
}
