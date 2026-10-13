package com.facebook.imagepipeline.common;

import a3.e;
import f7.a;
import fo.l;
import fo.u;
import j8.b;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.StringCompanionObject;

/* loaded from: classes3.dex */
public final class BytesRange {

    /* renamed from: c, reason: collision with root package name */
    public static final u f4575c = l.a(new a(7));
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f4576b;

    public BytesRange(int i5, int i6) {
        this.a = i5;
        this.f4576b = i6;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(BytesRange.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type com.facebook.imagepipeline.common.BytesRange");
        BytesRange bytesRange = (BytesRange) obj;
        return this.a == bytesRange.a && this.f4576b == bytesRange.f4576b;
    }

    public final int hashCode() {
        return (this.a * 31) + this.f4576b;
    }

    public final String toString() {
        StringCompanionObject stringCompanionObject = StringCompanionObject.INSTANCE;
        return e.p(new Object[]{b.b(this.a), b.b(this.f4576b)}, 2, null, "%s-%s", "format(...)");
    }
}
