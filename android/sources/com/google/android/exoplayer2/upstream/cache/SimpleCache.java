package com.google.android.exoplayer2.upstream.cache;

import a3.e;
import android.database.SQLException;
import android.os.ConditionVariable;
import android.util.SparseArray;
import android.util.SparseBooleanArray;
import androidx.appcompat.widget.w;
import bg.y0;
import fi.e1;
import fi.h0;
import java.io.File;
import java.io.IOException;
import java.security.SecureRandom;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.Random;
import java.util.TreeSet;
import je.a;
import je.b;
import je.f;
import je.g;
import je.i;
import je.j;
import je.k;
import je.l;
import je.m;
import je.o;
import je.q;
import je.s;
import je.t;
import k0.d;

/* loaded from: classes3.dex */
public final class SimpleCache implements b {
    public static final HashSet j = new HashSet();
    public final File a;

    /* renamed from: b, reason: collision with root package name */
    public final q f5567b;

    /* renamed from: c, reason: collision with root package name */
    public final w f5568c;

    /* renamed from: d, reason: collision with root package name */
    public final g f5569d;

    /* renamed from: e, reason: collision with root package name */
    public final HashMap f5570e;

    /* renamed from: f, reason: collision with root package name */
    public final Random f5571f;

    /* renamed from: g, reason: collision with root package name */
    public final boolean f5572g;

    /* renamed from: h, reason: collision with root package name */
    public long f5573h;

    /* renamed from: i, reason: collision with root package name */
    public a f5574i;

    public SimpleCache(File file, q qVar, lc.a aVar) {
        boolean add;
        w wVar = new w();
        wVar.f1141d = new HashMap();
        wVar.f1142e = new SparseArray();
        wVar.f1143i = new SparseBooleanArray();
        wVar.f1144v = new SparseBooleanArray();
        l lVar = new l(aVar);
        s9.a aVar2 = new s9.a(new File(file, "cached_content_index.exi"));
        wVar.f1145w = lVar;
        wVar.f1146x = aVar2;
        g gVar = new g(aVar);
        synchronized (SimpleCache.class) {
            add = j.add(file.getAbsoluteFile());
        }
        if (!add) {
            throw new IllegalStateException("Another SimpleCache instance uses the folder: " + file);
        }
        this.a = file;
        this.f5567b = qVar;
        this.f5568c = wVar;
        this.f5569d = gVar;
        this.f5570e = new HashMap();
        this.f5571f = new Random();
        this.f5572g = true;
        this.f5573h = -1L;
        ConditionVariable conditionVariable = new ConditionVariable();
        new s(this, conditionVariable).start();
        conditionVariable.block();
    }

    public static void a(SimpleCache simpleCache) {
        long j5;
        g gVar = simpleCache.f5569d;
        w wVar = simpleCache.f5568c;
        File file = simpleCache.a;
        if (!file.exists()) {
            try {
                e(file);
            } catch (a e9) {
                simpleCache.f5574i = e9;
                return;
            }
        }
        File[] listFiles = file.listFiles();
        if (listFiles == null) {
            String str = "Failed to list cache directory files: " + file;
            ke.b.r("SimpleCache", str);
            simpleCache.f5574i = new a(str);
            return;
        }
        int length = listFiles.length;
        int i5 = 0;
        while (true) {
            if (i5 >= length) {
                j5 = -1;
                break;
            }
            File file2 = listFiles[i5];
            String name = file2.getName();
            if (name.endsWith(".uid")) {
                try {
                    j5 = Long.parseLong(name.substring(0, name.indexOf(46)), 16);
                    break;
                } catch (NumberFormatException unused) {
                    ke.b.r("SimpleCache", "Malformed UID file: " + file2);
                    file2.delete();
                }
            }
            i5++;
        }
        simpleCache.f5573h = j5;
        if (j5 == -1) {
            try {
                simpleCache.f5573h = f(file);
            } catch (IOException e10) {
                String str2 = "Failed to create cache UID: " + file;
                ke.b.s("SimpleCache", str2, e10);
                simpleCache.f5574i = new a(str2, e10);
                return;
            }
        }
        try {
            wVar.D(simpleCache.f5573h);
            if (gVar != null) {
                gVar.c(simpleCache.f5573h);
                HashMap b10 = gVar.b();
                simpleCache.i(file, true, listFiles, b10);
                gVar.d(b10.keySet());
            } else {
                simpleCache.i(file, true, listFiles, null);
            }
            e1 it = h0.m(((HashMap) wVar.f1141d).keySet()).iterator();
            while (it.hasNext()) {
                wVar.K((String) it.next());
            }
            try {
                wVar.O();
            } catch (IOException e11) {
                ke.b.s("SimpleCache", "Storing index file failed", e11);
            }
        } catch (IOException e12) {
            String str3 = "Failed to initialize cache indices: " + file;
            ke.b.s("SimpleCache", str3, e12);
            simpleCache.f5574i = new a(str3, e12);
        }
    }

