package sd;

import android.net.Uri;
import android.util.Pair;
import com.google.android.exoplayer2.Format;
import com.google.android.exoplayer2.upstream.DataSource;
import fi.e0;
import fi.r0;
import fi.w0;
import ic.c0;
import ie.u0;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import ke.d0;
import nd.z0;

/* loaded from: classes3.dex */
public final class j {
    public final l a;

    /* renamed from: b, reason: collision with root package name */
    public final DataSource f17872b;

    /* renamed from: c, reason: collision with root package name */
    public final DataSource f17873c;

    /* renamed from: d, reason: collision with root package name */
    public final r3.g f17874d;

    /* renamed from: e, reason: collision with root package name */
    public final Uri[] f17875e;

    /* renamed from: f, reason: collision with root package name */
    public final Format[] f17876f;

    /* renamed from: g, reason: collision with root package name */
    public final td.c f17877g;

    /* renamed from: h, reason: collision with root package name */
    public final z0 f17878h;

    /* renamed from: i, reason: collision with root package name */
    public final List f17879i;
    public final c0 k;

    /* renamed from: l, reason: collision with root package name */
    public boolean f17880l;

    /* renamed from: n, reason: collision with root package name */
    public nd.b f17882n;

    /* renamed from: o, reason: collision with root package name */
    public Uri f17883o;

    /* renamed from: p, reason: collision with root package name */
    public boolean f17884p;

    /* renamed from: q, reason: collision with root package name */
    public ge.p f17885q;

    /* renamed from: s, reason: collision with root package name */
    public boolean f17887s;
    public final rd.u j = new rd.u(1);

    /* renamed from: m, reason: collision with root package name */
    public byte[] f17881m = d0.f13298f;

    /* renamed from: r, reason: collision with root package name */
    public long f17886r = -9223372036854775807L;

    public j(l lVar, td.c cVar, Uri[] uriArr, Format[] formatArr, k kVar, u0 u0Var, r3.g gVar, List list, c0 c0Var) {
        this.a = lVar;
        this.f17877g = cVar;
        this.f17875e = uriArr;
        this.f17876f = formatArr;
        this.f17874d = gVar;
        this.f17879i = list;
        this.k = c0Var;
        c cVar2 = (c) kVar;
        DataSource createDataSource = cVar2.a.createDataSource();
        this.f17872b = createDataSource;
        if (u0Var != null) {
            createDataSource.n(u0Var);
        }
        this.f17873c = cVar2.a.createDataSource();
        this.f17878h = new z0("", formatArr);
        ArrayList arrayList = new ArrayList();
        for (int i5 = 0; i5 < uriArr.length; i5++) {
            if ((formatArr[i5].f5231w & 16384) == 0) {
                arrayList.add(Integer.valueOf(i5));
            }
        }
        z0 z0Var = this.f17878h;
        int[] S = ki.b.S(arrayList);
        h hVar = new h(z0Var, S);
        hVar.f17868g = hVar.j(z0Var.f15211v[S[0]]);
        this.f17885q = hVar;
    }

    public final pd.m[] a(m mVar, long j) {
        List list;
        j jVar = this;
        m mVar2 = mVar;
        int a = mVar2 == null ? -1 : jVar.f17878h.a(mVar2.f16363v);
        int length = jVar.f17885q.length();
        pd.m[] mVarArr = new pd.m[length];
        boolean z5 = false;
        int i5 = 0;
        while (i5 < length) {
            int h6 = jVar.f17885q.h(i5);
            Uri uri = jVar.f17875e[h6];
            td.c cVar = jVar.f17877g;
            if (cVar.c(uri)) {
                td.i a10 = cVar.a(z5, uri);
                a10.getClass();
                long j5 = a10.f18299h - cVar.K;
                Pair c6 = jVar.c(mVar2, h6 != a ? true : z5, a10, j5, j);
                long longValue = ((Long) c6.first).longValue();
                int intValue = ((Integer) c6.second).intValue();
                long j7 = a10.k;
                e0 e0Var = a10.f18308s;
                e0 e0Var2 = a10.f18307r;
                int i6 = (int) (longValue - j7);
                if (i6 < 0 || e0Var2.size() < i6) {
                    fi.c0 c0Var = e0.f8656e;
                    list = r0.f8704w;
                } else {
                    ArrayList arrayList = new ArrayList();
                    if (i6 < e0Var2.size()) {
                        if (intValue != -1) {
                            td.f fVar = (td.f) e0Var2.get(i6);
                            if (intValue == 0) {
                                arrayList.add(fVar);
                            } else if (intValue < fVar.J.size()) {
                                e0 e0Var3 = fVar.J;
                                arrayList.addAll(e0Var3.subList(intValue, e0Var3.size()));
                            }
                            i6++;
                        }
                        arrayList.addAll(e0Var2.subList(i6, e0Var2.size()));
                        intValue = 0;
                    }
                    if (a10.f18303n != -9223372036854775807L) {
                        if (intValue == -1) {
                            intValue = 0;
                        }
                        if (intValue < e0Var.size()) {
                            arrayList.addAll(e0Var.subList(intValue, e0Var.size()));
                        }
                    }
                    list = Collections.unmodifiableList(arrayList);
                }
                mVarArr[i5] = new g(j5, list);
            } else {
                mVarArr[i5] = pd.m.f16379r;
            }
            i5++;
            jVar = this;
            mVar2 = mVar;
            z5 = false;
        }
        return mVarArr;
    }

