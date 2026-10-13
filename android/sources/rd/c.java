package rd;

import android.net.Uri;
import java.util.ArrayList;
import java.util.Collections;
import java.util.LinkedList;
import java.util.List;
import ke.d0;

/* loaded from: classes3.dex */
public final class c implements md.a {
    public final long a;

    /* renamed from: b, reason: collision with root package name */
    public final long f17214b;

    /* renamed from: c, reason: collision with root package name */
    public final long f17215c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f17216d;

    /* renamed from: e, reason: collision with root package name */
    public final long f17217e;

    /* renamed from: f, reason: collision with root package name */
    public final long f17218f;

    /* renamed from: g, reason: collision with root package name */
    public final long f17219g;

    /* renamed from: h, reason: collision with root package name */
    public final long f17220h;

    /* renamed from: i, reason: collision with root package name */
    public final e4.c f17221i;
    public final t j;
    public final Uri k;

    /* renamed from: l, reason: collision with root package name */
    public final i f17222l;

    /* renamed from: m, reason: collision with root package name */
    public final List f17223m;

    public c(long j, long j5, long j7, boolean z5, long j10, long j11, long j12, long j13, i iVar, e4.c cVar, t tVar, Uri uri, ArrayList arrayList) {
        this.a = j;
        this.f17214b = j5;
        this.f17215c = j7;
        this.f17216d = z5;
        this.f17217e = j10;
        this.f17218f = j11;
        this.f17219g = j12;
        this.f17220h = j13;
        this.f17222l = iVar;
        this.f17221i = cVar;
        this.k = uri;
        this.j = tVar;
        this.f17223m = arrayList;
    }

    @Override // md.a
    public final Object a(List list) {
        long j;
        LinkedList linkedList = new LinkedList(list);
        Collections.sort(linkedList);
        linkedList.add(new md.b(-1, -1, -1));
        ArrayList arrayList = new ArrayList();
        long j5 = 0;
        int i5 = 0;
        while (true) {
            if (i5 >= this.f17223m.size()) {
                break;
            }
            if (((md.b) linkedList.peek()).f14444d != i5) {
                long c6 = c(i5);
                if (c6 != -9223372036854775807L) {
                    j5 += c6;
                }
            } else {
                h b10 = b(i5);
                List list2 = b10.f17242c;
                md.b bVar = (md.b) linkedList.poll();
                int i6 = bVar.f14444d;
                ArrayList arrayList2 = new ArrayList();
                while (true) {
                    int i10 = bVar.f14445e;
                    a aVar = (a) list2.get(i10);
                    List list3 = aVar.f17207c;
                    ArrayList arrayList3 = new ArrayList();
                    do {
                        arrayList3.add((m) list3.get(bVar.f14446i));
                        bVar = (md.b) linkedList.poll();
                        if (bVar.f14444d != i6) {
                            break;
                        }
                    } while (bVar.f14445e == i10);
                    j = j5;
                    arrayList2.add(new a(aVar.a, aVar.f17206b, arrayList3, aVar.f17208d, aVar.f17209e, aVar.f17210f));
                    if (bVar.f14444d != i6) {
                        break;
                    }
                    j5 = j;
                }
                linkedList.addFirst(bVar);
                arrayList.add(new h(b10.a, b10.f17241b - j, arrayList2, b10.f17243d));
                j5 = j;
            }
            i5++;
        }
        long j7 = j5;
        long j10 = this.f17214b;
        return new c(this.a, j10 != -9223372036854775807L ? j10 - j7 : -9223372036854775807L, this.f17215c, this.f17216d, this.f17217e, this.f17218f, this.f17219g, this.f17220h, this.f17222l, this.f17221i, this.j, this.k, arrayList);
    }

    public final h b(int i5) {
        return (h) this.f17223m.get(i5);
    }

    public final long c(int i5) {
        long j;
        long j5;
        List list = this.f17223m;
        if (i5 == list.size() - 1) {
            j = this.f17214b;
            if (j == -9223372036854775807L) {
                return -9223372036854775807L;
            }
            j5 = ((h) list.get(i5)).f17241b;
        } else {
            j = ((h) list.get(i5 + 1)).f17241b;
            j5 = ((h) list.get(i5)).f17241b;
        }
        return j - j5;
    }

    public final long d(int i5) {
        return d0.I(c(i5));
    }
}
