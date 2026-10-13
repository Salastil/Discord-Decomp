package k8;

import java.io.File;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class j implements n8.a {

    /* renamed from: v, reason: collision with root package name */
    public static final Object f13227v = new Object();

    /* renamed from: w, reason: collision with root package name */
    public static j f13228w;

    /* renamed from: x, reason: collision with root package name */
    public static int f13229x;

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f13230d;

    /* renamed from: e, reason: collision with root package name */
    public Object f13231e;

    /* renamed from: i, reason: collision with root package name */
    public Object f13232i;

    public /* synthetic */ j() {
        this.f13230d = 0;
    }

    public static j b() {
        synchronized (f13227v) {
            try {
                j jVar = f13228w;
                if (jVar == null) {
                    return new j();
                }
                f13228w = (j) jVar.f13232i;
                jVar.f13232i = null;
                f13229x--;
                return jVar;
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    @Override // n8.a
    public void a(File file) {
        j h6 = b.h(file, (b) this.f13232i);
        if (h6 == null || ((String) h6.f13231e) != ".cnt") {
            return;
        }
        ((ArrayList) this.f13231e).add(new a(file, (String) h6.f13232i));
    }

    public void e() {
        synchronized (f13227v) {
            try {
                int i5 = f13229x;
                if (i5 < 5) {
                    f13229x = i5 + 1;
                    j jVar = f13228w;
                    if (jVar != null) {
                        this.f13232i = jVar;
                    }
                    f13228w = this;
                }
            } catch (Throwable th2) {
                throw th2;
            }
        }
    }

    public String toString() {
        switch (this.f13230d) {
            case 2:
                StringBuilder sb2 = new StringBuilder();
                sb2.append((String) this.f13231e);
                sb2.append("(");
                return com.discord.chat.bridge.botuikit.a.j(sb2, (String) this.f13232i, ")");
            default:
                return super.toString();
        }
    }

    public j(File file, b bVar) {
        this.f13230d = 3;
        this.f13231e = bVar;
        this.f13232i = file;
    }

    public j(b bVar) {
        this.f13230d = 1;
        this.f13232i = bVar;
        this.f13231e = new ArrayList();
    }

    public j(String str, String str2) {
        this.f13230d = 2;
        this.f13231e = str;
        this.f13232i = str2;
    }

    @Override // n8.a
    public void c(File file) {
    }

    @Override // n8.a
    public void d(File file) {
    }
}