    public static void e(File file) {
        if (file.mkdirs() || file.isDirectory()) {
            return;
        }
        String str = "Failed to create cache directory: " + file;
        ke.b.r("SimpleCache", str);
        throw new a(str);
    }

    public static long f(File file) {
        long nextLong = new SecureRandom().nextLong();
        long abs = nextLong == Long.MIN_VALUE ? 0L : Math.abs(nextLong);
        File file2 = new File(file, d.k(Long.toString(abs, 16), ".uid"));
        if (file2.createNewFile()) {
            return abs;
        }
        throw new IOException("Failed to create UID file: " + file2);
    }

    public final void b(t tVar) {
        String str = tVar.f12734d;
        this.f5568c.z(str).f12742c.add(tVar);
        ArrayList arrayList = (ArrayList) this.f5570e.get(str);
        if (arrayList != null) {
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                ((q) arrayList.get(size)).b(this, tVar);
            }
        }
        this.f5567b.b(this, tVar);
    }

    public final synchronized void c(String str, g gVar) {
        d();
        w wVar = this.f5568c;
        k z5 = wVar.z(str);
        o oVar = z5.f12744e;
        o b10 = oVar.b(gVar);
        z5.f12744e = b10;
        if (!b10.equals(oVar)) {
            ((m) wVar.f1145w).c(z5);
        }
        try {
            this.f5568c.O();
        } catch (IOException e9) {
            throw new a(e9);
        }
    }

    public final synchronized void d() {
        a aVar = this.f5574i;
        if (aVar != null) {
            throw aVar;
        }
    }

    public final synchronized o g(String str) {
        k w5;
        w5 = this.f5568c.w(str);
        return w5 != null ? w5.f12744e : o.f12749c;
    }

    public final t h(long j5, long j7, String str) {
        t tVar;
        long j10;
        k w5 = this.f5568c.w(str);
        if (w5 == null) {
            return new t(str, j5, j7, -9223372036854775807L, null);
        }
        while (true) {
            t tVar2 = new t(w5.f12741b, j5, -1L, -9223372036854775807L, null);
            TreeSet treeSet = w5.f12742c;
            tVar = (t) treeSet.floor(tVar2);
            if (tVar == null || tVar.f12735e + tVar.f12736i <= j5) {
                t tVar3 = (t) treeSet.ceiling(tVar2);
                if (tVar3 != null) {
                    long j11 = tVar3.f12735e - j5;
                    if (j7 != -1) {
                        j11 = Math.min(j11, j7);
                    }
                    j10 = j11;
                } else {
                    j10 = j7;
                }
                tVar = new t(w5.f12741b, j5, j10, -9223372036854775807L, null);
            }
            if (!tVar.f12737v || tVar.f12738w.length() == tVar.f12736i) {
                break;
            }
            l();
        }
        return tVar;
    }

    public final void i(File file, boolean z5, File[] fileArr, Map map) {
        long j5;
        long j7;
        if (fileArr == null || fileArr.length == 0) {
            if (z5) {
                return;
            }
            file.delete();
            return;
        }
        for (File file2 : fileArr) {
            String name = file2.getName();
            if (z5 && name.indexOf(46) == -1) {
                i(file2, false, file2.listFiles(), map);
            } else if (!z5 || (!name.startsWith("cached_content_index.exi") && !name.endsWith(".uid"))) {
                f fVar = map != null ? (f) map.remove(name) : null;
                if (fVar != null) {
                    j5 = fVar.a;
                    j7 = fVar.f12731b;
                } else {
                    j5 = -1;
                    j7 = -9223372036854775807L;
                }
                t b10 = t.b(file2, j5, j7, this.f5568c);
                if (b10 != null) {
                    b(b10);
                } else {
                    file2.delete();
                }
            }
        }
    }

    public final synchronized void j(t tVar) {
        k w5 = this.f5568c.w(tVar.f12734d);
        w5.getClass();
        long j5 = tVar.f12735e;
        ArrayList arrayList = w5.f12743d;
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            if (((j) arrayList.get(i5)).a == j5) {
                arrayList.remove(i5);
                this.f5568c.K(w5.f12741b);
                notifyAll();
            }
        }
        throw new IllegalStateException();
    }

    public final void k(i iVar) {
        String str = iVar.f12734d;
        long j5 = iVar.f12736i;
        File file = iVar.f12738w;
        w wVar = this.f5568c;
        k w5 = wVar.w(str);
        if (w5 == null || !w5.f12742c.remove(iVar)) {
            return;
        }
        if (file != null) {
            file.delete();
        }
        g gVar = this.f5569d;
        if (gVar != null) {
            String name = file.getName();
            try {
                ((String) gVar.f12733b).getClass();
                try {
                    ((lc.a) gVar.a).getWritableDatabase().delete((String) gVar.f12733b, "name = ?", new String[]{name});
                } catch (SQLException e9) {
                    throw new y0(e9);
                }
            } catch (IOException unused) {
                e.x("Failed to remove file index entry for: ", name, "SimpleCache");
            }
        }
        wVar.K(w5.f12741b);
        ArrayList arrayList = (ArrayList) this.f5570e.get(iVar.f12734d);
        if (arrayList != null) {
            for (int size = arrayList.size() - 1; size >= 0; size--) {
                q qVar = (q) arrayList.get(size);
                qVar.a.remove(iVar);
                qVar.f12751b -= j5;
            }
        }
        q qVar2 = this.f5567b;
        qVar2.a.remove(iVar);
        qVar2.f12751b -= j5;
    }

    public final void l() {
        ArrayList arrayList = new ArrayList();
        Iterator it = Collections.unmodifiableCollection(((HashMap) this.f5568c.f1141d).values()).iterator();
        while (it.hasNext()) {
            Iterator it2 = ((k) it.next()).f12742c.iterator();
            while (it2.hasNext()) {
                i iVar = (i) it2.next();
                if (iVar.f12738w.length() != iVar.f12736i) {
                    arrayList.add(iVar);
                }
            }
        }
        for (int i5 = 0; i5 < arrayList.size(); i5++) {
            k((i) arrayList.get(i5));
        }
    }

    public final synchronized t m(long j5, long j7, String str) {
        int i5;
        d();
        t h6 = h(j5, j7, str);
        if (h6.f12737v) {
            return n(str, h6);
        }
        k z5 = this.f5568c.z(str);
        long j10 = h6.f12736i;
        ArrayList arrayList = z5.f12743d;
        while (i5 < arrayList.size()) {
            j jVar = (j) arrayList.get(i5);
            long j11 = jVar.a;
            if (j11 <= j5) {
                long j12 = jVar.f12740b;
                i5 = (j12 != -1 && j11 + j12 <= j5) ? i5 + 1 : 0;
                return null;
            }
            if (j10 != -1 && j5 + j10 <= j11) {
            }
            return null;
        }
        arrayList.add(new j(j5, j10));
        return h6;
    }

    /* JADX WARN: Removed duplicated region for block: B:18:0x009f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final t n(String str, t tVar) {
        boolean z5;
        File file;
        ArrayList arrayList;
        long j5 = tVar.f12736i;
        File file2 = tVar.f12738w;
        if (!this.f5572g) {
            return tVar;
        }
        file2.getClass();
        String name = file2.getName();
        long j7 = tVar.f12736i;
        long currentTimeMillis = System.currentTimeMillis();
        g gVar = this.f5569d;
        if (gVar != null) {
            try {
                gVar.e(j7, currentTimeMillis, name);
            } catch (IOException unused) {
                currentTimeMillis = currentTimeMillis;
                ke.b.N("SimpleCache", "Failed to update index with new touch timestamp.");
            }
            z5 = false;
        } else {
            z5 = true;
        }
        k w5 = this.f5568c.w(str);
        TreeSet treeSet = w5.f12742c;
        ke.b.k(treeSet.remove(tVar));
        file2.getClass();
        if (z5) {
            File parentFile = file2.getParentFile();
            parentFile.getClass();
            File c6 = t.c(parentFile, w5.a, tVar.f12735e, currentTimeMillis);
            if (file2.renameTo(c6)) {
                file = c6;
                ke.b.k(tVar.f12737v);
                t tVar2 = new t(tVar.f12734d, tVar.f12735e, tVar.f12736i, currentTimeMillis, file);
                treeSet.add(tVar2);
                arrayList = (ArrayList) this.f5570e.get(tVar.f12734d);
                if (arrayList != null) {
                    for (int size = arrayList.size() - 1; size >= 0; size--) {
                        q qVar = (q) arrayList.get(size);
                        qVar.a.remove(tVar);
                        qVar.f12751b -= j5;
                        qVar.b(this, tVar2);
                    }
                }
                q qVar2 = this.f5567b;
                qVar2.a.remove(tVar);
                qVar2.f12751b -= j5;
                qVar2.b(this, tVar2);
                return tVar2;
            }
            ke.b.N("CachedContent", "Failed to rename " + file2 + " to " + c6);
        }
        file = file2;
        ke.b.k(tVar.f12737v);
        t tVar22 = new t(tVar.f12734d, tVar.f12735e, tVar.f12736i, currentTimeMillis, file);
        treeSet.add(tVar22);
        arrayList = (ArrayList) this.f5570e.get(tVar.f12734d);
        if (arrayList != null) {
        }
        q qVar22 = this.f5567b;
        qVar22.a.remove(tVar);
        qVar22.f12751b -= j5;
        qVar22.b(this, tVar22);
        return tVar22;
    }
}
