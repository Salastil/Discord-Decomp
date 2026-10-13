package vd;

import com.google.android.exoplayer2.Format;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class c implements md.a {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final int f19350b;

    /* renamed from: c, reason: collision with root package name */
    public final int f19351c;

    /* renamed from: d, reason: collision with root package name */
    public final boolean f19352d;

    /* renamed from: e, reason: collision with root package name */
    public final a f19353e;

    /* renamed from: f, reason: collision with root package name */
    public final b[] f19354f;

    /* renamed from: g, reason: collision with root package name */
    public final long f19355g;

    /* renamed from: h, reason: collision with root package name */
    public final long f19356h;

    public c(int i5, int i6, long j, long j5, int i10, boolean z5, a aVar, b[] bVarArr) {
        this.a = i5;
        this.f19350b = i6;
        this.f19355g = j;
        this.f19356h = j5;
        this.f19351c = i10;
        this.f19352d = z5;
        this.f19353e = aVar;
        this.f19354f = bVarArr;
    }

    @Override // md.a
    public final Object a(List list) {
        ArrayList arrayList = new ArrayList(list);
        Collections.sort(arrayList);
        ArrayList arrayList2 = new ArrayList();
        ArrayList arrayList3 = new ArrayList();
        b bVar = null;
        int i5 = 0;
        while (i5 < arrayList.size()) {
            md.b bVar2 = (md.b) arrayList.get(i5);
            b bVar3 = this.f19354f[bVar2.f14445e];
            if (bVar3 != bVar && bVar != null) {
                arrayList2.add(bVar.a((Format[]) arrayList3.toArray(new Format[0])));
                arrayList3.clear();
            }
            arrayList3.add(bVar3.j[bVar2.f14446i]);
            i5++;
            bVar = bVar3;
        }
        if (bVar != null) {
            arrayList2.add(bVar.a((Format[]) arrayList3.toArray(new Format[0])));
        }
        return new c(this.a, this.f19350b, this.f19355g, this.f19356h, this.f19351c, this.f19352d, this.f19353e, (b[]) arrayList2.toArray(new b[0]));
    }
}
