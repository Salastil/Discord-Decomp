package iq;

import java.io.IOException;

/* loaded from: classes3.dex */
public final class q extends IOException {

    /* renamed from: d, reason: collision with root package name */
    public a f12236d;

    public q(String str) {
        super(str);
        this.f12236d = null;
    }

    public static q a() {
        return new q("While parsing a protocol message, the input ended unexpectedly in the middle of a field.  This could mean either than the input has been truncated or that an embedded message misreported its own length.");
    }
}