    public final int b(m mVar) {
        int i5 = mVar.L;
        if (i5 == -1) {
            return 1;
        }
        td.i a = this.f17877g.a(false, this.f17875e[this.f17878h.a(mVar.f16363v)]);
        a.getClass();
        e0 e0Var = a.f18307r;
        int i6 = (int) (mVar.G - a.k);
        if (i6 < 0) {
            return 1;
        }
        e0 e0Var2 = i6 < e0Var.size() ? ((td.f) e0Var.get(i6)).J : a.f18308s;
        if (i5 >= e0Var2.size()) {
            return 2;
        }
        td.d dVar = (td.d) e0Var2.get(i5);
        if (dVar.J) {
            return 0;
        }
        return d0.a(Uri.parse(ke.b.J(a.a, dVar.f18284d)), mVar.f16361e.a) ? 1 : 2;
    }

    public final Pair c(m mVar, boolean z5, td.i iVar, long j, long j5) {
        boolean z6 = true;
        if (mVar != null) {
            long j7 = mVar.G;
            int i5 = mVar.L;
            if (!z5) {
                if (!mVar.f17892e0) {
                    return new Pair(Long.valueOf(j7), Integer.valueOf(i5));
                }
                if (i5 == -1) {
                    j7 = mVar.a();
                }
                return new Pair(Long.valueOf(j7), Integer.valueOf(i5 != -1 ? i5 + 1 : -1));
            }
        }
        long j10 = iVar.f18310u;
        e0 e0Var = iVar.f18308s;
        long j11 = iVar.k;
        e0 e0Var2 = iVar.f18307r;
        long j12 = j10 + j;
        if (mVar != null && !this.f17884p) {
            j5 = mVar.f16366y;
        }
        if (!iVar.f18304o && j5 >= j12) {
            return new Pair(Long.valueOf(j11 + e0Var2.size()), -1);
        }
        long j13 = j5 - j;
        Long valueOf = Long.valueOf(j13);
        int i6 = 0;
        if (this.f17877g.J && mVar != null) {
            z6 = false;
        }
        int c6 = d0.c(valueOf, z6, e0Var2);
        long j14 = c6 + j11;
        if (c6 >= 0) {
            td.f fVar = (td.f) e0Var2.get(c6);
            e0 e0Var3 = j13 < fVar.f18288w + fVar.f18286i ? fVar.J : e0Var;
            while (true) {
                if (i6 >= e0Var3.size()) {
                    break;
                }
                td.d dVar = (td.d) e0Var3.get(i6);
                if (j13 >= dVar.f18288w + dVar.f18286i) {
                    i6++;
                } else if (dVar.I) {
                    j14 += e0Var3 == e0Var ? 1L : 0L;
                    r1 = i6;
                }
            }
        }
        return new Pair(Long.valueOf(j14), Integer.valueOf(r1));
    }

    /* JADX WARN: Multi-variable type inference failed */
    public final f d(Uri uri, int i5, boolean z5) {
        if (uri == null) {
            return null;
        }
        rd.u uVar = this.j;
        byte[] bArr = (byte[]) ((e) uVar.f17275e).remove(uri);
        if (bArr != null) {
            return null;
        }
        Map map = Collections.EMPTY_MAP;
        ie.p pVar = new ie.p(uri, 0L, 1, null, w0.f8728y, 0L, -1L, null, 1);
        Format format = this.f17876f[i5];
        int m5 = this.f17885q.m();
        Object p3 = this.f17885q.p();
        byte[] bArr2 = this.f17881m;
        f fVar = new f(this.f17873c, pVar, 3, format, m5, p3, -9223372036854775807L, -9223372036854775807L);
        if (bArr2 == null) {
            bArr2 = d0.f13298f;
        }
        fVar.G = bArr2;
        return fVar;
    }
}
