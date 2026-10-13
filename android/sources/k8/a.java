package k8;

import java.io.File;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final i8.a f13197b;

    /* renamed from: c, reason: collision with root package name */
    public long f13198c;

    /* renamed from: d, reason: collision with root package name */
    public long f13199d;

    public a(File file, String str) {
        str.getClass();
        this.a = str;
        Intrinsics.checkNotNullParameter(file, "file");
        this.f13197b = new i8.a(file);
        this.f13198c = -1L;
        this.f13199d = -1L;
    }

    public final long a() {
        if (this.f13199d < 0) {
            this.f13199d = this.f13197b.a.lastModified();
        }
        return this.f13199d;
    }
}
