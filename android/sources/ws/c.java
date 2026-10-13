package ws;

import kotlin.jvm.internal.Intrinsics;
import okio.ByteString;

/* loaded from: classes3.dex */
public final class c {

    /* renamed from: d, reason: collision with root package name */
    public static final ByteString f20067d;

    /* renamed from: e, reason: collision with root package name */
    public static final ByteString f20068e;

    /* renamed from: f, reason: collision with root package name */
    public static final ByteString f20069f;

    /* renamed from: g, reason: collision with root package name */
    public static final ByteString f20070g;

    /* renamed from: h, reason: collision with root package name */
    public static final ByteString f20071h;

    /* renamed from: i, reason: collision with root package name */
    public static final ByteString f20072i;
    public final ByteString a;

    /* renamed from: b, reason: collision with root package name */
    public final ByteString f20073b;

    /* renamed from: c, reason: collision with root package name */
    public final int f20074c;

    static {
        ByteString byteString = ByteString.f16115v;
        f20067d = io.sentry.hints.j.D(":");
        f20068e = io.sentry.hints.j.D(":status");
        f20069f = io.sentry.hints.j.D(":method");
        f20070g = io.sentry.hints.j.D(":path");
        f20071h = io.sentry.hints.j.D(":scheme");
        f20072i = io.sentry.hints.j.D(":authority");
    }

    public c(ByteString name, ByteString value) {
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(value, "value");
        this.a = name;
        this.f20073b = value;
        this.f20074c = value.c() + name.c() + 32;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return Intrinsics.areEqual(this.a, cVar.a) && Intrinsics.areEqual(this.f20073b, cVar.f20073b);
    }

    public final int hashCode() {
        return this.f20073b.hashCode() + (this.a.hashCode() * 31);
    }

    public final String toString() {
        return this.a.k() + ": " + this.f20073b.k();
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public c(String name, String value) {
        this(io.sentry.hints.j.D(name), io.sentry.hints.j.D(value));
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(value, "value");
        ByteString byteString = ByteString.f16115v;
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public c(ByteString name, String value) {
        this(name, io.sentry.hints.j.D(value));
        Intrinsics.checkNotNullParameter(name, "name");
        Intrinsics.checkNotNullParameter(value, "value");
        ByteString byteString = ByteString.f16115v;
    }
}
