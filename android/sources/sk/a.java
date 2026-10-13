package sk;

import java.util.Locale;

/* loaded from: classes3.dex */
public final class a extends d {

    /* renamed from: e, reason: collision with root package name */
    public final long f18036e;

    /* renamed from: i, reason: collision with root package name */
    public final long f18037i;

    public a(long j, long j5) {
        super(new Throwable());
        this.f18036e = j;
        this.f18037i = j5;
    }

    @Override // java.lang.Throwable
    public final String getMessage() {
        Locale locale = Locale.ENGLISH;
        StringBuilder n6 = k0.d.n(this.f18036e, "Insufficient disk space, estimated file size in bytes ", ", available disk space in bytes ");
        n6.append(this.f18037i);
        return n6.toString();
    }
}
