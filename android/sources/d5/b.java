package d5;

import c5.f;
import c5.v;
import java.io.BufferedOutputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;

/* loaded from: classes.dex */
public final class b {
    public long a;

    /* renamed from: b, reason: collision with root package name */
    public final String f7419b;

    /* renamed from: c, reason: collision with root package name */
    public final String f7420c;

    /* renamed from: d, reason: collision with root package name */
    public final long f7421d;

    /* renamed from: e, reason: collision with root package name */
    public final long f7422e;

    /* renamed from: f, reason: collision with root package name */
    public final long f7423f;

    /* renamed from: g, reason: collision with root package name */
    public final long f7424g;

    /* renamed from: h, reason: collision with root package name */
    public final List f7425h;

    public b(String str, String str2, long j, long j5, long j7, long j10, List list) {
        this.f7419b = str;
        this.f7420c = "".equals(str2) ? null : str2;
        this.f7421d = j;
        this.f7422e = j5;
        this.f7423f = j7;
        this.f7424g = j10;
        this.f7425h = list;
    }

    public static b a(com.google.firebase.messaging.d dVar) {
        if (c.j(dVar) != 538247942) {
            throw new IOException();
        }
        String l6 = c.l(dVar);
        String l7 = c.l(dVar);
        long k = c.k(dVar);
        long k5 = c.k(dVar);
        long k7 = c.k(dVar);
        long k10 = c.k(dVar);
        int j = c.j(dVar);
        if (j < 0) {
            throw new IOException(k0.d.i(j, "readHeaderList size="));
        }
        List arrayList = j == 0 ? Collections.EMPTY_LIST : new ArrayList();
        for (int i5 = 0; i5 < j; i5++) {
            arrayList.add(new f(c.l(dVar).intern(), c.l(dVar).intern()));
        }
        return new b(l6, l7, k, k5, k7, k10, arrayList);
    }

    public final c5.b b(byte[] bArr) {
        c5.b bVar = new c5.b();
        bVar.a = bArr;
        bVar.f3314b = this.f7420c;
        bVar.f3315c = this.f7421d;
        bVar.f3316d = this.f7422e;
        bVar.f3317e = this.f7423f;
        bVar.f3318f = this.f7424g;
        TreeMap treeMap = new TreeMap(String.CASE_INSENSITIVE_ORDER);
        List<f> list = this.f7425h;
        for (f fVar : list) {
            treeMap.put(fVar.a, fVar.f3330b);
        }
        bVar.f3319g = treeMap;
        bVar.f3320h = Collections.unmodifiableList(list);
        return bVar;
    }

    public final boolean c(BufferedOutputStream bufferedOutputStream) {
        try {
            c.n(bufferedOutputStream, 538247942);
            c.p(bufferedOutputStream, this.f7419b);
            String str = this.f7420c;
            if (str == null) {
                str = "";
            }
            c.p(bufferedOutputStream, str);
            c.o(bufferedOutputStream, this.f7421d);
            c.o(bufferedOutputStream, this.f7422e);
            c.o(bufferedOutputStream, this.f7423f);
            c.o(bufferedOutputStream, this.f7424g);
            List<f> list = this.f7425h;
            if (list != null) {
                c.n(bufferedOutputStream, list.size());
                for (f fVar : list) {
                    c.p(bufferedOutputStream, fVar.a);
                    c.p(bufferedOutputStream, fVar.f3330b);
                }
            } else {
                c.n(bufferedOutputStream, 0);
            }
            bufferedOutputStream.flush();
            return true;
        } catch (IOException e9) {
            v.b("%s", e9.toString());
            return false;
        }
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /* JADX WARN: Multi-variable type inference failed */
    /* JADX WARN: Type inference failed for: r0v0, types: [java.util.List] */
    /* JADX WARN: Type inference failed for: r0v1, types: [java.util.ArrayList] */
    /* JADX WARN: Type inference failed for: r0v2 */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public b(String str, c5.b bVar) {
        this(str, r2, r3, r5, r7, r9, r0);
        String str2 = bVar.f3314b;
        long j = bVar.f3315c;
        long j5 = bVar.f3316d;
        long j7 = bVar.f3317e;
        long j10 = bVar.f3318f;
        List list = bVar.f3320h;
        if (list == 0) {
            Map map = bVar.f3319g;
            list = new ArrayList(map.size());
            for (Map.Entry entry : map.entrySet()) {
                list.add(new f((String) entry.getKey(), (String) entry.getValue()));
            }
        }
    }
}
