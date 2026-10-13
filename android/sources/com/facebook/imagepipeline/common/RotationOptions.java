package com.facebook.imagepipeline.common;

import a3.e;
import kotlin.jvm.internal.StringCompanionObject;

/* loaded from: classes3.dex */
public final class RotationOptions {

    /* renamed from: c, reason: collision with root package name */
    public static final RotationOptions f4585c = new RotationOptions(-1, false);

    /* renamed from: d, reason: collision with root package name */
    public static final RotationOptions f4586d = new RotationOptions(-2, false);

    /* renamed from: e, reason: collision with root package name */
    public static final RotationOptions f4587e = new RotationOptions(-1, true);
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final boolean f4588b;

    public RotationOptions(int i5, boolean z5) {
        this.a = i5;
        this.f4588b = z5;
    }

    public final boolean a() {
        return this.a == -1;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof RotationOptions)) {
            return false;
        }
        RotationOptions rotationOptions = (RotationOptions) obj;
        return this.a == rotationOptions.a && this.f4588b == rotationOptions.f4588b;
    }

    public final int hashCode() {
        Integer valueOf = Integer.valueOf(this.a);
        Boolean valueOf2 = Boolean.valueOf(this.f4588b);
        return ((valueOf.hashCode() + 31) * 31) + valueOf2.hashCode();
    }

    public final String toString() {
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        return e.p(new Object[]{Integer.valueOf(this.a), Boolean.valueOf(this.f4588b)}, 2, null, "%d defer:%b", "format(...)");
    }
}
