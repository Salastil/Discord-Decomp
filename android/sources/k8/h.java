package k8;

import com.facebook.common.internal.Supplier;
import java.io.File;
import java.io.IOException;
import java.util.Collection;
import k2.r;
import w3.q;

/* loaded from: classes3.dex */
public final class h implements e {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final Supplier f13223b;

    /* renamed from: c, reason: collision with root package name */
    public final String f13224c;

    /* renamed from: d, reason: collision with root package name */
    public final j8.b f13225d;

    /* renamed from: e, reason: collision with root package name */
    public volatile j f13226e = new j((File) null, (b) null);

    public h(int i5, Supplier supplier, String str, j8.b bVar) {
        this.a = i5;
        this.f13225d = bVar;
        this.f13223b = supplier;
        this.f13224c = str;
    }

    @Override // k8.e
    public final i8.a a(Object obj, String str) {
        return i().a(obj, str);
    }

    @Override // k8.e
    public final void b() {
        try {
            i().b();
        } catch (IOException e9) {
            p8.a.e(h.class, "purgeUnexpectedResources", e9);
        }
    }

    @Override // k8.e
    public final Collection c() {
        return i().c();
    }

    @Override // k8.e
    public final long d(a aVar) {
        return i().d(aVar);
    }

    @Override // k8.e
    public final void e() {
        i().e();
    }

    @Override // k8.e
    public final r f(Object obj, String str) {
        return i().f(obj, str);
    }

    @Override // k8.e
    public final boolean g(Object obj, String str) {
        return i().g(obj, str);
    }

    public final void h() {
        File file = new File((File) this.f13223b.get(), this.f13224c);
        try {
            q.r(file);
            String absolutePath = file.getAbsolutePath();
            if (p8.a.a.isLoggable(3)) {
                p8.a.a.d(h.class.getSimpleName(), "Created cache directory " + absolutePath);
            }
            this.f13226e = new j(file, new b(file, this.a, this.f13225d));
        } catch (n8.b e9) {
            this.f13225d.getClass();
            throw e9;
        }
    }

    public final synchronized e i() {
        e eVar;
        File file;
        j jVar = this.f13226e;
        if (((e) jVar.f13231e) == null || (file = (File) jVar.f13232i) == null || !file.exists()) {
            if (((e) this.f13226e.f13231e) != null && ((File) this.f13226e.f13232i) != null) {
                tn.g.h((File) this.f13226e.f13232i);
            }
            h();
        }
        eVar = (e) this.f13226e.f13231e;
        eVar.getClass();
        return eVar;
    }

    @Override // k8.e
    public final boolean isExternal() {
        try {
            return i().isExternal();
        } catch (IOException unused) {
            return false;
        }
    }

    @Override // k8.e
    public final long remove(String str) {
        return i().remove(str);
    }
}
