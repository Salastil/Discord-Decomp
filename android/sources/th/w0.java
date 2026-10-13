package th;

import android.os.ParcelFileDescriptor;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Properties;

/* loaded from: classes3.dex */
public final class w0 {

    /* renamed from: d, reason: collision with root package name */
    public static final a5.m f18612d = new a5.m("ExtractorTaskFinder", 3);
    public final v0 a;

    /* renamed from: b, reason: collision with root package name */
    public final s f18613b;

    /* renamed from: c, reason: collision with root package name */
    public final a0 f18614c;

    public w0(v0 v0Var, s sVar, a0 a0Var) {
        this.a = v0Var;
        this.f18613b = sVar;
        this.f18614c = a0Var;
    }

    public final ij.j a() {
        a5.m mVar;
        ij.j jVar;
        ij.j jVar2;
        a5.m mVar2;
        a1 a1Var;
        p1 p1Var;
        a0 a0Var;
        ArrayList arrayList;
        d0 d0Var;
        j1 j1Var;
        int i5;
        s sVar = this.f18613b;
        v0 v0Var = this.a;
        try {
            v0Var.f18601d.lock();
            ArrayList arrayList2 = new ArrayList();
            for (s0 s0Var : v0Var.f18600c.values()) {
                if (m0.c(s0Var.f18571c.f18561d)) {
                    arrayList2.add(s0Var);
                }
            }
            if (!arrayList2.isEmpty()) {
                HashMap n6 = sVar.n();
                Iterator it = arrayList2.iterator();
                while (true) {
                    boolean hasNext = it.hasNext();
                    mVar = f18612d;
                    if (!hasNext) {
                        jVar = null;
                        break;
                    }
                    s0 s0Var2 = (s0) it.next();
                    r0 r0Var = s0Var2.f18571c;
                    Long l6 = (Long) n6.get(r0Var.a);
                    if (l6 != null && r0Var.f18559b == l6.longValue()) {
                        mVar.a("Found promote pack task for session %s with pack %s.", Integer.valueOf(s0Var2.a), r0Var.a);
                        int i6 = s0Var2.a;
                        String str = r0Var.a;
                        jVar = new l1(i6, str, (int) s.b(new File(sVar.d(), str), true), s0Var2.f18570b, r0Var.f18559b);
                        break;
                    }
                }
                if (jVar == null) {
                    Iterator it2 = arrayList2.iterator();
                    while (true) {
                        if (!it2.hasNext()) {
                            jVar = null;
                            break;
                        }
                        s0 s0Var3 = (s0) it2.next();
                        try {
                            r0 r0Var2 = s0Var3.f18571c;
                            if (sVar.h(s0Var3.f18570b, r0Var2.f18559b, r0Var2.a) == r0Var2.f18563f.size()) {
                                mVar.a("Found final move task for session %s with pack %s.", Integer.valueOf(s0Var3.a), r0Var2.a);
                                jVar = new c1(s0Var3.a, r0Var2.a, s0Var3.f18570b, r0Var2.f18559b, r0Var2.f18560c);
                                break;
                            }
                        } catch (IOException e9) {
                            throw new l0("Failed to check number of completed merges for session " + s0Var3.a + ", pack " + s0Var3.f18571c.a, e9, s0Var3.a);
                        }
                    }
                    if (jVar == null) {
                        Iterator it3 = arrayList2.iterator();
                        loop3: while (true) {
                            if (!it3.hasNext()) {
                                mVar2 = mVar;
                                a1Var = null;
                                break;
                            }
                            s0 s0Var4 = (s0) it3.next();
                            r0 r0Var3 = s0Var4.f18571c;
                            if (m0.c(r0Var3.f18561d)) {
                                Iterator it4 = r0Var3.f18563f.iterator();
                                while (it4.hasNext()) {
                                    t0 t0Var = (t0) it4.next();
                                    a5.m mVar3 = mVar;
                                    if (this.f18613b.l(s0Var4.f18570b, r0Var3.a, r0Var3.f18559b, t0Var.a).exists()) {
                                        mVar2 = mVar3;
                                        mVar2.a("Found merge task for session %s with pack %s and slice %s.", Integer.valueOf(s0Var4.a), r0Var3.a, t0Var.a);
                                        a1Var = new a1(s0Var4.a, r0Var3.a, s0Var4.f18570b, r0Var3.f18559b, t0Var.a);
                                        break loop3;
                                    }
                                    mVar = mVar3;
                                }
                            }
                        }
                        if (a1Var == null) {
                            Iterator it5 = arrayList2.iterator();
                            loop5: while (true) {
                                if (!it5.hasNext()) {
                                    p1Var = null;
                                    break;
                                }
                                s0 s0Var5 = (s0) it5.next();
                                r0 r0Var4 = s0Var5.f18571c;
                                if (m0.c(r0Var4.f18561d)) {
                                    Iterator it6 = r0Var4.f18563f.iterator();
                                    while (it6.hasNext()) {
                                        t0 t0Var2 = (t0) it6.next();
                                        if (b(s0Var5, t0Var2)) {
                                            if (this.f18613b.k(s0Var5.f18570b, r0Var4.a, r0Var4.f18559b, t0Var2.a).exists()) {
                                                mVar2.a("Found verify task for session %s with pack %s and slice %s.", Integer.valueOf(s0Var5.a), r0Var4.a, t0Var2.a);
                                                p1Var = new p1(s0Var5.a, r0Var4.a, s0Var5.f18570b, r0Var4.f18559b, t0Var2.a, t0Var2.f18582b);
                                                break loop5;
                                            }
                                        }
                                    }
                                }
                            }
                            if (p1Var == null) {
                                Iterator it7 = arrayList2.iterator();
                                loop7: while (true) {
                                    boolean hasNext2 = it7.hasNext();
                                    int i10 = 2;
                                    a0Var = this.f18614c;
                                    if (!hasNext2) {
                                        arrayList = arrayList2;
                                        d0Var = null;
                                        break;
                                    }
                                    s0 s0Var6 = (s0) it7.next();
                                    r0 r0Var5 = s0Var6.f18571c;
                                    if (m0.c(r0Var5.f18561d)) {
                                        Iterator it8 = r0Var5.f18563f.iterator();
                                        while (it8.hasNext()) {
                                            t0 t0Var3 = (t0) it8.next();
                                            int i11 = t0Var3.f18586f;
                                            boolean z5 = i11 == 1 || i11 == i10;
                                            String str2 = t0Var3.a;
                                            ArrayList arrayList3 = t0Var3.f18584d;
                                            if (!z5) {
                                                s sVar2 = this.f18613b;
                                                r0 r0Var6 = s0Var6.f18571c;
                                                arrayList = arrayList2;
                                                Iterator it9 = it7;
                                                try {
                                                    i5 = new n1(sVar2, r0Var6.a, s0Var6.f18570b, r0Var6.f18559b, t0Var3.a).a();
                                                } catch (IOException e10) {
                                                    mVar2.b("Slice checkpoint corrupt, restarting extraction. %s", e10);
                                                    i5 = 0;
                                                }
                                                if (i5 != -1 && ((q0) arrayList3.get(i5)).a) {
                                                    mVar2.a("Found extraction task using compression format %s for session %s, pack %s, slice %s, chunk %s.", Integer.valueOf(t0Var3.f18585e), Integer.valueOf(s0Var6.a), s0Var6.f18571c.a, str2, Integer.valueOf(i5));
                                                    ParcelFileDescriptor.AutoCloseInputStream a = a0Var.a(s0Var6.a, i5, s0Var6.f18571c.a, str2);
                                                    int i12 = s0Var6.a;
                                                    r0 r0Var7 = s0Var6.f18571c;
                                                    String str3 = r0Var7.a;
                                                    int i13 = s0Var6.f18570b;
                                                    long j = r0Var7.f18559b;
                                                    String str4 = r0Var7.f18560c;
                                                    String str5 = t0Var3.a;
                                                    int i14 = t0Var3.f18585e;
                                                    int size = arrayList3.size();
                                                    r0 r0Var8 = s0Var6.f18571c;
                                                    d0Var = new d0(i12, str3, i13, j, str4, str5, i14, i5, size, r0Var8.f18562e, r0Var8.f18561d, a);
                                                    break loop7;
                                                }
                                                it7 = it9;
                                                arrayList2 = arrayList;
                                                i10 = 2;
                                            }
                                        }
                                    }
                                }
                                if (d0Var == null) {
                                    Iterator it10 = arrayList.iterator();
                                    loop9: while (true) {
                                        if (!it10.hasNext()) {
                                            j1Var = null;
                                            break;
                                        }
                                        s0 s0Var7 = (s0) it10.next();
                                        r0 r0Var9 = s0Var7.f18571c;
                                        if (m0.c(r0Var9.f18561d)) {
                                            Iterator it11 = r0Var9.f18563f.iterator();
                                            while (it11.hasNext()) {
                                                t0 t0Var4 = (t0) it11.next();
                                                int i15 = t0Var4.f18586f;
                                                boolean z6 = i15 == 1 || i15 == 2;
                                                String str6 = t0Var4.a;
                                                if (z6 && ((q0) t0Var4.f18584d.get(0)).a && !b(s0Var7, t0Var4)) {
                                                    mVar2.a("Found patch slice task using patch format %s for session %s, pack %s, slice %s.", Integer.valueOf(t0Var4.f18586f), Integer.valueOf(s0Var7.a), s0Var7.f18571c.a, str6);
                                                    ParcelFileDescriptor.AutoCloseInputStream a10 = a0Var.a(s0Var7.a, 0, s0Var7.f18571c.a, str6);
                                                    int i16 = s0Var7.a;
                                                    String str7 = s0Var7.f18571c.a;
                                                    int b10 = (int) s.b(new File(sVar.d(), str7), true);
                                                    String str8 = s0Var7.f18571c.a;
                                                    j1Var = new j1(i16, str7, b10, s.b(new File(new File(sVar.d(), str8), String.valueOf((int) s.b(new File(sVar.d(), str8), true))), true), s0Var7.f18570b, s0Var7.f18571c.f18559b, t0Var4.f18586f, t0Var4.a, t0Var4.f18583c, a10);
                                                    break loop9;
                                                }
                                            }
                                        }
                                    }
                                    if (j1Var != null) {
                                        v0Var.f18601d.unlock();
                                        return j1Var;
                                    }
                                } else {
                                    jVar2 = d0Var;
                                }
                            } else {
                                jVar2 = p1Var;
                            }
                        } else {
                            jVar2 = a1Var;
                        }
                        return jVar2;
                    }
                }
                jVar2 = jVar;
                return jVar2;
            }
            jVar2 = null;
            return jVar2;
        } finally {
            v0Var.f18601d.unlock();
        }
    }

    public final boolean b(s0 s0Var, t0 t0Var) {
        r0 r0Var = s0Var.f18571c;
        String str = r0Var.a;
        long j = r0Var.f18559b;
        int i5 = s0Var.f18570b;
        String str2 = t0Var.a;
        a5.m mVar = n1.f18527h;
        s sVar = this.f18613b;
        sVar.getClass();
        File file = new File(new File(new File(new File(sVar.c(i5, j, str), "_slices"), "_metadata"), str2), "checkpoint.dat");
        if (file.exists()) {
            try {
                FileInputStream fileInputStream = new FileInputStream(file);
                try {
                    Properties properties = new Properties();
                    properties.load(fileInputStream);
                    fileInputStream.close();
                    if (properties.getProperty("fileStatus") == null) {
                        mVar.b("Slice checkpoint file corrupt while checking if extraction finished.", new Object[0]);
                        return false;
                    }
                    if (Integer.parseInt(properties.getProperty("fileStatus")) == 4) {
                        return true;
                    }
                } finally {
                }
            } catch (IOException e9) {
                mVar.b("Could not read checkpoint while checking if extraction finished. %s", e9);
                return false;
            }
        }
        return false;
    }
}
