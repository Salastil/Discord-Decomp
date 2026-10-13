package rs;

import et.y;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Iterator;
import kotlin.jvm.internal.Intrinsics;
import okio.Source;

/* loaded from: classes3.dex */
public final class d {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final long[] f17637b;

    /* renamed from: c, reason: collision with root package name */
    public final ArrayList f17638c;

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f17639d;

    /* renamed from: e, reason: collision with root package name */
    public boolean f17640e;

    /* renamed from: f, reason: collision with root package name */
    public boolean f17641f;

    /* renamed from: g, reason: collision with root package name */
    public a3.f f17642g;

    /* renamed from: h, reason: collision with root package name */
    public int f17643h;

    /* renamed from: i, reason: collision with root package name */
    public long f17644i;
    public final /* synthetic */ g j;

    public d(g this$0, String key) {
        Intrinsics.checkNotNullParameter(this$0, "this$0");
        Intrinsics.checkNotNullParameter(key, "key");
        this.j = this$0;
        this.a = key;
        this$0.getClass();
        this.f17637b = new long[2];
        this.f17638c = new ArrayList();
        this.f17639d = new ArrayList();
        StringBuilder sb2 = new StringBuilder(key);
        sb2.append('.');
        int length = sb2.length();
        for (int i5 = 0; i5 < 2; i5++) {
            sb2.append(i5);
            this.f17638c.add(new File(this.j.f17651d, sb2.toString()));
            sb2.append(".tmp");
            this.f17639d.add(new File(this.j.f17651d, sb2.toString()));
            sb2.setLength(length);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r3v6, types: [rs.c] */
    public final e a() {
        byte[] bArr = qs.b.a;
        if (!this.f17640e) {
            return null;
        }
        g gVar = this.j;
        if (!gVar.H && (this.f17642g != null || this.f17641f)) {
            return null;
        }
        ArrayList arrayList = new ArrayList();
        long[] jArr = (long[]) this.f17637b.clone();
        int i5 = 0;
        while (i5 < 2) {
            int i6 = i5 + 1;
            try {
                File file = (File) this.f17638c.get(i5);
                Intrinsics.checkNotNullParameter(file, "file");
                et.c l6 = y.l(file);
                if (!gVar.H) {
                    this.f17643h++;
                    l6 = new c(l6, gVar, this);
                }
                arrayList.add(l6);
                i5 = i6;
            } catch (FileNotFoundException unused) {
                Iterator it = arrayList.iterator();
                while (it.hasNext()) {
                    qs.b.c((Source) it.next());
                }
                try {
                    gVar.C(this);
                    return null;
                } catch (IOException unused2) {
                    return null;
                }
            }
        }
        return new e(this.j, this.a, this.f17644i, arrayList, jArr);
    }
}
