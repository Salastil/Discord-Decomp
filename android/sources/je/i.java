package je;

import java.io.File;

/* loaded from: classes3.dex */
public abstract class i implements Comparable {

    /* renamed from: d, reason: collision with root package name */
    public final String f12734d;

    /* renamed from: e, reason: collision with root package name */
    public final long f12735e;

    /* renamed from: i, reason: collision with root package name */
    public final long f12736i;

    /* renamed from: v, reason: collision with root package name */
    public final boolean f12737v;

    /* renamed from: w, reason: collision with root package name */
    public final File f12738w;

    /* renamed from: x, reason: collision with root package name */
    public final long f12739x;

    public i(String str, long j, long j5, long j7, File file) {
        this.f12734d = str;
        this.f12735e = j;
        this.f12736i = j5;
        this.f12737v = file != null;
        this.f12738w = file;
        this.f12739x = j7;
    }

    @Override // java.lang.Comparable
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public final int compareTo(i iVar) {
        String str = iVar.f12734d;
        String str2 = this.f12734d;
        if (!str2.equals(str)) {
            return str2.compareTo(iVar.f12734d);
        }
        long j = this.f12735e - iVar.f12735e;
        if (j == 0) {
            return 0;
        }
        return j < 0 ? -1 : 1;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder("[");
        sb2.append(this.f12735e);
        sb2.append(", ");
        return a3.e.m(sb2, this.f12736i, "]");
    }
}
