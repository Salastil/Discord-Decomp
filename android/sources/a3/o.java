package a3;

import java.util.Iterator;
import java.util.Map;
import java.util.TreeMap;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class o implements g3.e, g3.d {
    public static final TreeMap F = new TreeMap();
    public int E;

    /* renamed from: d, reason: collision with root package name */
    public final int f91d;

    /* renamed from: e, reason: collision with root package name */
    public volatile String f92e;

    /* renamed from: i, reason: collision with root package name */
    public final long[] f93i;

    /* renamed from: v, reason: collision with root package name */
    public final double[] f94v;

    /* renamed from: w, reason: collision with root package name */
    public final String[] f95w;

    /* renamed from: x, reason: collision with root package name */
    public final byte[][] f96x;

    /* renamed from: y, reason: collision with root package name */
    public final int[] f97y;

    public o(int i5) {
        this.f91d = i5;
        int i6 = i5 + 1;
        this.f97y = new int[i6];
        this.f93i = new long[i6];
        this.f94v = new double[i6];
        this.f95w = new String[i6];
        this.f96x = new byte[i6][];
    }

    public static final o g(int i5, String query) {
        Intrinsics.checkNotNullParameter(query, "query");
        TreeMap treeMap = F;
        synchronized (treeMap) {
            Map.Entry ceilingEntry = treeMap.ceilingEntry(Integer.valueOf(i5));
            if (ceilingEntry == null) {
                Unit unit = Unit.a;
                o oVar = new o(i5);
                Intrinsics.checkNotNullParameter(query, "query");
                oVar.f92e = query;
                oVar.E = i5;
                return oVar;
            }
            treeMap.remove(ceilingEntry.getKey());
            o sqliteQuery = (o) ceilingEntry.getValue();
            sqliteQuery.getClass();
            Intrinsics.checkNotNullParameter(query, "query");
            sqliteQuery.f92e = query;
            sqliteQuery.E = i5;
            Intrinsics.checkNotNullExpressionValue(sqliteQuery, "sqliteQuery");
            return sqliteQuery;
        }
    }

    @Override // g3.d
    public final void F(byte[] value, int i5) {
        Intrinsics.checkNotNullParameter(value, "value");
        this.f97y[i5] = 5;
        this.f96x[i5] = value;
    }

    @Override // g3.d
    public final void S(int i5) {
        this.f97y[i5] = 1;
    }

    @Override // g3.e
    public final String c() {
        String str = this.f92e;
        if (str != null) {
            return str;
        }
        throw new IllegalStateException("Required value was null.");
    }

    @Override // g3.e
    public final void f(g3.d statement) {
        Intrinsics.checkNotNullParameter(statement, "statement");
        int i5 = this.E;
        if (1 > i5) {
            return;
        }
        int i6 = 1;
        while (true) {
            int i10 = this.f97y[i6];
            if (i10 == 1) {
                statement.S(i6);
            } else if (i10 == 2) {
                statement.z(i6, this.f93i[i6]);
            } else if (i10 == 3) {
                statement.u(i6, this.f94v[i6]);
            } else if (i10 == 4) {
                String str = this.f95w[i6];
                if (str == null) {
                    throw new IllegalArgumentException("Required value was null.");
                }
                statement.n(i6, str);
            } else if (i10 == 5) {
                byte[] bArr = this.f96x[i6];
                if (bArr == null) {
                    throw new IllegalArgumentException("Required value was null.");
                }
                statement.F(bArr, i6);
            }
            if (i6 == i5) {
                return;
            } else {
                i6++;
            }
        }
    }

    public final void i() {
        TreeMap treeMap = F;
        synchronized (treeMap) {
            treeMap.put(Integer.valueOf(this.f91d), this);
            if (treeMap.size() > 15) {
                int size = treeMap.size() - 10;
                Iterator it = treeMap.descendingKeySet().iterator();
                Intrinsics.checkNotNullExpressionValue(it, "queryPool.descendingKeySet().iterator()");
                while (true) {
                    int i5 = size - 1;
                    if (size <= 0) {
                        break;
                    }
                    it.next();
                    it.remove();
                    size = i5;
                }
            }
            Unit unit = Unit.a;
        }
    }

    @Override // g3.d
    public final void n(int i5, String value) {
        Intrinsics.checkNotNullParameter(value, "value");
        this.f97y[i5] = 4;
        this.f95w[i5] = value;
    }

    @Override // g3.d
    public final void u(int i5, double d6) {
        this.f97y[i5] = 3;
        this.f94v[i5] = d6;
    }

    @Override // g3.d
    public final void z(int i5, long j) {
        this.f97y[i5] = 2;
        this.f93i[i5] = j;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
    }
}
