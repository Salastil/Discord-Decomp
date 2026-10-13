package androidx.work.impl;

import a1.d;
import a3.b;
import android.content.Context;
import e4.c;
import e4.e;
import e4.f;
import e4.h;
import e4.i;
import e4.l;
import e4.m;
import e4.p;
import e4.r;
import g3.a;
import java.util.Arrays;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes.dex */
public final class WorkDatabase_Impl extends WorkDatabase {
    public volatile p k;

    /* renamed from: l, reason: collision with root package name */
    public volatile c f2577l;

    /* renamed from: m, reason: collision with root package name */
    public volatile r f2578m;

    /* renamed from: n, reason: collision with root package name */
    public volatile i f2579n;

    /* renamed from: o, reason: collision with root package name */
    public volatile l f2580o;

    /* renamed from: p, reason: collision with root package name */
    public volatile m f2581p;

    /* renamed from: q, reason: collision with root package name */
    public volatile e f2582q;

    @Override // androidx.work.impl.WorkDatabase
    public final a3.i d() {
        return new a3.i(this, new HashMap(0), new HashMap(0), "Dependency", "WorkSpec", "WorkTag", "SystemIdInfo", "WorkName", "WorkProgress", "Preference");
    }

    @Override // androidx.work.impl.WorkDatabase
    public final g3.c e(b bVar) {
        d callback = new d(bVar, new rj.b(this));
        Context context = bVar.a;
        Intrinsics.checkNotNullParameter(context, "context");
        Intrinsics.checkNotNullParameter(context, "context");
        String str = bVar.f44b;
        Intrinsics.checkNotNullParameter(callback, "callback");
        return bVar.f45c.k(new a(context, str, callback, false, false));
    }

    @Override // androidx.work.impl.WorkDatabase
    public final c f() {
        c cVar;
        if (this.f2577l != null) {
            return this.f2577l;
        }
        synchronized (this) {
            try {
                if (this.f2577l == null) {
                    this.f2577l = new c(this);
                }
                cVar = this.f2577l;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return cVar;
    }

    @Override // androidx.work.impl.WorkDatabase
    public final List g(Map map) {
        int i5 = 13;
        int i6 = 14;
        int i10 = 17;
        int i11 = 18;
        return Arrays.asList(new w3.d(i5, i6, 10), new w3.d(11), new w3.d(16, i10, 12), new w3.d(i10, i11, i5), new w3.d(i11, 19, i6), new w3.d(15));
    }

    @Override // androidx.work.impl.WorkDatabase
    public final Set i() {
        return new HashSet();
    }

    @Override // androidx.work.impl.WorkDatabase
    public final Map j() {
        HashMap hashMap = new HashMap();
        List list = Collections.EMPTY_LIST;
        hashMap.put(p.class, list);
        hashMap.put(c.class, list);
        hashMap.put(r.class, list);
        hashMap.put(i.class, list);
        hashMap.put(l.class, list);
        hashMap.put(m.class, list);
        hashMap.put(e.class, list);
        hashMap.put(f.class, list);
        return hashMap;
    }

    @Override // androidx.work.impl.WorkDatabase
    public final e l() {
        e eVar;
        if (this.f2582q != null) {
            return this.f2582q;
        }
        synchronized (this) {
            try {
                if (this.f2582q == null) {
                    this.f2582q = new e(this);
                }
                eVar = this.f2582q;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return eVar;
    }

    @Override // androidx.work.impl.WorkDatabase
    public final i p() {
        i iVar;
        if (this.f2579n != null) {
            return this.f2579n;
        }
        synchronized (this) {
            try {
                if (this.f2579n == null) {
                    i iVar2 = new i();
                    iVar2.f7952d = this;
                    Intrinsics.checkNotNullParameter(this, "database");
                    iVar2.f7953e = new e4.b(this, false, 2);
                    iVar2.f7954i = new h(this, 0);
                    iVar2.f7955v = new h(this, 1);
                    this.f2579n = iVar2;
                }
                iVar = this.f2579n;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return iVar;
    }

    @Override // androidx.work.impl.WorkDatabase
    public final l r() {
        l lVar;
        if (this.f2580o != null) {
            return this.f2580o;
        }
        synchronized (this) {
            try {
                if (this.f2580o == null) {
                    this.f2580o = new l(this);
                }
                lVar = this.f2580o;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return lVar;
    }

    @Override // androidx.work.impl.WorkDatabase
    public final m s() {
        m mVar;
        if (this.f2581p != null) {
            return this.f2581p;
        }
        synchronized (this) {
            try {
                if (this.f2581p == null) {
                    this.f2581p = new m(this);
                }
                mVar = this.f2581p;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return mVar;
    }

    @Override // androidx.work.impl.WorkDatabase
    public final p t() {
        p pVar;
        if (this.k != null) {
            return this.k;
        }
        synchronized (this) {
            try {
                if (this.k == null) {
                    this.k = new p(this);
                }
                pVar = this.k;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return pVar;
    }

    @Override // androidx.work.impl.WorkDatabase
    public final r u() {
        r rVar;
        if (this.f2578m != null) {
            return this.f2578m;
        }
        synchronized (this) {
            try {
                if (this.f2578m == null) {
                    this.f2578m = new r(this);
                }
                rVar = this.f2578m;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return rVar;
    }
}
